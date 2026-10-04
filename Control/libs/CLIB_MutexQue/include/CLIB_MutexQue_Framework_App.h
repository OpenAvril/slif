#ifndef CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_APP_H
#define CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_APP_H
#include "CLIB_MutexQue_Framework_App_Control.h"
#include <cstdint>
namespace slif {
    class CLIB_MutexQue_Framework_App {
    public:
        CLIB_MutexQue_Framework_App(uint8_t* sysThreadId);
        virtual ~CLIB_MutexQue_Framework_App();
        void dyn_APP_FUNCT_write_End(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj, uint8_t* coreId);
        void dyn_APP_FUNCT_write_Start(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj, uint8_t* coreId);
        class CLIB_MutexQue_Framework_App_Control* dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(uint8_t* sysThreadId);
        void REG_boot1_DEFINE_CLIB_MutexQue_App(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void REG_boot2_SUBSTANTIATE_CLIB_MutexQue_App(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void REG_boot3_INITIALISE_CLIB_MutexQue_App(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void CLASS_boot0_DECLARE_CLIB_MutexQue_App(uint8_t* sysThreadId);
        static void CLASS_boot1_DEFINE_CLIB_MutexQue_App(uint8_t* sysThreadId);
        static void CLASS_boot3_INITIALISE_CLIB_MutexQue_App(uint8_t* sysThreadId);
        static void REG_boot0_DECLARE_CLIB_MutexQue_App(uint8_t* sysThreadId);
    private:
        static class CLIB_MutexQue_Framework_App_Control* stat_CLASS_ptr_CLIB_MutexQue_App_Control;
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQue_App_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQue_App_Control(uint8_t* sysThreadId);
        static class CLIB_MutexQue_Framework_App_Control* stat_CLASS_get_ptr_CLIB_MutexQue_App_Control(uint8_t* sysThreadId);
    };
}
#endif
