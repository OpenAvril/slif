#ifndef CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_GLOBAL_H
#define CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_GLOBAL_H
#include <array>
#include <cstdint>
namespace slif {
    class CLIB_MutexQue_Framework_Global {
    public:
        CLIB_MutexQue_Framework_Global(uint8_t* sysThreadId);
        ~CLIB_MutexQue_Framework_Global();
        void dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(uint8_t* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(uint8_t* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId);
        static uint8_t* stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId);
        static void stat_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static int* stat_CONVERT_CLIB_MutexQue_Framework_Global_Bool_To_Int(uint8_t* sysThreadId, bool newValue_Bool);
        static bool stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static int* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static uint8_t* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* newValue_ULongLong);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t);
    private:
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
        static uint8_t* stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads;
        static int pr_stat_APP_CONVERT_CLIB_MutexQue_Bool_To_Int(uint8_t* sysThreadId, bool value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_MutexQue_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value);
        static bool pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray);
        static uint8_t pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_Msbuint8_t(uint8_t* sysThreadId, const unsigned char* byteArray);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_MutexQue_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_MutexQue_Msb_uint8_t_to_MsbByteArray(uint8_t* sysThreadId, uint8_t value);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId);
        static uint8_t* pr_stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId);
        static void pr_stat_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    };
}
#endif