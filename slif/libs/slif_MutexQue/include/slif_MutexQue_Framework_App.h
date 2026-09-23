#ifndef slif_MutexQue_FRAMEWORK_APP_H
#define slif_MutexQue_FRAMEWORK_APP_H
#include "../include/slif_MutexQueQue_Framework_App_Control.h"
#include <cstdint>
namespace slif {
    class slif_MutexQueQue_Framework_App {
    public:
        slif_MutexQueQue_Framework_App(uint8_t threadId);
        virtual ~slif_MutexQueQue_Framework_App();
        void dyn_APP_FUNCT_write_End(uint8_t threadId, class slif_MutexQueQue_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(uint8_t threadId, class slif_MutexQueQue_Framework* obj, uint8_t coreId);
        class slif_MutexQueQue_Framework_App_Control* dyn_CLASS_get_ptr_slif_MutexQue_App_Control(uint8_t threadId);
        void REG_boot1_DEFINE_slif_MutexQue_App(uint8_t threadId, class slif_MutexQueQue_Framework* obj);
        void REG_boot2_SUBSTANTIATE_slif_MutexQue_App(uint8_t threadId, class slif_MutexQueQue_Framework* obj);
        void REG_boot3_INITIALISE_slif_MutexQue_App(uint8_t threadId, class slif_MutexQueQue_Framework* obj);
        static void CLASS_boot0_DECLARE_slif_MutexQue_App(uint8_t threadId);
        static void CLASS_boot1_DEFINE_slif_MutexQue_App(uint8_t threadId);
        static void CLASS_boot3_INITIALISE_slif_MutexQue_App(uint8_t threadId);
        static void REG_boot0_DECLARE_slif_MutexQue_App(uint8_t threadId);
    private:
        static class slif_MutexQueQue_Framework_App_Control* _stat_CLASS_ptr_slif_MutexQue_App_Control;
        static void stat_CLASS_boot1_DEFINE_slif_MutexQue_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_MutexQue_App_Control(uint8_t threadId);
        static class slif_MutexQueQue_Framework_App_Control* stat_CLASS_get_ptr_slif_MutexQue_App_Control(uint8_t threadId);
    };
}
#endif
