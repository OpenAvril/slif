#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
// public.
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId);
        stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::~CLIB_ThreadLogs_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_Global()." << std::endl;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_Global()." << std::endl;
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(uint8_t threadId, double value) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(threadId, value)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(threadId, value);
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t threadId, bool value) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(threadId, value)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(threadId, value);
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t threadId, uint8_t value) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global__Msbuint8_t_To_MsbByteArray(threadId, value)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, value);
    }
    bool CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t threadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(threadId, byteArray)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(threadId, byteArray);
    }
    double CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(uint8_t threadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(threadId, byteArray)." << std::endl;
        return pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(threadId, byteArray);
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
// private.
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t threadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(threadId)." << std::endl;
        return buffer;
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(uint8_t threadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbdouble_To_MsbByteArray(threadId)." << std::endl;
        return buffer;
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t threadId, uint8_t value) {
        unsigned char* temp;
        temp = new unsigned char();
        std::memcpy(&temp, &value, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global__Msbuint8_t_To_MsbByteArray(threadId)." << std::endl;
        return temp;
    }
    bool CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t threadId, const unsigned char* byteArray) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_MsbBoolean(threadId)." << std::endl;
        return (byteArray[7] & 1) != 0;
    }
    double CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(uint8_t threadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << std::to_string(threadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_Msbdouble(threadId)." << std::endl;
        return temp;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
    }