#ifndef CLIB_CLIB_SystemBus_Framework_Global_H
#define CLIB_CLIB_SystemBus_Framework_Global_H
#include <cstdint>
#include <list>
namespace slif {
    class CLIB_SystemBus_Framework_Global {
    public:
        CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        ~CLIB_SystemBus_Framework_Global();
        void dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(uint8_t* sysThreadId, class Object* value_DATA);
        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value);
        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value);
        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value);
        static bool stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray);
        static class Object* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(uint8_t* sysThreadId, unsigned char* byteArray_DATA);
        static double stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray);
        static uint8_t* dyn_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId);
        static std::list<uint8_t>* dyn_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId);
        static void dyn_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS);
        static void dyn_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId, std::list<uint8_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    private:
        static uint8_t* stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
        static std::list<uint8_t>* stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(uint8_t* sysThreadId, class Object* value_DATA);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value);
        static bool pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray);
        static class Object* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(uint8_t* sysThreadId, unsigned char* byteArray_DATA);
        static double pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId);
        static uint8_t* stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId);
        static std::list<uint8_t>* stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId, std::list<uint8_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    };
}
#endif