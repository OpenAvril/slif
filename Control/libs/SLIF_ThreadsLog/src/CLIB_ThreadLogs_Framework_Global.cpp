#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
// public.
    slif::CLIB_ThreadLogs_Framework_Global::CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    slif::CLIB_ThreadLogs_Framework_Global::~CLIB_ThreadLogs_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_Global()." << std::endl;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_Global()." << std::endl;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(sysThreadId, value)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(sysThreadId, value);
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId, value)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId, value);
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global__Msbuint8_t_To_MsbByteArray(sysThreadId, value)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, value);
    }
    bool slif::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId, byteArray)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId, byteArray);
    }
    double slif::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(sysThreadId, byteArray)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(sysThreadId, byteArray);
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
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
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::CLIB_ThreadLogs_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
    }