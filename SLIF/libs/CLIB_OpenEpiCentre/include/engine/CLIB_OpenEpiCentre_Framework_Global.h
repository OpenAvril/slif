#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_GLOBAL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_GLOBAL_H
#include <cstdint>
namespace CLIBOpenEpiCentre {
    enum Axis
    {
        X,
        Y,
        Z
    };
    enum Praise
    {
        ADDER
    };
    enum class Thread_At_OpenEpiCentre_ConditionCode : uint8_t {
        concurrent_0 = 0,
        concurrent_1 = 1,
        concurrent_2 = 2,
        IO = 3
    };
    class CLIB_OpenEpiCentre_Framework_Global {
    public:
        CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId);
        virtual ~CLIB_OpenEpiCentre_Framework_Global();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        uint8_t dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Implemented_Cores(uint8_t threadId);
        unsigned long long dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Praise_Events(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(uint8_t threadId);
        static int stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(uint8_t threadId, bool value);
        static unsigned char* stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(uint8_t threadId, bool bool_Value);
        static bool stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(uint8_t threadId, const unsigned char* bytes);
        static uint8_t stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbuint8_t(uint8_t threadId, const unsigned char* bytes);
        static double stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(uint8_t threadId, const unsigned char* byteArray);
        static unsigned long long stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(uint8_t threadId, const unsigned char* byteArray);
        static unsigned char* stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(uint8_t threadId, uint8_t uint8_t_Value);
        static unsigned char* stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(uint8_t threadId, double value);
        static unsigned char* stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(uint8_t threadId, unsigned long long value);
    private:
        static uint8_t* _stat_REG_ptr_number_Of_Implemented_Cores;
        static unsigned long long* _stat_REG_ptr_number_Of_Praise_Events;
        static void stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_number_Of_Praise_Events(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_number_Of_Praise_Events(uint8_t threadId);
        static uint8_t* stat_REG_get_Ptr_number_Of_Implemented_Cores(uint8_t threadId);
        static unsigned long long* stat_REG_get_Ptr_number_Of_Praise_Events(uint8_t threadId);
    };
}
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_GLOBAL_H
