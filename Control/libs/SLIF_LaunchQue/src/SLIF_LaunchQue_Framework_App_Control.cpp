#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework.h"
#include "../include/SLIF_LaunchQue_Framework_Global.h"
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
    std::list<bool>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
// public.
    slif::SLIF_LaunchQue_Framework_App_Control::SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
        stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId);
        stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    slif::SLIF_LaunchQue_Framework_App_Control::~SLIF_LaunchQue_Framework_App_Control() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : ~SLIF_LaunchQue_Framework_App_Control(threadId)"));
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : ~SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(uint8_t* threadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(threadId)"));
        for (int concurrentThreadId_A = 0; concurrentThreadId_A < *number_Implemented_Threads - 2; concurrentThreadId_A++) {
            for (int concurrentThreadId_B = concurrentThreadId_A + 1; concurrentThreadId_B < *number_Implemented_Threads - 1; concurrentThreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)) {
                    if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)) {
                        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId, obj, concurrentThreadId_A, concurrentThreadId_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)) {
                        if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_A) > obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId, obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)) {
                    if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)) {
                        if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_A) < obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId, obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
            }
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(uint8_t* threadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(threadId)"));
        for (int index = 0; index < *number_Implemented_Threads; index++) {
            switch (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, index)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, index, 0);
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, index, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, index) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, index, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, index) + 1);
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, index, 0);
                    break;
                }
                default:
                    break;
            }
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId, obj);
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(threadId)"));
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(threadId)"));
    }
    unsigned long long slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= unsigned long long : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId)"));
        return *temp;
    }
    unsigned long long slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= unsigned long long : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId)"));
        return *temp;
    }
    bool slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId,uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= bool : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)"));
        return *temp;
    }
    uint8_t slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* threadId,uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= uint8_t : dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId)"));
        return *temp;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => unsigned long long  : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId)"));
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => unsigned long long  : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId)"));
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId, uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => bool : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)"));
        *temp = newState;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* threadId, uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, slot);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => uint8_t : dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId)"));
        *temp = concurrentThreadId;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)"));
    }
// private.
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(uint8_t* threadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId_A, uint8_t concurrentThreadId_B) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId)"));
        uint32_t* temp_Int = nullptr;
        uint8_t* temp_UnnsignedChar = nullptr;
        *temp_Int = UINT32_MAX;
        *temp_UnnsignedChar = UINT8_MAX;
        *temp_Int = obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId, concurrentThreadId_B, *temp_Int);
        *temp_Int = obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId, concurrentThreadId_B, *temp_Int);
        *temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentThreadId_B, *temp_UnnsignedChar);
        delete temp_Int;
        delete temp_UnnsignedChar;
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID = nullptr;
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID = nullptr;
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = nullptr;
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID = new std::list<unsigned long long>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->resize(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId));//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)."));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID = new std::list<unsigned long long>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)."));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
            std::advance(temp, index);
            *temp = true;
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)."));
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT8_MAX;
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)."));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)."));
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)."));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)."));
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)."));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
            std::advance(temp, index);
            *temp = false;
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)."));
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<uint8_t>(index);
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)."));
    }
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= std::list<unsigned long long>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)."));
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= std::list<unsigned long long>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)."));
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= std::list<uint8_t>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= std::list<uint8_t>* : stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)."));
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => unsigned long long : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId)."));
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => unsigned long long : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId)."));
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId, uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => bool : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)."));
        *temp = newState;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* threadId, uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, slot);
        slif::ThreadLogs::printl(threadId, new std::string(" :: => uint8_t : stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId)."));
        *temp = concurrentThreadId;
    }