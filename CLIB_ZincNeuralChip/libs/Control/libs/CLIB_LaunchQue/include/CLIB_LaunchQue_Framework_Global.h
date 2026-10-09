#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_CLIB_LaunchQue_Framework_Global_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_CLIB_LaunchQue_Framework_Global_H
#include <list>
#include <cstdint>
#include "CLIB_LaunchQue_Framework.h"
namespace slif {
    class CLIB_LaunchQue_Framework_Global {
    public:
        CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        ~CLIB_LaunchQue_Framework_Global();
        void boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        void boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        void boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId, CLIB_LaunchQue_Framework* obj);
        bool dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(uint8_t* sysThreadId);
        bool dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(uint8_t* sysThreadId);
        void dyn_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        static void boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        static void boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        static void boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId);
        static bool stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static int* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static uint8_t* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* newValue_ULongLong);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t);
        static uint8_t* stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId);
    private:
        static std::list<bool>* stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        static uint8_t* stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;//todo: number of concurrent threads.
        static void stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(uint8_t* sysThreadId, CLIB_LaunchQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId);
        static std::list<bool>* stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(uint8_t* sysThreadId);
        static uint8_t* stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(uint8_t* sysThreadId);
        static void stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId, const uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    };
}
#endif
