#include "../include/CLIB_Bus_Framework_App_Execute.h"
#include "../../SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../include/CLIB_Bus_Framework_Global.h"
#include <iostream>
    std::list<int*>* slif::CLIB_Bus_Framework_App_Execute::stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction;
    std::list<std::list<int*>>* slif::CLIB_Bus_Framework_App_Execute::stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock;
// public.
    slif::CLIB_Bus_Framework_App_Execute::CLIB_Bus_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    slif::CLIB_Bus_Framework_App_Execute::~CLIB_Bus_Framework_App_Execute() {
        delete _stat_PGM_CLIB_ForThreadsAt_MutexQue;
    }
    void slif::CLIB_Bus_Framework_App_Execute::dyn_REG_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::dyn_REG_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : dyn_REG_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        stat_PGM_boot4_INSTANTIATE_slif_CLIB_Bus_Framework_Execute(sysThreadId);
    }
    int* slif::CLIB_Bus_Framework_App_Execute::dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId);
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_CLASS_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_CLASS_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_CLASS_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_REG_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_REG_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_REG_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void slif::CLIB_Bus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot1_DEFINE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot1_DEFINE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot1_DEFINE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot1_DEFINE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }

    void slif::CLIB_Bus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction = new std::list<int*>();
        stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(sysThreadId)->resize(slif::CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(sysThreadId)->resize(CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t index = 0; index < CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId); index++) {
            stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(sysThreadId)->assign(index, slif::MutexQue::generateHandle(sysThreadId));
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock = new std::list<std::list<int*>>();
        stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_Junction_At_AccessLock(sysThreadId)->resize(slif::CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionID = 0; junctionID < stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_Junction_At_AccessLock(sysThreadId)->size(); junctionID++) {
            auto temp = stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_Junction_At_AccessLock(sysThreadId)->begin();
            std::advance(temp, junctionID);
            auto max = CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(max, junctionID);
            temp->resize(*max);
            for (uint8_t accessId = 0; accessId < temp->size(); accessId++) {
                std::advance(temp, accessId);
                temp->assign(accessId, slif::MutexQue::generateHandle(sysThreadId));
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId)." << std::endl;
        auto oldCount = stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(sysThreadId)->size();
        stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(sysThreadId)->resize(slif::CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionID = 0; junctionID < stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(sysThreadId)->size(); junctionID++) {
            auto temp = stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_Junction_At_AccessLock(sysThreadId)->begin();
            std::advance(temp, junctionID);
            auto max = CLIB_Bus_Framework_Global::dyn_REG_get_CLIB_Bus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(max, junctionID);
            for (uint8_t accessId = 0; accessId < *max; accessId++) {
                std::advance(temp, accessId);
                temp->assign(accessId, slif::MutexQue::generateHandle(sysThreadId));
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId)." << std::endl;
    }
    void slif::CLIB_Bus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock(uint8_t* sysThreadId, std::byte* List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId)." << std::endl;


        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework_App_Data : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId)." << std::endl;
    }
    std::list<int*>* slif::CLIB_Bus_Framework_App_Execute::stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= PGM : stat_PGM_get_ptr_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction;
    }
    std::list<std::list<int*>>* slif::CLIB_Bus_Framework_App_Execute::stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_Junction_At_AccessLock(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= PGM : stat_PGM_get_ptr_ForThreadsAt__BusId(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock;
    }