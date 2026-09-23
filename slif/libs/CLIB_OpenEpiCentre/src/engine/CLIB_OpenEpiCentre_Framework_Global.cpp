#include "../../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include <climits>
#include <cstring>
#include <iostream>
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::_stat_REG_ptr_number_Of_Implemented_Cores;
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::_stat_REG_ptr_number_Of_Praise_Events;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : CLIB_OpenEpiCentre_Global(threadId)."));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : CLIB_OpenEpiCentre_Global(threadId)."));    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::~CLIB_OpenEpiCentre_Framework_Global() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(0, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : ~CLIB_OpenEpiCentre_Global(threadId)."));
        delete _stat_REG_ptr_number_Of_Implemented_Cores;
        delete _stat_REG_ptr_number_Of_Praise_Events;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(0, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : ~CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId)."));
        stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(threadId);
        stat_REG_boot1_DEFINE_number_Of_Praise_Events(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(threadId)."));
        stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(threadId);
        stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId)."));
        stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(threadId);
        stat_REG_boot3_INITIALISE_number_Of_Praise_Events(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Implemented_Cores(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t : dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Implemented_Cores(threadId)."));
        return *stat_REG_get_Ptr_number_Of_Implemented_Cores(threadId);
    }
    unsigned long long CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Praise_Events(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long : dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Praise_Events(threadId)."));
        return *stat_REG_get_Ptr_number_Of_Praise_Events(threadId);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(threadId)."));
    }
    int CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(uint8_t threadId, bool value) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (value) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= int : stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(threadId)."));
        return *temp;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(uint8_t threadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(threadId);
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(threadId)."));
        return buffer;
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(uint8_t threadId, const unsigned char* byteArray) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(threadId)."));
        return (byteArray[7] & 1) != 0;
    }
   uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbuint8_t(uint8_t threadId, const unsigned char* byteArray) {
        uint8_t* temp;
        temp = new uint8_t(threadId);
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbuint8_t(threadId)."));
        return *temp;
    }
    double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(uint8_t threadId, const unsigned char* byteArray) {
        double* temp;
        temp = new double(threadId);
        std::memcpy(&temp, byteArray, sizeof(double));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= double : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId)."));
        return *temp;
    }
    unsigned long long CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(uint8_t threadId, const unsigned char* byteArray)
    {
        unsigned long long* temp = nullptr;
        temp = new unsigned long long(threadId);
        std::memcpy(&temp, byteArray, sizeof(unsigned long long));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId)."));
        return *temp;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(uint8_t threadId, uint8_t byte) {
        unsigned char* temp;
        temp = new unsigned char(threadId);
        std::memcpy(&temp, &byte, sizeof(uint8_t));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(threadId)."));
        return temp;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(uint8_t threadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(threadId);
        std::memcpy(buffer, &value, sizeof(double));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(threadId)."));
        return buffer;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(uint8_t threadId, unsigned long long value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(threadId);
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(threadId)."));
        return buffer;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(threadId)."));
        _stat_REG_ptr_number_Of_Implemented_Cores = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot1_DEFINE_number_Of_Praise_Events(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(threadId)."));
        _stat_REG_ptr_number_Of_Praise_Events = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(threadId)."));
        _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t(threadId);
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(255);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(threadId)."));
        _stat_REG_ptr_number_Of_Praise_Events = new unsigned long long(threadId);
        *_stat_REG_ptr_number_Of_Praise_Events = ULLONG_MAX;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(threadId)."));
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(4);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(threadId)."));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot3_INITIALISE_number_Of_Praise_Events(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(threadId)."));
        *_stat_REG_ptr_number_Of_Praise_Events = static_cast<unsigned long long>(1);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(threadId)."));
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_get_Ptr_number_Of_Implemented_Cores(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t* : stat_REG_get_Ptr_number_Of_Implemented_Cores(threadId)."));
        return _stat_REG_ptr_number_Of_Implemented_Cores;
    }
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_REG_get_Ptr_number_Of_Praise_Events(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long* : stat_REG_get_Ptr_number_Of_Praise_Events(threadId)."));
        return _stat_REG_ptr_number_Of_Praise_Events;
    }