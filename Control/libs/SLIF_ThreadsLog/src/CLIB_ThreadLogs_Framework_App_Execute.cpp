#include "../include/CLIB_ThreadLogs_Framework_App_Execute.h"
#include "../../SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <iostream>
    int* slif::CLIB_ThreadLogs_Framework_App_Execute::_stat_PGM_CLIB_ForThreadsAt_MutexQue;
// public.
    slif::CLIB_ThreadLogs_Framework_App_Execute::CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : slif_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_slif_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_slif_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_slif_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    slif::CLIB_ThreadLogs_Framework_App_Execute::~CLIB_ThreadLogs_Framework_App_Execute() {
        delete _stat_PGM_CLIB_ForThreadsAt_MutexQue;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot1_DEFINE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_slif_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot3_INITIALISE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t* sysThreadId) {
        stat_PGM_boot4_INSTANTIATE_slif_Framework_Execute(sysThreadId);
    }
    int* slif::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId);
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot0_DECLARE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot1_DEFINE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot0_DECLARE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_slif_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_ForThreadsAt__ThreadLogsId(sysThreadId)." << std::endl;
        _stat_PGM_CLIB_ForThreadsAt_MutexQue = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_ForThreadsAt__ThreadLogsId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_ForThreadsAt__ThreadLogsId(sysThreadId)." << std::endl;
        _stat_PGM_CLIB_ForThreadsAt_MutexQue = slif::MutexQue::generateHandle(sysThreadId);
          std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_ForThreadsAt__ThreadLogsId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId)." << std::endl;
        slif::MutexQue::reInitialiseHandle(sysThreadId, _stat_PGM_CLIB_ForThreadsAt_MutexQue, *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_slif_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_slif_Framework_Execute(sysThreadId)." << std::endl;
    }
    int* slif::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= PGM : stat_PGM_get_ptr_ForThreadsAt__ThreadLogsId(sysThreadId)." << std::endl;
        return _stat_PGM_CLIB_ForThreadsAt_MutexQue;
    }