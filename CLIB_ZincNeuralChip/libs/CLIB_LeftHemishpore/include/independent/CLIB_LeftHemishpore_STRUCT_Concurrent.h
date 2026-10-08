#ifndef CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#define CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#include "../engine/CLIB_LeftHemishpore_Framework.h"
#include <cstdint>
namespace slif {
    struct CLIB_LeftHemishpore_STRUCT_Concurrent {
    public:
        void app_do_Concurrent_Algorithm_For_PraiseEventId(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj, uint8_t* playerId, unsigned long long* praiseEventId, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void dyn_REG_boot1_DEFINE_Concurrent(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_Concurrent(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Concurrent(uint8_t* sysThreadId);
        uint8_t* dyn_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(uint8_t* sysThreadId);
        void dyn_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(uint8_t* sysThreadId, uint8_t* praiseId);
        static void stat_app_thread_Concurrency(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj, uint8_t* concurrentThreadId);
        static void stat_CLASS_boot0_DECLARE_Concurrent(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_Concurrent(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_Concurrent(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_Concurrent(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_Concurrent(uint8_t* sysThreadId);
    private:
        static uint8_t* stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId;
        static uint8_t* stat_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(uint8_t* sysThreadId);
        static void stat_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(uint8_t* sysThreadId, uint8_t praiseId);
     };
}
#endif