#include "../../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
#include <cfloat>
#include <climits>
#include <cstring>
    uint8_t* slif::CLIB_OpenEpiCentre_Framework_Global::_stat_REG_ptr_number_Of_Implemented_Cores;
    unsigned long long* slif::CLIB_OpenEpiCentre_Framework_Global::_stat_REG_ptr_number_Of_Praise_Events;
// public.
    slif::CLIB_OpenEpiCentre_Framework_Global::CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : CLIB_OpenEpiCentre_Global(sysThreadId)."));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : CLIB_OpenEpiCentre_Global(sysThreadId)."));    
    }
    slif::CLIB_OpenEpiCentre_Framework_Global::~CLIB_OpenEpiCentre_Framework_Global() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : ~CLIB_OpenEpiCentre_Global(sysThreadId)."));
        delete _stat_REG_ptr_number_Of_Implemented_Cores;
        delete _stat_REG_ptr_number_Of_Praise_Events;
        slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : ~CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId);
        stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId);
        stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    uint8_t slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t : dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Implemented_Cores(sysThreadId)."));
        return *stat_REG_get_Ptr_number_Of_Implemented_Cores(sysThreadId);
    }
    unsigned long long slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long : dyn_REG_get_CLIB_OpenEpiCentre_Global_Item_number_Of_Praise_Events(sysThreadId)."));
        return *stat_REG_get_Ptr_number_Of_Praise_Events(sysThreadId);
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global(sysThreadId)."));
    }
    int slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(uint8_t* sysThreadId, bool value) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (value) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= int : stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(sysThreadId)."));
        return *temp;
    }
    unsigned char* slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(uint8_t* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(INT8_MAX);
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    bool slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(uint8_t* sysThreadId, const unsigned char* byteArray) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(sysThreadId)."));
        return (byteArray[7] & 1) != 0;
    }
   uint8_t slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbuint8_t(uint8_t* sysThreadId, const unsigned char* byteArray) {
        uint8_t* temp;
        temp = new uint8_t(INT8_MAX);
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return *temp;
    }
    double slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        double* temp;
        temp = new double(DBL_MAX);
        std::memcpy(&temp, byteArray, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= double : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId)."));
        return *temp;
    }
    unsigned long long slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(uint8_t* sysThreadId, const unsigned char* byteArray)
    {
        unsigned long long* temp = nullptr;
        temp = new unsigned long long(ULLONG_MAX);
        std::memcpy(&temp, byteArray, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId)."));
        return *temp;
    }
    unsigned char* slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t byte) {
        unsigned char* temp;
        temp = new unsigned char(INT8_MAX);
        std::memcpy(&temp, &byte, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(sysThreadId)."));
        return temp;
    }
    unsigned char* slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(DBL_MAX);
        std::memcpy(buffer, &value, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned char* : stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
// private.
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId)."));
        _stat_REG_ptr_number_Of_Implemented_Cores = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot1_DEFINE_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId)."));
        _stat_REG_ptr_number_Of_Praise_Events = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId)."));
        _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t();
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(255);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId)."));
        _stat_REG_ptr_number_Of_Praise_Events = new unsigned long long();
        *_stat_REG_ptr_number_Of_Praise_Events = ULLONG_MAX;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId)."));
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(4);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId)."));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot3_INITIALISE_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId)."));
        *_stat_REG_ptr_number_Of_Praise_Events = static_cast<unsigned long long>(1);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId)."));
    }
    uint8_t* slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_get_Ptr_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : stat_REG_get_Ptr_number_Of_Implemented_Cores(sysThreadId)."));
        return _stat_REG_ptr_number_Of_Implemented_Cores;
    }
    unsigned long long* slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_get_Ptr_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long* : stat_REG_get_Ptr_number_Of_Praise_Events(sysThreadId)."));
        return _stat_REG_ptr_number_Of_Praise_Events;
    }