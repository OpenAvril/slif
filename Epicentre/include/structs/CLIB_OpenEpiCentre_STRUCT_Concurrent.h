#ifndef CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#define CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#include "../engine/CLIB_OpenEpiCentre_Framework.h"
#include <cstdint>
namespace slif {
    struct CLIB_OpenEpiCentre_STRUCT_Concurrent {
    public:
        void app_do_Concurrent_Algorithm_For_PraiseEventId(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, uint8_t* playerId, unsigned long long* praiseEventId, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void dyn_REG_boot1_DEFINE_Concurrent(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_Concurrent(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Concurrent(uint8_t* sysThreadId);
        uint8_t dyn_REG_get_CLIB_OpenEpiCentre_Concurrent_sysThreadId(uint8_t* sysThreadId);
        void dyn_REG_set_CLIB_OpenEpiCentre_Concurrent_sysThreadId(uint8_t* sysThreadId, uint8_t* praiseId);
        static void stat_app_thread_Concurrency(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t* concurrentsysThreadId);
        static void stat_CLASS_boot0_DECLARE_Concurrent(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_Concurrent(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_Concurrent(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_Concurrent(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_Concurrent(uint8_t* sysThreadId);
    private:
        static uint8_t* stat_REG_CLIB_OpenEpiCentre_Concurrent_sysThreadId;
     };
}
#endif