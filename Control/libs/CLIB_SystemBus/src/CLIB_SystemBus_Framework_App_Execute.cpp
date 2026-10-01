#include "../include/CLIB_SystemBus_Framework_App_Execute.h"
#include "../../CLIB_MutexQue/include/CLIB_MutexQue.h"
#include "../include/CLIB_SystemBus_Framework_Global.h"
#include <iostream>

#include "CLIB_Bus.h"
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_CLIB_List_Of_Busses;
    int* slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_CLIB_MutexQue_Of_SystemBus;
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
        delete stat_PGM_CLIB_MutexQue_Of_SystemBus;
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
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_Item_HandleId_On_List_Of_Busses(uint8_t* sysThreadId, uint8_t* busId) {
        auto temp = stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->begin();
        std::advance(temp, *busId);
        return *temp;
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_MutexQue_Of_SystemBus(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_MutexQue_Of_SystemBus(sysThreadId);
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_MutexQue_Of_ForThreadsAt_MutexQue_Junction_At_AccessLock(uint8_t* sysThreadId, uint8_t* junctionId, uint8_t* accessId) {
        auto temp = stat_REG_get_PGM_CLIB_MutexQue_Of_ForThreadsAt_MutexQue_Junction_At_AccessLock(sysThreadId)->begin();
        std::advance(temp, *junctionId);
        auto temp_B = temp->begin();
        std::advance(temp_B, *accessId);
        return *temp_B;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId);
        stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_SystemBus(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId);
        stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_SystemBus(sysThreadId);
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
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_SystemBus(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_SystemBus = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_List_Of_Busses = new std::list<int*>;
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->resize(1);
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->assign(0, slif::Bus::generateHandle());
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_SystemBus(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_MutexQue_Of_SystemBus = new int();
        stat_PGM_CLIB_MutexQue_Of_SystemBus = slif::MutexQue::generateHandle(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        auto oldSize = stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->size();
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->resize(slif::CLIB_SystemBus_Framework_Global::dyn_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->resize(CLIB_SystemBus_Framework_Global::dyn_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t index = oldSize; index < CLIB_SystemBus_Framework_Global::dyn_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId); index++) {
            stat_REG_get_PGM_CLIB_List_Of_Busses(sysThreadId)->assign(index, slif::MutexQue::generateHandle(sysThreadId));
        }
    }
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= PGM : stat_REG_get_PGM_CLIB_SystemBus(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_List_Of_Busses;
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_MutexQue_Of_SystemBus(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= PGM : stat_PGM_get_ptr_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_MutexQue_Of_SystemBus;
    }
