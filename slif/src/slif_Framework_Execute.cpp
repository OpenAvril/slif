#include "../include/slif_Framework_Execute.h"
#include "../include/slif_Framework.h"
#include "../../slif_MutexQue/include/slif_MutexQue.h"
#include <iostream>
    std::list<void*>* slif::slif_Framework_Execute::_stat_PGM_CLIB_slif_MutexQue;
// public.
    slif::slif_Framework_Execute::slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
    }
    slif::slif_Framework_Execute::~slif_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::dyn_REG_boot1_DEFINE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::dyn_REG_boot3_INITIALISE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::stat_CLASS_boot0_DECLARE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::stat_CLASS_boot1_DEFINE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_Framework_Execute::stat_REG_boot0_DECLARE_slif_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
    }
// private.
void slif::slif_Framework_Execute::stat_PGM_boot1_DEFINE_CLIB_slif_MutexQue(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        _stat_PGM_CLIB_slif_MutexQue = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
void slif::slif_Framework_Execute::stat_PGM_boot3_INITIALISE_CLIB_slif_MutexQue(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;

        _stat_PGM_CLIB_slif_MutexQue = slif::MutexQue::generateProgram(threadId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
std::list<void*>* slif::slif_Framework_Execute::stat_PGM_get_array_of_ptrPGM_CLIB_slif_MutexQue(uint8_t threadId) {
        return _stat_PGM_CLIB_slif_MutexQue;
    }
