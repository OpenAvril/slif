#ifndef CLIB_slif_CLIB_ThreadLogs_Framework_App_H
#define CLIB_slif_CLIB_ThreadLogs_Framework_App_H
#include "CLIB_ThreadLogs_Framework_App_Algorithms.h"
#include "CLIB_ThreadLogs_Framework_App_Execute.h"
#include <cstdint>
namespace slif {
    class CLIB_ThreadLogs_Framework_App {
    public:
        CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        virtual ~CLIB_ThreadLogs_Framework_App();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        class CLIB_ThreadLogs_Framework_App_Algorithms* dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        class CLIB_ThreadLogs_Framework_App_Execute* dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
    private:
        static class CLIB_ThreadLogs_Framework_App_Algorithms* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
        static class CLIB_ThreadLogs_Framework_App_Execute* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId);
        static class CLIB_ThreadLogs_Framework_App_Algorithms* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static class CLIB_ThreadLogs_Framework_App_Execute* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId);
    };
}
#endif