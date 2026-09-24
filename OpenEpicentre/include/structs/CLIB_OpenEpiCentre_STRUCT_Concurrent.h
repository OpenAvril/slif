#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#include "../engine/CLIB_OpenEpiCentre_Framework.h"
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    struct CLIB_OpenEpiCentre_STRUCT_Concurrent
    {
    public:
        void app_do_Concurrent_Algorithm_For_PraiseEventId(class CLIB_OpenEpiCentre_Framework* obj, uint8_t playerId, unsigned long long praiseEventId, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void dyn_REG_boot1_DEFINE_Concurrent();
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent();
        void dyn_REG_boot3_INITIALISE_Concurrent(CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Concurrent();
        uint8_t dyn_REG_get_CLIB_OpenEpiCentre_Concurrent_threadId();
        void dyn_REG_set_CLIB_OpenEpiCentre_Concurrent_threadId(uint8_t praiseId);
        static void stat_app_thread_Concurrency(CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentthreadId);
        static void stat_CLASS_boot0_DECLARE_Concurrent();
        static void stat_CLASS_boot1_DEFINE_Concurrent();
        static void stat_CLASS_boot3_INITIALISE_Concurrent();
        static void stat_CLASS_boot4_INSTANTIATE_Concurrent();
        static void stat_REG_boot0_DECLARE_Concurrent();
    private:
        static uint8_t* _stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId;
     };
}
#endif