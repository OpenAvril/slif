#include "../include/CLIB_SystemBus_Framework_App_Execute.h"
#include "../../include/CLIB_ThreadLogs.h"
#include "../include/CLIB_SystemBus_Framework_Global.h"
#include "../include/independent/CLIB_Bus_STRUCT_SingleBus.h"
#include <cmath>
    int* slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_CLIB_MutexQue_Of_Stemisphore;
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_CLIB_List_Of_Busses;
// public.
    slif::CLIB_SystemBus_Framework_App_Execute::CLIB_SystemBus_Framework_App_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    slif::CLIB_SystemBus_Framework_App_Execute::~CLIB_SystemBus_Framework_App_Execute() {
        delete stat_PGM_CLIB_List_Of_Busses;
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
    }
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::dyn_PGM_get_List_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        return stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId);
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(uint8_t* sysThreadId, uint8_t* busId) {
        auto temp = stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->begin();
        std::advance(temp, *busId);
        return *temp;
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId);
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(sysThreadId)."));
    }
// private.
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)."));
        stat_PGM_CLIB_List_Of_Busses = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)."));
        stat_PGM_CLIB_MutexQue_Of_Stemisphore = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot1_DEFINE_CLIB_SystemBus(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)."));
        stat_PGM_CLIB_List_Of_Busses = new std::list<int*>;
        stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->resize(1);
        slif::CLIB_Bus_STRUCT_SingleBus::generateProgram(sysThreadId);
        stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->assign(0, slif::CLIB_Bus_STRUCT_SingleBus::generateHandle(sysThreadId));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)."));
        stat_PGM_CLIB_MutexQue_Of_Stemisphore = new int();
        stat_PGM_CLIB_MutexQue_Of_Stemisphore = slif::CLIB_Bus_STRUCT_SingleBus::generateHandle(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App_Data : stat_PGM_boot3_INITIALISE_ForThreadsAt__BusId(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId) {
        auto oldSize = stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->size();
        auto size = new unsigned long long(std::pow(slif::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId) / 2.0, 2) - (slif::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId) / 2.0));
        stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->resize(*size);
        for (uint8_t index = oldSize; index < static_cast<int8_t>(stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->size()); index++) {
            stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)->assign(index, slif::CLIB_Bus_STRUCT_SingleBus::generateHandle(sysThreadId));
        }
        slif::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(sysThreadId, slif::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
    }
    std::list<int*>* slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= std::list<int*>* : stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(sysThreadId)."));
        return stat_PGM_CLIB_List_Of_Busses;
    }
    int* slif::CLIB_SystemBus_Framework_App_Execute::stat_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= int* : stat_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)."));
        return stat_PGM_CLIB_MutexQue_Of_Stemisphore;
    }
