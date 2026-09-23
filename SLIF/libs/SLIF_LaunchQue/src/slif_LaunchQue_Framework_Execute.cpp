#include "../include/slif_LaunchQue_Framework_Execute.h"
#include "../include/slif_LaunchQue_Framework.h"
#include "../../slif_Mutex/include/slif_Mutex.h"
#include <iostream>

// public.
    slif::slif_LaunchQue_Framework_Execute::slif_LaunchQue_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        stat_REG_boot0_DECLARE_slif_LaunchQue_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    slif::slif_LaunchQue_Framework_Execute::~slif_LaunchQue_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        delete _stat_PGM_CLIB_slif_MutexQue;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        auto dataClusterId = new uint8_t(1);
        auto byte_uint8_t = slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, 255);
        unsigned char* tempA0 = wq::lqClusterAccess::CLIB_lqClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId, *dataClusterId);
        wq::lqClusterAccess::CLIB_lqClusterAccess_App_FUNCT_terminate_Program(threadId, *dataClusterId);
        wq::lqClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_MutexQueId_ThreadId(threadId, *dataClusterId, byte_uint8_t);
        wq::lqClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_MutexQueId_ThreadId(threadId, *dataClusterId, byte_uint8_t);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Execute::stat_REG_boot0_DECLARE_slif_LaunchQue_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_REG_boot0_DECLARE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_REG_boot0_DECLARE_slif_LaunchQue_Framework_Execute(threadId)." << std::endl;
    }
// private.

