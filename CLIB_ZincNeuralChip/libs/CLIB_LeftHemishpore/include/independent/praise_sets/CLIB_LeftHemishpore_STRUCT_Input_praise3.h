#ifndef CLIB_OPENEPICENTRE_STRUCT_INPUT_PRAISE3_H
#define CLIB_OPENEPICENTRE_STRUCT_INPUT_PRAISE3_H
#include <cstdint>
namespace slif {
    struct CLIB_LeftHemishpore_STRUCT_Input_praise3 {
    public:
        void dyn_REG_boot1_DEFINE_Input_praise3(std::uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_Input_praise3(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_Input_praise3(uint8_t* sysThreadId);
        double* dyn_REG_get_Item_Input_praise3_valueA(uint8_t* sysThreadId);
        double* dyn_REG_get_Item_Input_praise3_valueB(uint8_t* sysThreadId);
        void dyn_REG_set_Item_Input_praise3_valueA(uint8_t* sysThreadId, double* newValue_Double);
        void dyn_REG_set_Item_Input_praise3_valueB(uint8_t* sysThreadId, double* newValue_Double);
    private:
        static double* stat_REG_ptr_Input_praise3_valueA;
        static double* stat_REG_ptr_Input_praise3_valueB;
        static void stat_REG_boot1_DEFINE_Input_praise3_valueA(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_Input_praise3_valueB(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise3_valueA(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise3_valueB(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_Input_praise3_valueA(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_Input_praise3_valueB(uint8_t* sysThreadId);
        static double* stat_REG_get_Ptr_Input_praise3_valueA(uint8_t* sysThreadId);
        static double* stat_REG_get_Ptr_Input_praise3_valueB(uint8_t* sysThreadId);
        static void stat_REG_set_Item_Input_praise3_valueA(uint8_t* sysThreadId, double newValue_Double);
        static void stat_REG_set_Item_Input_praise3_valueB(uint8_t* sysThreadId, double newValue_Double);
    };
}
#endif