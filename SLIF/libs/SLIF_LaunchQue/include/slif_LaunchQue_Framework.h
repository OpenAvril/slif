#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_slif_LaunchQue_Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_slif_LaunchQue_Framework_H
#include "../include/slif_LaunchQue_Framework_App.h"
#include "../include/slif_LaunchQue_Framework_Global.h"
namespace slif {
    class slif_LaunchQue_Framework {
    public:
        slif_LaunchQue_Framework(uint8_t threadId);
        virtual ~slif_LaunchQue_Framework();
        void dyn_CLASS_create_Architecture(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        void dyn_CLASS_create_slif_LaunchQue_Framework_Global_and_Settings(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        class slif_LaunchQue_Framework_App* dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(uint8_t threadId);
        class slif_LaunchQue_Framework_Global* dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(uint8_t threadId);
        void dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework(uint8_t threadId);
        void dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void stat_REG_boot0_DECLARE_slif_LaunchQue_Framework(uint8_t threadId);
    private:
        static class slif_LaunchQue_Framework_App* _stat_CLASS_get_ptr_slif_LaunchQue_Framework_App;
        static class slif_LaunchQue_Framework_Global* _stat_CLASS_ptr_slif_LaunchQue_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void pr_stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Global(uint8_t threadId);
        static class slif_LaunchQue_Framework_App* stat_CLASS_get_ptr_slif_LaunchQue_Framework_App(uint8_t threadId);
        static class slif_LaunchQue_Framework_Global* stat_CLASS_get_ptr_slif_LaunchQue_Framework_Global(uint8_t threadId);
    };
};
#endif