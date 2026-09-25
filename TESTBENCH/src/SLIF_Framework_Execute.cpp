#include "../include/SLIF_Framework_Execute.h"
#include "SLIF_LaunchQue.h"
#include "SLIF_MutexQue.h"
#include <iostream>
    int* slif::SLIF_Framework_Execute::stat_REG_HandleId_For_PGM_slifMutexQue;
    int* slif::SLIF_Framework_Execute::stat_REG_HandleId_For_PGM_slifLaunchQue;
// public.
    slif::SLIF_Framework_Execute::SLIF_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
    }
    slif::SLIF_Framework_Execute::~SLIF_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_REG_boot1_DEFINE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(threadId);
        stat_PGM_boot1_DEFINE_HandleId_For_PGM_slifLaunchQue(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(threadId);
        stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_slifLaunchQue(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_REG_boot3_INITIALISE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(threadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_PGM_slifLaunchQue(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_CLASS_boot0_DECLARE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_CLASS_boot1_DEFINE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_REG_boot0_DECLARE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
    }
// private.
    void slif::SLIF_Framework_Execute::stat_PGM_boot1_DEFINE_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        stat_REG_HandleId_For_PGM_slifLaunchQue = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        stat_REG_HandleId_For_PGM_slifMutexQue = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        slif::LaunchQue::generateProgram(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        slif::MutexQue::generateProgram(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        *stat_REG_HandleId_For_PGM_slifLaunchQue = *slif::LaunchQue::generateHandle(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        *stat_REG_HandleId_For_PGM_slifMutexQue = *slif::MutexQue::generateHandle(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    int* slif::SLIF_Framework_Execute::stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        return stat_REG_HandleId_For_PGM_slifMutexQue;
    }
    int* slif::SLIF_Framework_Execute::stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId) {
        return stat_REG_HandleId_For_PGM_slifLaunchQue;
    }