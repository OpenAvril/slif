#include "../include/CLIB_LaunchQue_Framework_Global.h"
#include "../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
    std::list<bool>* slif::CLIB_LaunchQue_Framework_Global::stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    uint8_t* slif::CLIB_LaunchQue_Framework_Global::stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
// public.
    slif::CLIB_LaunchQue_Framework_Global::CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    slif::CLIB_LaunchQue_Framework_Global::~CLIB_LaunchQue_Framework_Global() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : ~CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        delete stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        delete stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : ~CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId);
        stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId, CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId);
        stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId, obj);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    bool slif::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)"));
        return *stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->begin();
    }
    bool slif::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)"));
        return !*stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->begin();;
    }

    uint8_t* slif::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t : dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)"));
        return stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(sysThreadId);
    }
    void slif::CLIB_LaunchQue_Framework_Global::dyn_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId, uint8_t* coreId) {
        stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId, coreId);
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    bool slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)."));
        return (bytes_Array[7] & 1) != 0;
    }
    int* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    double* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    unsigned long long* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    uint8_t* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    unsigned char* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
// private.
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = new std::list<bool>();//todo: number of concurrent threads.
        stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->resize(1);
        stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->assign(0, true);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));    }
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = new uint8_t();
        *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<uint8_t>(255);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));    }
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(uint8_t* sysThreadId, CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
        for (int index = 0; index < stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->size(); index++) {
            stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->assign(index, true);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId) {
        *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<uint8_t>(3);//todo: number of concurrent threads.
    }
    std::list<bool>* slif::CLIB_LaunchQue_Framework_Global::stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= std::list<bool>* : stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)"));
        return stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    }
    uint8_t* slif::CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(sysThreadId)"));
        return stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
    }
    void slif::CLIB_LaunchQue_Framework_Global::stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* sysThreadId, const uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: => uint8_t : stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId, number_Implemented_Threads)"));
	    *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = *MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }