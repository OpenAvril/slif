#ifndef CLIB_SLIF_PACKAGE_MUTEXQUE_FRAMEWORK_H
#define CLIB_SLIF_PACKAGE_MUTEXQUE_FRAMEWORK_H
#include "SLIF_MutexQue_Framework_App.h"
#include "SLIF_MutexQue_Framework_Global.h"
#include <cstdint>
namespace slif {
    class SLIF_MutexQue_Framework {
    public:
        SLIF_MutexQue_Framework(uint8_t* threadId);
        virtual ~SLIF_MutexQue_Framework();
        void dyn_CLASS_create_SLIF_MutexQue_Architecture(uint8_t* threadId);
        void dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(uint8_t* threadId);
        class SLIF_MutexQue_Framework_App* dyn_CLASS_get_ptr_SLIF_MutexQue_App(uint8_t* threadId);
        class SLIF_MutexQue_Framework_Global* dyn_CLASS_get_ptr_SLIF_MutexQue_Global(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* threadId);
    private:
        static class SLIF_MutexQue_Framework_App* _stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
        static class SLIF_MutexQue_Framework_Global* _stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* threadId);
        static void pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* threadId);
        static class SLIF_MutexQue_Framework_App* stat_CLASS_get_ptr_SLIF_MutexQue_App(uint8_t* threadId);
        static class SLIF_MutexQue_Framework_Global* stat_CLASS_get_ptr_SLIF_MutexQue_Global(uint8_t* threadId);
    };
}
#endif