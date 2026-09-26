#include "../include/SLIF_LaunchQue_Framework_Execute.h"
#include "SLIF_MutexQue.h"
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
int* slif::SLIF_LaunchQue_Framework_Execute::stat_REG_HandleId_For_PGM_slifMutexQue;
// public.
    slif::SLIF_LaunchQue_Framework_Execute::SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)"));
        stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    slif::SLIF_LaunchQue_Framework_Execute::~SLIF_LaunchQue_Framework_Execute() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)"));
        delete stat_REG_HandleId_For_PGM_slifMutexQue;
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        stat_REG_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)"));
    }
// private.
    void slif::SLIF_LaunchQue_Framework_Execute::stat_REG_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        stat_REG_HandleId_For_PGM_slifMutexQue = nullptr;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        stat_REG_HandleId_For_PGM_slifMutexQue = new int();
        *stat_REG_HandleId_For_PGM_slifMutexQue = INT16_MAX;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        *stat_REG_HandleId_For_PGM_slifMutexQue = *slif::MutexQue::generateHandle(threadId);
    }
