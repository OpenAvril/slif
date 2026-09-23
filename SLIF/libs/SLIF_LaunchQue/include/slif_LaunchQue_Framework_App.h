#ifndef slif_LaunchQue_Framework_App_slif_LaunchQue_Framework_App_H
#define slif_LaunchQue_Framework_App_slif_LaunchQue_Framework_App_H
#include "../include/slif_LaunchQue_Framework_App_Control.h"
#include "../include/slif_LaunchQue_Framework_Execute.h"
#include <cstdint>
namespace slif {
    class slif_LaunchQue_Framework_App {
    public:
        slif_LaunchQue_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        virtual ~slif_LaunchQue_Framework_App();
        void dyn_APP_FUNCT_slif_LaunchQue_thread_Start(uint8_t threadId, class slif_LaunchQue_Framework* obj, uint8_t concurrentThreadId);
        void dyn_APP_FUNCT_slif_LaunchQue_thread_End(uint8_t threadId, class slif_LaunchQue_Framework* obj, uint8_t concurrentThreadId);
        class slif_LaunchQue_Framework_App_Control* dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(uint8_t threadId);
        class slif_LaunchQue_Framework_Execute* dyn_CLASS_get_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot1_REG_DEFINE_slif_LaunchQue_Framework_App(uint8_t threadId);
        void dyn_REG_boot2_REG_SUBSTANTIATE_slif_LaunchQue_Framework_App(uint8_t threadId);
        void dyn_REG_boot3_REG_INITIALISE_slif_LaunchQue_Framework_App(uint8_t threadId);
        static void stat_CALSS_boot0_DECLARE_slif_LaunchQue_Framework_App(uint8_t threadId);
        static void stat_CALSS_boot1_DEFINE_slif_LaunchQue_Framework_App(uint8_t threadId);
        static void stat_CALSS_boot3_INITIALISE_slif_LaunchQue_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    private:
        static class slif_LaunchQue_Framework_App_Control* _stat_CLASS_slif_LaunchQue_Framework_App_Control;
        static class slif_LaunchQue_Framework_Execute* _stat_CLASS_slif_LaunchQue_Framework_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_App_WriteEnable_Control(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_App_WriteEnable_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static class slif_LaunchQue_Framework_App_Control* stat_CLASS_get_slif_LaunchQue_Framework_App_WriteEnable_Control(uint8_t threadId);
        static class slif_LaunchQue_Framework_Execute* stat_CLASS_get_slif_LaunchQue_Framework_Execute(uint8_t threadId);
    };
}
#endif