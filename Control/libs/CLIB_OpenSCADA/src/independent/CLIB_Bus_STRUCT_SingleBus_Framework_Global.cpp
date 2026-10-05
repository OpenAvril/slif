#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
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
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : ~CLIB_Bus_STRUCT_SingleBus_Framework_Global()."));
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_Global : ~CLIB_Bus_STRUCT_SingleBus_Framework_Global()."));
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
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(uint8_t* sysThreadId, class Object* value_DATA) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, value)."));
        return pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, value_DATA);
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId, value)."));
        return pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId, value);
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId, value)."));
        return pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId, value);
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, value)."));
        return pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, value);
    }
    bool slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId, byteArray)."));
        return pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId, byteArray);
    }
    double slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, byteArray)."));
        return pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, byteArray);
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
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(uint8_t* sysThreadId, class Object* value_DATA) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, value)."));
        return reinterpret_cast<unsigned char*>(value_DATA);
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbBoolean_To_MsbByteArray(uint8_t* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId)."));
        return buffer;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t value) {
        unsigned char* temp;
        temp = new unsigned char();
        std::memcpy(&temp, &value, sizeof(uint8_t));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId)."));
        return temp;
    }
    bool slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbBoolean(uint8_t* sysThreadId, const unsigned char* byteArray) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId)."));
        return (byteArray[7] & 1) != 0;
    }
    slif::Object* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_DATA(uint8_t* sysThreadId, unsigned char* DATA) {
        class Object* temp;
        auto tempDATA = reinterpret_cast<class Object*>(DATA);
        std::memcpy(&temp, tempDATA, sizeof(tempDATA));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId)."));
        return temp;
    }
    unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_DATA(uint8_t* sysThreadId, class Object* DATA) {
        unsigned char* temp;
        std::memcpy(&temp, DATA, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId)."));
        return temp;
    }
    double slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbDouble(uint8_t* sysThreadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId)."));
        return temp;
    }
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