#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
// public.
    slif::CLIB_ThreadLogs_Framework_Global::CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    slif::CLIB_ThreadLogs_Framework_Global::~CLIB_ThreadLogs_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_Global()." << std::endl;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_Global()." << std::endl;
    }
    int* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_Bool_To_Int(uint8_t* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }
    bool slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    double* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    uint8_t* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* newValue_ULongLonge) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &newValue_ULongLonge, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
// private.
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        unsigned char* temp;
        temp = new unsigned char();
        std::memcpy(&temp, &value, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global__Msbuint8_t_To_MsbByteArray(sysThreadId)." << std::endl;
        return temp;
    }
    bool slif::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId)." << std::endl;
        return (byteArray[7] & 1) != 0;
    }
    double slif::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(sysThreadId)." << std::endl;
        return temp;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }