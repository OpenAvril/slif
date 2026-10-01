#ifndef CLIB_THEADLOGS_slif_H
#define CLIB_THEADLOGS_slif_H
#include "../include/CLIB_SystemBus_Framework.h"
#include <cstdint>
#include <string>
extern "C" {
    namespace slif {
        class SystemBusses {
            public:
            static void generateHandle(uint8_t* sysThreadId);
            static void generateProgram(uint8_t* sysThreadId);
            static unsigned char* isINSTANTIATED(uint8_t* sysThreadId);
            static void load(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_Cargo);
            static void reInitialiseHandle(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS);
            static unsigned char* unload(uint8_t* sysThreadId, Ticket ticket);
            static void terminateProgram(uint8_t* sysThreadId);
        private:
            static uint8_t* accessId;
            static uint8_t* externalSide;
            static void stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
            static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(uint8_t* sysThreadId);
            static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(uint8_t* sysThreadId);
            static class CLIB_SystemBus_Framework* stat_CLASS_get_ptr_CLIB_SystemBus_Framework(uint8_t* sysThreadId);
            static void stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static void stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static void stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static std::array<bool, 4>* stat_REG_get_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
        };
    }
}
#endif