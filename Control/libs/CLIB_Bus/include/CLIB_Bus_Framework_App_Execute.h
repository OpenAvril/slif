#ifndef CLIB_Bus_CLIB_Bus_FRAMEWORK_APP_EXECUTE_H
#define CLIB_Bus_CLIB_Bus_FRAMEWORK_APP_EXECUTE_H
#include <cstddef>
#include <cstdint>
#include <list>
namespace slif {
    class CLIB_Bus_Framework_App_Execute {
    public:
        CLIB_Bus_Framework_App_Execute(uint8_t* sysThreadId);
        virtual ~CLIB_Bus_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        void dyn_PGM_boot4_INSTANTIATE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        int* dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_slif_CLIB_Bus_Framework_Execute(uint8_t* sysThreadId);
    private:
        static std::list<int*>* stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction;
        static std::list<std::list<int*>>* stat_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock;
        static void stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock(uint8_t* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static void stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQue_At_Junction_At_AccessLock(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static std::list<int*>* stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_At_Junction(uint8_t* sysThreadId);
        static std::list<std::list<int*>>*  stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQue_Junction_At_AccessLock(uint8_t* sysThreadId);
    };
};
#endif //CLIB_Bus_CLIB_Bus_FRAMEWORK_APP_EXECUTE_H
