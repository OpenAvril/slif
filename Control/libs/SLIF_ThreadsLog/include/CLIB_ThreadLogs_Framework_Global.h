#ifndef CLIB_slif_CLIB_ThreadLogs_Framework_Global_H
#define CLIB_slif_CLIB_ThreadLogs_Framework_Global_H
#include <cstdint>
namespace slif {
    class CLIB_ThreadLogs_Framework_Global {
    public:
        CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        ~CLIB_ThreadLogs_Framework_Global();
        static unsigned char* stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value);
        static unsigned char* stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(uint8_t* sysThreadId, double value);
        static unsigned char* stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value);
        static bool stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray);
        static double stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(uint8_t* sysThreadId, const unsigned char* byteArray);
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
    private:
        static unsigned char* pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(uint8_t* sysThreadId, double value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value);
        static bool pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(uint8_t* sysThreadId, const unsigned char* byteArray);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
    };
}
#endif