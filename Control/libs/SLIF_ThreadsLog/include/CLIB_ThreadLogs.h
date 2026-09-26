#ifndef CLIB_THEADLOGS_slif_H
#define CLIB_THEADLOGS_slif_H
#include "CLIB_ThreadLogs_Framework.h"
#include <cstdint>
#include <list>
#include <string>
extern "C" {
    namespace slif {
        class ThreadLogs {
            public:
            static void generateProgram(uint8_t* sysThreadId);
            static unsigned char* isINSTANTIATED(uint8_t* sysThreadId);
            static void printl(uint8_t* sysThreadId, std::string* stringForLogPrint);
            static void reInitialiseHandle(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
            static void terminateProgram(uint8_t* sysThreadId);
        private:
            static void stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
            static void pr_stat_APP_FUNCT_slif_printConsoleAndLog(uint8_t* sysThreadId, std::string* stringForLogPrint);
            static void stat_CLASS_boot1_DEFINE_slif_Framework(uint8_t* sysThreadId);
            static void stat_CLASS_boot3_INITIALISE_slif_Framework(uint8_t* sysThreadId);
            static class CLIB_ThreadLogs_Framework* stat_CLASS_get_ptr_slif_Framework(uint8_t* sysThreadId);
            static void stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static void stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static void stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static std::array<bool, 4>* stat_REG_get_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
        };
    }
}
#endif