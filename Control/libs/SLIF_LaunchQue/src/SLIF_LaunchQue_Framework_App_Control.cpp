#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework.h"
#include "../include/SLIF_LaunchQue_Framework_Global.h"
#include <iostream>
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_sysThreadId;
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_sysThreadId;
    std::list<bool>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t>* slif::SLIF_LaunchQue_Framework_App_Control::_stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
// public.
    slif::SLIF_LaunchQue_Framework_App_Control::SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(sysThreadId);
        stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    slif::SLIF_LaunchQue_Framework_App_Control::~SLIF_LaunchQue_Framework_App_Control() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : ~SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_sysThreadId;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_sysThreadId;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : ~SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(uint8_t* sysThreadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId)" << std::endl;
        for (int concurrentsysThreadId_A = 0; concurrentsysThreadId_A < *number_Implemented_Threads - 2; concurrentsysThreadId_A++) {
            for (int concurrentsysThreadId_B = concurrentsysThreadId_A + 1; concurrentsysThreadId_B < *number_Implemented_Threads - 1; concurrentsysThreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_A)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)) {
                    if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_B)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, concurrentsysThreadId_A, concurrentsysThreadId_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_B)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)) {
                        if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_A) > obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, concurrentsysThreadId_A, concurrentsysThreadId_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_A)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                    if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_B)) == obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                        if (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_A) < obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, concurrentsysThreadId_A, concurrentsysThreadId_B);
                        }
                    }
                }
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(uint8_t* sysThreadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId)" << std::endl;
        for (int index = 0; index < *number_Implemented_Threads; index++) {
            switch (obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, index)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, index, 0);
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, index, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, index) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, index, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, index) + 1);
                    obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, index, 0);
                    break;
                }
                default:
                    break;
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId, obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId)" << std::endl;
    }
    unsigned long long slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned long long : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned long long : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)" << std::endl;
        return *temp;
    }
    bool slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId,uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
        return *temp;
    }
    uint8_t slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId,uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t : dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId)" << std::endl;
        return *temp;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => unsigned long long  : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => unsigned long long  : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)" << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, bool newState) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => bool : dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
        *temp = newState;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, uint8_t slot, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, slot);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => uint8_t : dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId)" << std::endl;
        *temp = concurrentsysThreadId;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
// private.
    void slif::SLIF_LaunchQue_Framework_App_Control::dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(uint8_t* sysThreadId, slif::SLIF_LaunchQue_Framework* obj, uint8_t concurrentsysThreadId_A, uint8_t concurrentsysThreadId_B) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId)" << std::endl;
        uint32_t* temp_Int = nullptr;
        uint8_t* temp_UnnsignedChar = nullptr;
        *temp_Int = UINT32_MAX;
        *temp_UnnsignedChar = UINT8_MAX;
        *temp_Int = obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_A);
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_A, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_B));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_B, *temp_Int);
        *temp_Int = obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_A);
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_A, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_B));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId, concurrentsysThreadId_B, *temp_Int);
        *temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_A);
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_A, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_B));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentsysThreadId_B, *temp_UnnsignedChar);
        delete temp_Int;
        delete temp_UnnsignedChar;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_sysThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)" << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_sysThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)" << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_sysThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->resize(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId));//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_sysThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = true;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, class SLIF_LaunchQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
        _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t>();
        while (stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId) == nullptr) {}
        stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = UINT8_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = false;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<uint8_t>(index);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
    }
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= std::list<unsigned long long>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_sysThreadId;
    }
    std::list<unsigned long long>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= std::list<unsigned long long>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_sysThreadId;
    }
    std::list<bool>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= std::list<uint8_t>* : stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= std::list<uint8_t>* : stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)." << std::endl;
        return _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => unsigned long long : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_sysThreadId(sysThreadId)." << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => unsigned long long : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        *temp = newValue;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, bool newState) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => bool : stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        *temp = newState;
    }
    void slif::SLIF_LaunchQue_Framework_App_Control::stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, uint8_t slot, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, slot);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: => uint8_t : stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
        *temp = concurrentsysThreadId;
    }