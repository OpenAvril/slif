#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT_OUTPUT_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT_OUTPUT_H
#include "../engine/CLIB_OpenEpiCentre_Framework.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
#include <list>
namespace slif {
    struct CLIB_OpenEpiCentre_STRUCT_Output {
    public:
        void dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Output_Subset(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, unsigned long long *praiseEventId);
        void dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj);
        uint8_t* dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId);
        unsigned long long* dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId);
        class Object* dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset(uint8_t* sysThreadId);
        void dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId, uint8_t* newPraiseId);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId, unsigned long long* new_unsignedLongLong);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise0* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise1* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise2* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise3* objOutputSubset);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output(uint8_t* sysThreadId);
    private:
        static uint8_t* stat_REG_ptr_OpenEpiCentre_STRUCT_Output_playerId;
        static unsigned long long* stat_REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId;
        static std::list<Object*>* stat_REG_ptr_OpenEpiCentre_STRUCT_Output_Subset;
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_Subset(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_Subset(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_Subset(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj);
        static uint8_t* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId);
        static unsigned long long* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId);
        static std::list<Object*>* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset(uint8_t* sysThreadId);
        static void stat_REG_set_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t* sysThreadId, uint8_t newPraiseId);
        static void stat_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(uint8_t* sysThreadId, unsigned long long new_unsignedLongLong);
        static void stat_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise0* objOutputSubset);
        static void stat_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise1* objOutputSubset);
        static void stat_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise2* objOutputSubset);
        static void stat_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_STRUCT_Output_praise3* objOutputSubset);

    };
}
#endif