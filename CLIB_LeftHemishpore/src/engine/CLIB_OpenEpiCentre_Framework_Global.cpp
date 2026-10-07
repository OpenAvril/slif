#include "../../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include <CLIB_ThreadLogs.h>
#include <cfloat>
#include <climits>
#include <cstring>
    uint8_t* slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores;
    unsigned long long* slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events;
// public.
    slif::CLIB_OpenEpiCentre_Framework_Global::CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
    }
    slif::CLIB_OpenEpiCentre_Framework_Global::~CLIB_OpenEpiCentre_Framework_Global() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : ~CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
        delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores;
        delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events;
        slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : ~CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId). "));
    }
    uint8_t* slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_get_CLIB_OpenEpiCentre_Framework_Global_Item_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t : dyn_REG_get_CLIB_OpenEpiCentre_Framework_Global_Item_number_Of_Implemented_Cores(sysThreadId). "));
        return stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(sysThreadId);
    }
    unsigned long long* slif::CLIB_OpenEpiCentre_Framework_Global::dyn_REG_get_CLIB_OpenEpiCentre_Framework_Global_Item_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long : dyn_REG_get_CLIB_OpenEpiCentre_Framework_Global_Item_number_Of_Praise_Events(sysThreadId). "));
        return stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(sysThreadId);
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
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_Bool_To_Int(sysThreadId). "));
        return temp;
    }
    bool slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId). "));
        return (bytes_Array[7] & 1) != 0;
    }
    int* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId). "));
        return temp;
    }
    double* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId). "));
        return temp;
    }
    unsigned long long* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId). "));
        return temp;
    }
    uint8_t* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId). "));
        return temp;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId). "));
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId). "));
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId). "));
        return buffer;
    }
    unsigned char* slif::CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_ThreadsLog_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId). "));
        return buffer;
    }
// private.
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId). "));
        stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId). "));
        stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId). "));
        stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores = new uint8_t();
        *stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores = static_cast<uint8_t>(255);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId). "));
        stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events = new unsigned long long();
        *stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events = ULLONG_MAX;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId). "));
        *stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores = static_cast<uint8_t>(4);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId). "));
    }
    void slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId). "));
        *stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events = static_cast<unsigned long long>(4);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId). "));
    }
    uint8_t* slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : stat_REG_get_Ptr_number_Of_Implemented_Cores(sysThreadId). "));
        return stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Implemented_Cores;
    }
    unsigned long long* slif::CLIB_OpenEpiCentre_Framework_Global::stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long* : stat_REG_get_Ptr_number_Of_Praise_Events(sysThreadId). "));
        return stat_REG_ptr_CLIB_OpenEpiCentre_Framework_Global_number_Of_Praise_Events;
    }