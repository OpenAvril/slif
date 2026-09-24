#ifndef CLIB_THREADLOGS_CLIB_THREADLOGS_FRAMEWORK_APP_EXECUTE_H
#define CLIB_THREADLOGS_CLIB_THREADLOGS_FRAMEWORK_APP_EXECUTE_H
#include <cstdint>
#include <list>
namespace CLIB_ThreadLogs {
    class CLIB_ThreadLogs_Framework_App_Execute {
    public:
        CLIB_ThreadLogs_Framework_App_Execute(uint8_t* threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        virtual ~CLIB_ThreadLogs_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static void stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
    private:
        static void* _stat_PGM_CLIB_ForThreadsAt_MutexQue;
        static void stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue(uint8_t* threadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t* threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static void stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t* threadId);
        static void* stat_PGM_get_ptr_CLIB_ForThreadsAt_MutexQue(uint8_t* threadId);
    };
};
#endif //CLIB_THREADLOGS_CLIB_THREADLOGS_FRAMEWORK_APP_EXECUTE_H
