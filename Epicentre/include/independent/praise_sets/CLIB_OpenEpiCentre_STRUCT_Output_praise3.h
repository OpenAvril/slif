#ifndef CLIB_OPENEPICENTRE_STRUCT_OUTPUT_PRAISE3_H
#define CLIB_OPENEPICENTRE_STRUCT_OUTPUT_PRAISE3_H
#include <cstdint>
namespace slif {
    struct CLIB_OpenEpiCentre_STRUCT_Output_praise3 {
    public:
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(std::uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
        double dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId);
        void dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId, double* newValue_Double);
        static void stat_CLASS_boot3_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
        static void stat_REG_boot3_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output_praise3(uint8_t* sysThreadId);
    private:
        static double* stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value;
        void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId);
        void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId);
        void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId);
        static double* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId);
        static void stat_REG_set_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t* sysThreadId, double newValue_Double);
    };
}
#endif
