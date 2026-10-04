#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_CLIB_LaunchQue_Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_CLIB_LaunchQue_Framework_H
#include "../include/CLIB_LaunchQue_Framework_App.h"
#include "../include/CLIB_LaunchQue_Framework_Global.h"
namespace slif {
    class CLIB_LaunchQue_Framework {
    public:
        CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework();
        void dyn_CLASS_create_Architecture(uint8_t* sysThreadId);
        void dyn_CLASS_create_CLIB_LaunchQue_Framework_Global_and_Settings(uint8_t* sysThreadId);
        class CLIB_LaunchQue_Framework_App* dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        class CLIB_LaunchQue_Framework_Global* dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId);
    private:
        static class CLIB_LaunchQue_Framework_App* stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App;
        static class CLIB_LaunchQue_Framework_Global* stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        static void pr_stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        static class CLIB_LaunchQue_Framework_App* stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        static class CLIB_LaunchQue_Framework_Global* stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
    };
};
#endif