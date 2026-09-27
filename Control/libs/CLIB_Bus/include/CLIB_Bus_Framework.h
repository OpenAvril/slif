#ifndef CLIB_THEADLOGS_slif_CLIB_Bus_Framework_H
#define CLIB_THEADLOGS_slif_CLIB_Bus_Framework_H
#include "CLIB_Bus_Framework_App.h"
#include "CLIB_Bus_Framework_Global.h"
#include "../include/independent/CLIB_Bus_STRUCT_Bus.h"
#include <cstdint>
namespace slif {
    class CLIB_Bus_Framework {
    public:
        CLIB_Bus_Framework(uint8_t* sysThreadId);
        virtual ~CLIB_Bus_Framework();
        void dyn_APP_CLIB_Bus_Framework_create_Architecture(uint8_t* sysThreadId);
        void dyn_APP_CLIB_Bus_Framework_create_Global_and_Settings(uint8_t* sysThreadId);
        class CLIB_Bus_Framework_App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t* sysThreadId);
        class CLIB_Bus_Framework_Global*dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t* sysThreadId);
        void dyn_APP_CLIB_Bus_STRUCT_boot1_DEFINE(uint8_t* sysThreadId);
        void dyn_APP_CLIB_Bus_STRUCT_boot3_INITIALISE(uint8_t* sysThreadId);
        class CLIB_Bus_Framework_App* dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(uint8_t* sysThreadId);
        class CLIB_Bus_Framework_Global* dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_Bus_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_Bus_Framework(uint8_t* sysThreadId);
    private:
        static class CLIB_Bus_Framework_App* stat_CLASS_ptr_CLIB_Bus_Framework_App;
        static class CLIB_Bus_Framework_Global* stat_CLASS_ptr_CLIB_Bus_Framework_Global;
        static struct CLIB_Bus_STRUCT_Bus* stat_CLASS_ptr_CLIB_Bus_STRUCT_Bus;
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_Global(uint8_t* sysThreadId);
        static class CLIB_Bus_Framework_App* stat_CLASS_get_ptr_CLIB_Bus_Framework_App(uint8_t* sysThreadId);
        static class CLIB_Bus_Framework_Global* stat_CLASS_get_ptr_CLIB_Bus_Framework_Global(uint8_t* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId);
        static class CLIB_Bus_STRUCT_Bus* stat_STRUCT_get_ptr_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId);

    };
}
#endif