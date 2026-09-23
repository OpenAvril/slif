#include "../include/CLIB_ThreadLogs_Framework_App_Execute.h"
#include "../libs/CLIB_WriteQueForThreadsAt_LoggingThread/include/LaunchQue_ClusterAccess.h"
#include <iostream>

#include "CLIB_ThreadLogs.h"
#include "CLIB_ThreadLogs_Framework_Global.h"
void* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::_stat_PGM_CLIB_ForThreadsAt_MutexQue;
// public.
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::~CLIB_ThreadLogs_Framework_App_Execute() {
        delete _stat_PGM_CLIB_ForThreadsAt_MutexQue;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId);
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
// private.
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_ForThreadsAt__ThreadLogsId(threadId)." << std::endl;
        _stat_PGM_CLIB_ForThreadsAt_MutexQue = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_ForThreadsAt__ThreadLogsId(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_ForThreadsAt__ThreadLogsId(threadId)." << std::endl;
        _stat_PGM_CLIB_ForThreadsAt_MutexQue = slif::LaunchQueMutex::generateHandlesMutex(threadId, *MAX_NUMBER_OF_DATA_CLUSTERS, *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_ForThreadsAt__ThreadLogsId(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        const uint8_t* dataClusterId = new uint8_t(0);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        unsigned char* bytes_DEFAULT = CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, 255);
        //writeQue::LoggingThread::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program();
        unsigned char* tempA1 =  slif::LaunchQueMutex::CLIB_LaunchQue_ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId, *dataClusterId);
        slif::LaunchQueMutex::CLIB_LaunchQue_ClusterAccess_App_FUNCT_terminate_Program(threadId, *dataClusterId);
        slif::LaunchQueMutex::unlock(threadId, *dataClusterId, bytes_DEFAULT);
        slif::LaunchQueMutex::lock(threadId, *dataClusterId, bytes_DEFAULT);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_get_ptr_CLIB_ForThreadsAt_MutexQue(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= PGM : stat_PGM_get_ptr_ForThreadsAt__ThreadLogsId(threadId)." << std::endl;
        return _stat_PGM_CLIB_ForThreadsAt_MutexQue;
    }