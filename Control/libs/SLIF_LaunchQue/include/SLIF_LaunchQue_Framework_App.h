#ifndef SLIF_LaunchQue_Framework_App_SLIF_LaunchQue_Framework_App_H
#define SLIF_LaunchQue_Framework_App_SLIF_LaunchQue_Framework_App_H
#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework_Execute.h"
#include <cstdint>
namespace slif {
    class SLIF_LaunchQue_Framework_App {
    public:
        SLIF_LaunchQue_Framework_App(uint8_t* threadId);
        virtual ~SLIF_LaunchQue_Framework_App();
        void dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId);
        void dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(uint8_t* threadId, class SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId);
        class SLIF_LaunchQue_Framework_App_Control* dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId);
        class SLIF_LaunchQue_Framework_Execute* dyn_CLASS_get_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* threadId);
        void dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(uint8_t* threadId);
        void dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* threadId);
        static void stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(uint8_t* threadId);
        static void stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* threadId);
        static void stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* threadId);
    private:
        static class SLIF_LaunchQue_Framework_App_Control* _stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
        static class SLIF_LaunchQue_Framework_Execute* _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        static class SLIF_LaunchQue_Framework_App_Control* stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* threadId);
        static class SLIF_LaunchQue_Framework_Execute* stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
    };
}
#endif