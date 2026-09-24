#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework.h"
#include "../include/SLIF_LaunchQue_Framework_Global.h"
#include <iostream>
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
    std::list<bool>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
// public.
    slif::SLIF_LaunchQue_Framework_App_Control::SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId);
        stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    slif::SLIF_LaunchQue_Framework_App_Control::~SLIF_LaunchQue_Framework_App_Control() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : ~SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : ~SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(uint8_t* threadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(threadId)." << std::endl;
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
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(uint8_t* threadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(threadId)." << std::endl;
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
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId, obj);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    unsigned long long slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned long long : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned long long : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        return *temp;
    }
    bool slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId,uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: <= bool : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        return *temp;
    }
    uint8_t slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* threadId,uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: <= uint8_t : dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
        return *temp;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: => unsigned long long  : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: => unsigned long long  : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId, uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: => bool : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        *temp = newState;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* threadId, uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, slot);
        std::cout << "thread " << std::to_string(*threadId) << " :: => uint8_t : dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
        *temp = concurrentThreadId;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(threadId)." << std::endl;
    }
// private.
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(uint8_t* threadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId_A, uint8_t concurrentThreadId_B) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId)." << std::endl;
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
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID = new std::list<unsigned long long>(threadId);
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->resize(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId));//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID = new std::list<unsigned long long>(threadId);
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>(threadId);
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
            std::advance(temp, index);
            *temp = true;
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t>(threadId);
        while (stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT8_MAX;
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
            std::advance(temp, index);
            *temp = false;
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<uint8_t>(index);
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
    }
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::list<uint8_t>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::list<uint8_t>* : stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: => unsigned long long : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(threadId)." << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t* threadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: => unsigned long long : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(threadId)." << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* threadId, uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: => bool : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)." << std::endl;
        *temp = newState;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* threadId, uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, slot);
        std::cout << "thread " << std::to_string(*threadId) << " :: => uint8_t : stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId)." << std::endl;
        *temp = concurrentThreadId;
    }