#include "../include/SLIF_MutexQue_Framework_Global.h"
#include <climits>
#include <cstring>
#include <iostream>
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE;
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT;
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE;
    std::byte* slif::SLIF_MutexQue_Framework_Global::_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads;
// public.
    slif::SLIF_MutexQue_Framework_Global::SLIF_MutexQue_Framework_Global(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : SLIF_MutexQue_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : SLIF_MutexQue_Global(threadId)." << std::endl;
    }
    slif::SLIF_MutexQue_Framework_Global::~SLIF_MutexQue_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Global(threadId)." << std::endl;
        delete _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE;
        delete _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT;
        delete _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE;
        delete _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Global(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot0_DECLARE_SLIF_MutexQue_Global(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot0_DECLARE_SLIF_MutexQue_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot0_DECLARE_SLIF_MutexQue_Global(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(threadId)." << std::endl;
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId);
        stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId);
        stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId);
        stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(threadId)." << std::endl;    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(threadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(threadId)." << std::endl;    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(threadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId);
        stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId);
        stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId);
        auto MAX_NUMBER_OF_THREADS_FOR_ACCESS =  new std::byte();
        *MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<std::byte>(1);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(threadId)." << std::endl;
    }
    std::array<bool,2> slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
        return *stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId);
    }
    std::array<bool,2> slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
        return *stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId);
    }
    std::array<bool,2> slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
        return *stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId);
    }
    std::byte slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= uint8_t : dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
        return *stat_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId);
    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_set_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        stat_REG_boot3_REINITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    }
    int slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(uint8_t* threadId, bool value)
    {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= int : stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(threadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msbdouble_To_MsbByteArray(uint8_t* threadId, double value) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_Msbdouble_To_MsbByteArray(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_Msbdouble_To_MsbByteArray(threadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(uint8_t* threadId, double value) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(threadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(uint8_t* threadId, uint8_t value) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(threadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(uint8_t* threadId, bool value)
    {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId, value);
    }
    bool slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(uint8_t* threadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= bool : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(threadId, byteArray);
    }
    double slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(uint8_t* threadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= double : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(threadId, byteArray);
    }
    double slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbdouble(uint8_t* threadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= double : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbdouble(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbdouble(threadId, byteArray);
    }
    uint8_t slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(uint8_t* threadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= uint8_t : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(threadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(threadId, byteArray);
    }
// private.
    int slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(uint8_t* threadId, bool value) {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: <= int : pr_stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(threadId)." << std::endl;
        return *temp;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(uint8_t* threadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < static_cast<uint8_t>(sizeof(unsigned char)); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId)." << std::endl;
        return buffer;
    }
    bool slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(uint8_t* threadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= bool : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(threadId)." << std::endl;
        return (byteArray[7] & 1) != 0;
    }
    double slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(uint8_t* threadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << std::to_string(*threadId) << " :: <= double : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(threadId)." << std::endl;
        return temp;
    }
    double slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbdouble(uint8_t* threadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << std::to_string(*threadId) << " :: <= double : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbdouble(threadId)." << std::endl;
        return temp;
    }
    uint8_t slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(uint8_t* threadId, const unsigned char* byteArray) {
        uint8_t temp;
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*threadId) << " :: <= uint8_t : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(threadId)." << std::endl;
        return temp;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_Msbdouble_To_MsbByteArray(uint8_t* threadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_Msbdouble_To_MsbByteArray(threadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(uint8_t* threadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(threadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(uint8_t* threadId, uint8_t value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1] { UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*threadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(threadId)." << std::endl;
        return buffer;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE = new std::array<bool, 2>();
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE  = {true, true};
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT = new std::array<bool, 2>();
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT  = {true, true};
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = new std::array<bool, 2>();
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = new std::byte();
        *_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = static_cast<std::byte>(255);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE = {false, false};
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT = {true, false};
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = static_cast<std::byte>(2);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
    }
    void c {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_REINITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = *MAX_NUMBER_OF_THREADS_FOR_ACCESS;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_REINITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
    }
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE;
    }
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT;
    }
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE;
    }
    std::byte* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= uint8_t* : stat_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)." << std::endl;
        return _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads;
    }