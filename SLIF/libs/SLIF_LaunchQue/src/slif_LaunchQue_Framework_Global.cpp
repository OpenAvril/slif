#include "../include/slif_LaunchQue_Framework_Global.h"
#include <cstring>
#include <iostream>
    std::list<bool>* slif::slif_LaunchQue_Framework_Global::_stat_REG_slif_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    uint8_t* slif::slif_LaunchQue_Framework_Global::_stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
// public.
    slif::slif_LaunchQue_Framework_Global::slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        boot0_CLASS_DECLARE_slif_LaunchQue_Framework_Global(threadId);
        boot1_CLASS_DEFINE_slif_LaunchQue_Framework_Global(threadId);
        boot3_CLASS_INITIALISE_slif_LaunchQue_Framework_Global(threadId);
        boot0_REG_DECLARE_slif_LaunchQue_Framework_Global(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    slif::slif_LaunchQue_Framework_Global::~slif_LaunchQue_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : ~slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        delete _stat_REG_slif_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        delete _stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : ~slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot0_CLASS_DECLARE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot1_CLASS_DEFINE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot3_CLASS_INITIALISE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot0_REG_DECLARE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot0_REG_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot0_REG_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot1_REG_DEFINE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot1_REG_DEFINE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        stat_REG_boot1_DEFINE_slif_LaunchQue_Framework_Global_number_Implemented_Threads(threadId);
        stat_REG_boot1_DEFINE_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot1_REG_DEFINE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot2_REG_SUBSTANTIATE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_Global_number_Implemented_Threads(threadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::boot3_REG_INITIALISE_slif_LaunchQue_Framework_Global(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot3_REG_INITIALISE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        stat_REG_boot3_INITIALISE_slif_LaunchQue_Framework_Global_number_Implemented_Threads(threadId, MAX_NUMBER_OF_THREADS_FOR_TASKS);
        stat_REG_boot3_INITIALISE_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE(threadId, MAX_NUMBER_OF_THREADS_FOR_TASKS);
                std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : boot3_REG_INITIALISE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    bool slif::slif_LaunchQue_Framework_Global::dyn_REG_get_slif_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : dyn_REG_get_slif_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)." << std::endl;
        return true;
    }
    bool slif::slif_LaunchQue_Framework_Global::dyn_REG_get_slif_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : dyn_REG_get_slif_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)." << std::endl;
        return false;
    }

uint8_t* slif::slif_LaunchQue_Framework_Global::dyn_REG_get_slif_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : dyn_REG_get_slif_LaunchQue_Framework_Global_number_Implemented_Threads(threadId)." << std::endl;
        return stat_REG_get_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(threadId);
    }
    unsigned char* slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(uint8_t threadId, bool bool_Value) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= unsigned char* : stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, bool_Value)." << std::endl;
        return reinterpret_cast<unsigned char*>(bool_Value);
    }
    unsigned char* slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_uint8_t_To_ByteArray(uint8_t threadId, uint8_t uint8_t_Value) {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        std::cout << "thread " << std::to_string(threadId) << " :: <= unsigned char*  : stat_CONVERT_slif_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, uint8_t_Value)." << std::endl;
        return bytes_array;
    }
    bool slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_bool(uint8_t threadId, unsigned char* bytes_bool) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_bool(threadId, bytes_bool)." << std::endl;
        return bytes_bool[1] != 0;
    }
    uint8_t slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_uint8_t(uint8_t threadId, unsigned char* bytes_uint8_t) {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes_uint8_t, sizeof(cpp_uint8_t_value));
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes_uint8_t)." << std::endl;
        return cpp_uint8_t_value;
    }
// private.
    void slif::slif_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        _stat_REG_slif_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_slif_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        _stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        _stat_REG_slif_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = new std::list<bool>();//todo: number of concurrent threads.
        stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->resize(1);
        stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->assign(0, true);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        _stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = new uint8_t(UINT8_MAX);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
        stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->resize(static_cast<uint8_t>(*MAX_NUMBER_OF_THREADS_FOR_TASKS));
        for (int index = 0; index < stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->size(); index++) {
            stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->assign(index, true);
        }
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_slif_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS) {
        *_stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<uint8_t>(*MAX_NUMBER_OF_THREADS_FOR_TASKS);//todo: number of concurrent threads.
    }
    std::list<bool>* slif::slif_LaunchQue_Framework_Global::stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<bool>* : stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)." << std::endl;
        return _stat_REG_slif_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    }
    bool slif::slif_LaunchQue_Framework_Global::stat_REG_get_Item_On_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(uint8_t threadId, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : stat_REG_get_Item_On_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId, concurrentThreadId)." << std::endl;
        return *temp;;
    }
    uint8_t* slif::slif_LaunchQue_Framework_Global::stat_REG_get_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t* : stat_REG_get_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(threadId)." << std::endl;
        return _stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_set_Item_On_Array_Of_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE_ACTIVE(uint8_t threadId, uint8_t concurrentThreadId, bool FLAG_bool) {
        auto temp = stat_REG_get_Array_Of_FLAG_slif_LaunchQue_Framework_Global_Thread2STATE(threadId)->begin();
        std::advance(temp, concurrentThreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : stat_REG_set_Item_On_Array_Of_FLAG_slif_LaunchQue_Framework_Global_thread_2STATE_ACTIVE(threadId, number_Implemented_Threads, FLAG_bool)." << std::endl;
        *temp = FLAG_bool;
    }
    void slif::slif_LaunchQue_Framework_Global::stat_REG_set_slif_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t threadId, uint8_t* number_Implemented_Threads) {
        std::cout << "thread " << std::to_string(threadId) << " :: => uint8_t : stat_REG_set_slif_LaunchQue_Framework_Global_number_Implemented_Threads(threadId, number_Implemented_Threads)." << std::endl;
	    _stat_REG_slif_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = number_Implemented_Threads;
    }