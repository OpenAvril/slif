#ifndef CLIB_LaunchQue_Framework_App_CLIB_LaunchQue_Framework_App_H
#define CLIB_LaunchQue_Framework_App_CLIB_LaunchQue_Framework_App_H
#include "../include/CLIB_LaunchQue_Framework_App_Control.h"
#include "../include/CLIB_LaunchQue_Framework_Execute.h"
#include <cstdint>
namespace slif {
    class CLIB_LaunchQue_Framework_App {
    public:
        CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework_App();
        void dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t concurrentsysThreadId);
        void dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t concurrentsysThreadId);
        class CLIB_LaunchQue_Framework_App_Control* dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId);
        class CLIB_LaunchQue_Framework_Execute* dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot1_REG_DEFINE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        void dyn_REG_boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        void dyn_REG_boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        static void stat_CALSS_boot0_DECLARE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        static void stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
        static void stat_CALSS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId);
    private:
        static class CLIB_LaunchQue_Framework_App_Control* _stat_CLASS_CLIB_LaunchQue_Framework_App_Control;
        static class CLIB_LaunchQue_Framework_Execute* _stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        static class CLIB_LaunchQue_Framework_App_Control* stat_CLASS_get_CLIB_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId);
        static class CLIB_LaunchQue_Framework_Execute* stat_CLASS_get_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
    };
}
#endif