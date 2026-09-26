#include "../include/SLIF_MutexQue_Framework_Global.h"
#include <climits>
#include <cstring>
#include <iostream>
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE;
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT;
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE;
    std::byte* slif::SLIF_MutexQue_Framework_Global::_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads;
// public.
    slif::SLIF_MutexQue_Framework_Global::SLIF_MutexQue_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : SLIF_MutexQue_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : SLIF_MutexQue_Global(sysThreadId)." << std::endl;
    }
    slif::SLIF_MutexQue_Framework_Global::~SLIF_MutexQue_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Global(sysThreadId)." << std::endl;
        delete _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE;
        delete _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT;
        delete _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE;
        delete _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot0_DECLARE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot0_DECLARE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot0_DECLARE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId);
        auto MAX_NUMBER_OF_THREADS_FOR_ACCESS =  new std::byte();
        *MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<std::byte>(1);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
    }
    std::array<bool,2> slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        return *stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId);
    }
    std::array<bool,2> slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        return *stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId);
    }
    std::array<bool,2> slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        return *stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId);
    }
    std::byte slif::SLIF_MutexQue_Framework_Global::dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        return *stat_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId);
    }
    void slif::SLIF_MutexQue_Framework_Global::dyn_REG_set_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => std::byte : dyn_REG_set_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        stat_REG_set_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    }
    int slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(uint8_t* sysThreadId, bool value)
    {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int : stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(sysThreadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(sysThreadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(sysThreadId, value);
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value)
    {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId, value);
    }
    bool slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(sysThreadId, byteArray);
    }
    double slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= double : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(sysThreadId, byteArray);
    }
    uint8_t slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(uint8_t* sysThreadId, const unsigned char* byteArray)
    {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId, byteArray);
    }
// private.
    int slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(uint8_t* sysThreadId, bool value) {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int : pr_stat_APP_CONVERT_SLIF_MutexQue_Bool_To_Int(sysThreadId)." << std::endl;
        return *temp;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < static_cast<uint8_t>(sizeof(unsigned char)); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    bool slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbBoolean(sysThreadId)." << std::endl;
        return (byteArray[7] & 1) != 0;
    }
    double slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= double : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_MsbDouble(sysThreadId)." << std::endl;
        return temp;
    }
    uint8_t slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(uint8_t* sysThreadId, const unsigned char* byteArray) {
        uint8_t temp;
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_MsbDouble_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::SLIF_MutexQue_Framework_Global::pr_stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1] { UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE = new std::array<bool, 2>();
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE  = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT = new std::array<bool, 2>();
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT  = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = new std::array<bool, 2>();
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = new std::byte();
        *_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = static_cast<std::byte>(255);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE = {false, false};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT = {true, false};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        *_stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = static_cast<std::byte>(2);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
    }
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_IDLE;
    }
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WAIT;
    }
    std::array<bool,2>* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_2bitFLAG_WRITE;
    }
    std::byte* slif::SLIF_MutexQue_Framework_Global::stat_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        return _stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads;
    }
    void slif::SLIF_MutexQue_Framework_Global::stat_REG_set_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId, std::byte MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => std::byte : stat_REG_set_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_number_Of_Implemented_Threads = MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }