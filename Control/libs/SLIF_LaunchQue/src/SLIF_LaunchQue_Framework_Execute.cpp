#include "../include/SLIF_LaunchQue_Framework_Execute.h"
#include "SLIF_MutexQue.h"
#include <iostream>
int* slif::SLIF_LaunchQue_Framework_Execute::stat_REG_HandleId_For_PGM_slifMutexQue;
// public.
    slif::SLIF_LaunchQue_Framework_Execute::SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    slif::SLIF_LaunchQue_Framework_Execute::~SLIF_LaunchQue_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        delete stat_REG_HandleId_For_PGM_slifMutexQue;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_REG_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_Execute::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_Execute : stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(threadId)." << std::endl;
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
