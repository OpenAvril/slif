#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "../../../Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <climits>
#include <cstdint>
#include <cstring>
    uint8_t* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    std::list<uint8_t>* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
// public.
    slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::~CLIB_Bus_STRUCT_SingleBus_Framework_Global() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : ~CLIB_Bus_STRUCT_SingleBus_Framework_Global()."));
        slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : ~CLIB_Bus_STRUCT_SingleBus_Framework_Global()."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    bool slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    double* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    uint8_t* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    uint8_t slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        return *stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
    }
    std::list<uint8_t>* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        return stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS) {
        stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId, std::list<uint8_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    }
// private.
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = nullptr;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = nullptr;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = new uint8_t();
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = UINT8_MAX;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = new std::list<uint8_t>;
        stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionId = 0; junctionId < stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = UINT8_MAX;
        }
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = 3;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionId = 0; junctionId < stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = 2;
        }
    }
    uint8_t* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId) {
        return stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    }
    std::list<uint8_t>* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId) {
        return stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS) {
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = MAX_NUMBER_OF_JUNCTIONS;
    }
    void slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(uint8_t* sysThreadId, std::list<uint8_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }