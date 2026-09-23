#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_H
#include "CLIB_ThreadLogs_Framework_App_Algorithms.h"
#include "CLIB_ThreadLogs_Framework_App_Execute.h"
#include <cstdint>
#include <list>
namespace CLIB_ThreadLogs {
    class CLIB_ThreadLogs_Framework_App {
    public:
        CLIB_ThreadLogs_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        virtual ~CLIB_ThreadLogs_Framework_App();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
        class CLIB_ThreadLogs_Framework_App_Algorithms* dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        class CLIB_ThreadLogs_Framework_App_Execute* dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t threadId);
    private:
        static class CLIB_ThreadLogs_Framework_App_Algorithms* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
        static class CLIB_ThreadLogs_Framework_App_Execute* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static class CLIB_ThreadLogs_Framework_App_Algorithms* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static class CLIB_ThreadLogs_Framework_App_Execute* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId);
    };
}
#endif