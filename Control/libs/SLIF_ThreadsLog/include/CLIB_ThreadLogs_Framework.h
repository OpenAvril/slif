#ifndef CLIB_THEADLOGS_slif_FRAMEWORK_H
#define CLIB_THEADLOGS_slif_FRAMEWORK_H
#include "CLIB_ThreadLogs_Framework_App.h"
#include "CLIB_ThreadLogs_Framework_Global.h"
#include <cstdint>
namespace slif {
    class CLIB_ThreadLogs_Framework {
    public:
        CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        virtual ~CLIB_ThreadLogs_Framework();
        void dyn_CLASS_slif_create_Architecture(uint8_t* sysThreadId);
        void dyn_CLASS_slif_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(uint8_t* sysThreadId);
        class CLIB_ThreadLogs_Framework_App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t* sysThreadId);
        class CLIB_ThreadLogs_Framework_Global*dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t* sysThreadId);
        void dyn_APP_slif_stat_STRUCT_boot1_DEFINE(uint8_t* sysThreadId);
        void dyn_APP_slif_stat_STRUCT_boot3_INITIALISE(uint8_t* sysThreadId);
        class CLIB_ThreadLogs_Framework_App* dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        class CLIB_ThreadLogs_Framework_Global* dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId);
    private:
        static class CLIB_ThreadLogs_Framework_App* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
        static class CLIB_ThreadLogs_Framework_Global* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        static class CLIB_ThreadLogs_Framework_App* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId);
        static class CLIB_ThreadLogs_Framework_Global* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
    };
}
#endif