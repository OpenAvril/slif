#ifndef CLIB_CLIB_CLIB_ThreadLogs_Framework_Global_H
#define CLIB_CLIB_CLIB_ThreadLogs_Framework_Global_H
#include <cfloat>
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
namespace slif {
    class CLIB_ThreadLogs_Framework_Global {
    public:
        CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        ~CLIB_ThreadLogs_Framework_Global();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId);
        static int* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_Bool_To_Int(uint8_t* sysThreadId, bool newValue_Bool);
        static bool stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static int* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static uint8_t* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static unsigned char* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool);
        static unsigned char* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t);
        static unsigned char* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double);
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