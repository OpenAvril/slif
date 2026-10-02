#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute.h"
#include "../../CLIB_MutexQue/include/CLIB_MutexQue.h"
#include "../include/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include <iostream>

#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus.h"
std::list<void*>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_CLIB_List_Of_Busses;
    int* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_CLIB_MutexQue_Of_Bus;
    std::list<int*>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction;
    std::list<std::list<int*>>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock;
// public.
    slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId, obj);
        stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::~CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute() {
        delete stat_PGM_CLIB_List_Of_Busses;
        delete stat_PGM_CLIB_MutexQue_Of_Bus;
        delete stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction;
        delete stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(uint8_t* sysThreadId) {
        stat_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(uint8_t* sysThreadId) {
        stat_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);
    }
    void* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(uint8_t* sysThreadId, uint8_t* busId) {
        auto temp = stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->begin();
        std::advance(temp, *busId);
        return *temp;
    }
    int* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_For_Bus(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_MutexQue_Of_Bus(sysThreadId);
    }
    std::list<void*>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_List_Of_Busses(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId);
    }
    int* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(uint8_t* sysThreadId, uint8_t* busId) {
        auto temp = stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->begin();
        std::advance(temp, *busId);
        return *temp;
    }
    int*  slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(uint8_t* sysThreadId, uint8_t* busId, uint8_t* junctionId) {
        
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
        stat_PGM_CLIB_List_Of_Busses = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_Bus = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
        stat_PGM_CLIB_List_Of_Busses = new std::list<void*>();
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->resize(1);
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->assign(0, obj->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, 0));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Bus(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
        int* handleId = new int(0);
        stat_PGM_CLIB_MutexQue_Of_Bus = new int();
        stat_PGM_CLIB_MutexQue_Of_Bus = slif::MutexQue::generateHandle(sysThreadId);
        slif::MutexQue::reInitialiseHandle(sysThreadId, stat_PGM_CLIB_MutexQue_Of_Bus, static_cast<std::byte>(1));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_MutexQue_Of___BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction = new std::list<int*>();
        stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->resize(slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->size()); index++) {
            stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->assign(index, slif::MutexQue::generateHandle(sysThreadId));
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_MutexQue_Of___BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_MutexQue_Of___BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock = new std::list<std::list<int*>>();
        stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->resize(slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionID = 0; junctionID < static_cast<uint8_t>(stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->size()); junctionID++) {
            auto temp = stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->begin();
            std::advance(temp, junctionID);
            auto max = CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(max, junctionID);
            temp->resize(*max);
            for (uint8_t accessId = 0; accessId < static_cast<uint8_t>(temp->size()); accessId++) {
                std::advance(temp, accessId);
                temp->assign(accessId, slif::MutexQue::generateHandle(sysThreadId));
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_MutexQue_Of___BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        auto oldSize = stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->size();
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->resize(static_cast<uint8_t>(slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId) / 2));
        for (uint8_t index = oldSize; index < static_cast<uint8_t>(stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->size()); index++) {
            stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->assign(index, slif::Bus::generateHandle(sysThreadId));
        }
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(uint8_t* sysThreadId) {
        auto oldSize = stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->size();
        stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->resize(slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t index = oldSize; index < static_cast<uint8_t>(stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->size()); index++) {
            stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)->assign(index, slif::MutexQue::generateHandle(sysThreadId));
        }
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(uint8_t* sysThreadId) {
        auto oldSize = stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->size();
        stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->resize(slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionID = oldSize; junctionID < static_cast<uint8_t>(stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->size()); junctionID++) {
            auto temp = stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)->begin();
            std::advance(temp, junctionID);
            auto max = CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(max, junctionID);
            temp->resize(*max);
            for (uint8_t accessId = 0; accessId < static_cast<uint8_t>(temp->size()); accessId++) {
                std::advance(temp, accessId);
                temp->assign(accessId, slif::MutexQue::generateHandle(sysThreadId));
            }
        }
    }
    std::list<void*>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<void*>* : stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_List_Of_Busses;
    }
    int* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_MutexQue_Of_Bus(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<void*>* : stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_MutexQue_Of_Bus;
    }
    std::list<int*>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<int*>* : stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction;
    }
    std::list<std::list<int*>>* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<std::list<int*>>* : stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock;
    }