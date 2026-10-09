#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Execute.h"
#include <CLIB_MutexQue.h>
#include <CLIB_LaunchQue.h>
#include <CLIB_ThreadLogs.h>
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Execute_Control.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_Global.h"
#include "../../include/independent/CLIB_LeftHemishpore_STRUCT_Concurrent.h"
    slif::CLIB_LeftHemishpore_Framework_App_Execute_Control* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_CLIB_LeftHemishpore_Framework_App_Execute_Control;
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_LaunchQue_Server;
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive;
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend;
// public.
    slif::CLIB_LeftHemishpore_Framework_App_Execute::CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    slif::CLIB_LeftHemishpore_Framework_App_Execute::~CLIB_LeftHemishpore_Framework_App_Execute() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        delete stat_CLASS_CLIB_LeftHemishpore_Framework_App_Execute_Control;
        delete stat_REG_HandleId_For_CLIB_LaunchQue_Server;
        delete stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive;
        delete stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    slif::CLIB_LeftHemishpore_Framework_App_Execute_Control* slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class* : dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId);
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
    }
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
    }
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
// private.
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_boot1_DEFINE_Execute_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId). " << std::endl;
        stat_CLASS_CLIB_LeftHemishpore_Framework_App_Execute_Control = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_Execute_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId). " << std::endl;
        stat_CLASS_CLIB_LeftHemishpore_Framework_App_Execute_Control = new CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId) == nullptr) {}
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId). " << std::endl;
    }
    slif::CLIB_LeftHemishpore_Framework_App_Execute_Control* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class* : stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
        return stat_CLASS_CLIB_LeftHemishpore_Framework_App_Execute_Control;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_LaunchQue_Server = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_HandleId_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_LaunchQue_Server = slif::LaunchQue::generateHandle(sysThreadId);
        while (stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId) == nullptr) {}
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive = slif::MutexQue::generateHandle(sysThreadId);
        while (stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId) == nullptr) {}
        slif::MutexQue::reInitialiseHandle(sysThreadId, stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive, static_cast<std::byte>(*CLIB_LeftHemishpore_Framework_Global::dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Implemented_Cores(sysThreadId)));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
    }
    void slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend = slif::MutexQue::generateHandle(sysThreadId);
        while (stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId) == nullptr) {}
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: slif : CLIB_LeftHemishpore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
    }
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* HandleId : stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        return stat_REG_HandleId_For_CLIB_LaunchQue_Server;
    }
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* HandleId : stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        return stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive;
    }
    int* slif::CLIB_LeftHemishpore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int* HandleId : stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        return stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend;
    }