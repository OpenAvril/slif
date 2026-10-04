#include "../include/CLIB_MutexQue_Framework_Global.h"

#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
    uint8_t* slif::CLIB_MutexQue_Framework_Global::stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads;
// public.
    slif::CLIB_MutexQue_Framework_Global::CLIB_MutexQue_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    slif::CLIB_MutexQue_Framework_Global::~CLIB_MutexQue_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        delete stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
        delete stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
        delete stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
        delete stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;    }
    void slif::CLIB_MutexQue_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;    }
    void slif::CLIB_MutexQue_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
        auto MAX_NUMBER_OF_THREADS_FOR_ACCESS =  new uint8_t();
        *MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<uint8_t>(1);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
        return stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
    }
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)" << std::endl;
        return stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
    }
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONST : dyn_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)" << std::endl;
        return stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
    }
    uint8_t* slif::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)" << std::endl;
        return stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId);
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t* : dyn_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)" << std::endl;
        stat_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    }
    int* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Bool_To_Int(uint8_t* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbbool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    bool slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbbool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    uint8_t* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    int* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_MsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    double* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
// private.
    int slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_Bool_To_Int(uint8_t* sysThreadId, bool value) {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= int : pr_stat_APP_CONVERT_CLIB_MutexQue_Bool_To_Int(sysThreadId)" << std::endl;
        return *temp;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < static_cast<uint8_t>(sizeof(unsigned char)); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_CLIB_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId)" << std::endl;
        return buffer;
    }
    bool slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_MsbBoolean(sysThreadId)" << std::endl;
        return (byteArray[7] & 1) != 0;
    }
    double slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= double : pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_MsbDouble(sysThreadId)" << std::endl;
        return temp;
    }
    uint8_t slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_Msbuint8_t(uint8_t* sysThreadId, const unsigned char* byteArray) {
        uint8_t temp;
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : pr_stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId)" << std::endl;
        return temp;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_CLIB_MutexQue_MsbDouble_To_MsbByteArray(sysThreadId)" << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_MutexQue_Framework_Global::pr_stat_APP_CONVERT_CLIB_MutexQue_Msb_uint8_t_to_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1] { UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned char* : pr_stat_APP_CONVERT_CLIB_MutexQue_Msb_uint8_t_to_MsbByteArray(sysThreadId)" << std::endl;
        return buffer;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)" << std::endl;
        stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE = new std::array<bool, 2>();
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE  = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT = new std::array<bool, 2>();
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT  = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = new std::array<bool, 2>();
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads = new uint8_t();
        *stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads = static_cast<uint8_t>(255);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE = {false, false};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT = {true, false};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads = static_cast<uint8_t>(2);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
    }
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
    }
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
    }
    std::array<bool,2>* slif::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
    }
    uint8_t* slif::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        return stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads;
    }
    void slif::CLIB_MutexQue_Framework_Global::pr_stat_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t* : stat_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_number_Of_Implemented_Threads = MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }