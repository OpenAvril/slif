#include "../include/CLIB_SystemBus_Framework_App_Execute.h"
#include "../include/CLIB_SystemBus_Framework_Global.h"
#include <iostream>
#include "CLIB_Bus.h"
    int* slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_CLIB_MutexQue_Of_SystemBusses;
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_CLIB_List_Of_Busses;
// public.
    slif::CLIB_SystemBus_Framework_App_Execute::CLIB_SystemBus_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    slif::CLIB_SystemBus_Framework_App_Execute::~CLIB_SystemBus_Framework_App_Execute() {
        delete stat_PGM_CLIB_List_Of_Busses;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(uint8_t* sysThreadId, uint8_t* busId) {
        auto temp = stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->begin();
        std::advance(temp, *busId);
        return *temp;
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_MutexQue_Of_SystemBusses(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_MutexQue_Of_SystemBusses(sysThreadId);
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)." << std::endl;
        stat_PGM_CLIB_List_Of_Busses = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_SystemBusses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_SystemBusses = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_List_Of_Busses = new std::list<int*>;
        stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->resize(1);
        slif::Bus::generateProgram(sysThreadId);
        stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->assign(0, slif::Bus::generateHandle(sysThreadId));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_SystemBusses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_SystemBusses = new int();
        stat_PGM_CLIB_MutexQue_Of_SystemBusses = slif::Bus::generateHandle(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        auto oldSize = stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->size();
        stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->resize(static_cast<int8_t>(slif::CLIB_SystemBus_Framework_Global::dyn_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId) / 2));
        for (uint8_t index = oldSize; index < static_cast<int8_t>(stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->size()); index++) {
            stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)->assign(index, slif::Bus::generateHandle(sysThreadId));
        }
        slif::Bus::reInitialiseHandle(sysThreadId, slif::CLIB_SystemBus_Framework_Global::dyn_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
    }
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<int*>* : stat_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_List_Of_Busses;
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_MutexQue_Of_SystemBusses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* : stat_REG_get_PGM_CLIB_MutexQue_Of_SystemBusses(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_MutexQue_Of_SystemBusses;
    }
