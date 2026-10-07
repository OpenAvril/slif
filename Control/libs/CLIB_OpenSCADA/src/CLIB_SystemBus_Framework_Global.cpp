#include "../include/CLIB_SystemBus_Framework_Global.h"

#include <cfloat>
#include <climits>
#include <cstdint>
#include <cstring>
#include "CLIB_ThreadLogs.h"
    uint8_t* slif::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    std::list<uint8_t>* slif::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
// public.
    slif::CLIB_SystemBus_Framework_Global::CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : CLIB_SystemBus_Framework_Global(sysThreadId)."));
        stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    slif::CLIB_SystemBus_Framework_Global::~CLIB_SystemBus_Framework_Global() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : ~CLIB_SystemBus_Framework_Global()."));
        slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : ~CLIB_SystemBus_Framework_Global()."));
    }
    void slif::CLIB_SystemBus_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    int* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(uint8_t* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(sysThreadId)."));
        return temp;
    }
    bool slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)."));
        return (bytes_Array[7] & 1) != 0;
    }
    int* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    double* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    unsigned long long* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    uint8_t* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)."));
        return temp;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)."));
        return buffer;
    }
    uint8_t slif::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        return *pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
    }
    std::list<uint8_t> slif::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        return *pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_JUNCTIONS) {
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, *MAX_NUMBER_OF_JUNCTIONS);
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId, std::list<uint8_t>* List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    }
// private.
    slif::Object* slif::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(uint8_t* sysThreadId, unsigned char* DATA) {
        class Object* temp;
        auto tempDATA = reinterpret_cast<class Object*>(DATA);
        std::memcpy(&temp, tempDATA, sizeof(tempDATA));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId)."));
        return temp;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        unsigned char* temp;
        temp = new unsigned char();
        std::memcpy(&temp, &value, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId)."));
        return temp;
    }
    bool slif::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId)."));
        return (byteArray[7] & 1) != 0;
    }
    unsigned char* slif::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(uint8_t* sysThreadId, unsigned char* byteArray_DATA) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, value)."));
        return reinterpret_cast<unsigned char*>(byteArray_DATA);
    }
    double slif::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId)."));
        return temp;
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = nullptr;
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = nullptr;
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = new uint8_t();
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = UINT8_MAX;
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = new std::list<uint8_t>;
        pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionId = 0; junctionId < pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = UINT8_MAX;
        }
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = 3;
    }
    void slif::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionId = 0; junctionId < pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = 2;
        }
    }
    uint8_t* slif::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        return stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    }
    std::list<uint8_t>* slif::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        return stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }
    void slif::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS) {
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = MAX_NUMBER_OF_JUNCTIONS;
    }
    void slif::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId, std::list<uint8_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
       *stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }