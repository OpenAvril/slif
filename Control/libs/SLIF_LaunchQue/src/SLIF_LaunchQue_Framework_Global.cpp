#include "../include/SLIF_LaunchQue_Framework_Global.h"
#include <cstring>
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
    std::list<bool>* slif::SLIF_LaunchQue_Framework_Global::_stat_REG_SLIF_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    std::byte* slif::SLIF_LaunchQue_Framework_Global::_stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
// public.
    slif::SLIF_LaunchQue_Framework_Global::SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : SLIF_LaunchQue_Framework_Global(threadId)"));
        boot0_CLASS_DECLARE_SLIF_LaunchQue_Framework_Global(threadId);
        boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework_Global(threadId);
        boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId);
        boot0_REG_DECLARE_SLIF_LaunchQue_Framework_Global(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    slif::SLIF_LaunchQue_Framework_Global::~SLIF_LaunchQue_Framework_Global() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : ~SLIF_LaunchQue_Framework_Global(threadId)"));
        delete _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        delete _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : ~SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot1_REG_DEFINE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot1_REG_DEFINE_SLIF_LaunchQue_Framework_Global(threadId)"));
        stat_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId);
        stat_REG_boot1_DEFINE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot1_REG_DEFINE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global(threadId)"));
        stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId, SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId)"));
        stat_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId);
        stat_REG_boot3_INITIALISE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(threadId, obj);
                slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    bool slif::SLIF_LaunchQue_Framework_Global::dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= bool : dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)"));
        return *stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)->begin();
    }
    bool slif::SLIF_LaunchQue_Framework_Global::dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= bool : dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)"));
        return !*stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)->begin();;
    }

    std::byte* slif::SLIF_LaunchQue_Framework_Global::dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= uint8_t : dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId)"));
        return stat_REG_get_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(threadId);
    }
    void slif::SLIF_LaunchQue_Framework_Global::dyn_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId, std::byte* coreId) {
        stat_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId, coreId);
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot0_CLASS_DECLARE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework_Global(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::boot0_REG_DECLARE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot0_REG_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : boot0_REG_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    unsigned char* slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(uint8_t* threadId, bool bool_Value) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= unsigned char* : stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, bool_Value)"));
        return reinterpret_cast<unsigned char*>(bool_Value);
    }
    unsigned char* slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(uint8_t* threadId, uint8_t uint8_t_Value) {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= unsigned char*  : stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, uint8_t_Value)"));
        return bytes_array;
    }
    bool slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_bool(uint8_t* threadId, unsigned char* bytes_bool) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= bool : stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_bool(threadId, bytes_bool)"));
        return bytes_bool[1] != 0;
    }
    uint8_t slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(uint8_t* threadId, unsigned char* bytes_uint8_t) {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes_uint8_t, sizeof(cpp_uint8_t_value));
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= uint8_t : stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes_uint8_t)"));
        return cpp_uint8_t_value;
    }
// private.
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = nullptr;
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = nullptr;
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = new std::list<bool>();//todo: number of concurrent threads.
        stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)->resize(1);
        stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)->assign(0, true);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));    }
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = new std::byte();
        *_stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<std::byte>(255);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));    }
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(uint8_t* threadId, SLIF_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
        for (int index = 0; index < stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)->size(); index++) {
            stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)->assign(index, true);
        }
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Global(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId) {
        *_stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<std::byte>(3);//todo: number of concurrent threads.
    }
    std::list<bool>* slif::SLIF_LaunchQue_Framework_Global::stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= std::list<bool>* : stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(threadId)"));
        return _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    }
    std::byte* slif::SLIF_LaunchQue_Framework_Global::stat_REG_get_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= uint8_t* : stat_REG_get_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(threadId)"));
        return _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
    }
    void slif::SLIF_LaunchQue_Framework_Global::stat_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId, const std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: => uint8_t : stat_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId, number_Implemented_Threads)"));
	    *_stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = *MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }