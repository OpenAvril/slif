#ifndef CLIB_THEADLOGS_CLIB_H
#define CLIB_THEADLOGS_CLIB_H
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
            static void reInitialiseHandle(uint8_t* sysThreadId, unsigned char* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
            static void terminateProgram(uint8_t* sysThreadId);
        private:
            static void stat_APP_FUNCT_CLIB_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
            static void pr_stat_APP_FUNCT_CLIB_printConsoleAndLog(uint8_t* sysThreadId, std::string* stringForLogPrint);
            static void stat_CLASS_boot1_DEFINE_CLIB_Framework(uint8_t* sysThreadId);
            static void stat_CLASS_boot3_INITIALISE_CLIB_Framework(uint8_t* sysThreadId);
            static class CLIB_ThreadLogs_Framework* stat_CLASS_get_ptr_CLIB_Framework(uint8_t* sysThreadId);
            static void stat_REG_boot1_DEFINE_CLIB_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static void stat_REG_boot2_SUBSTANTIATE_CLIB_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static void stat_REG_boot3_INITIALISE_CLIB_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
            static std::array<bool, 4>* stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
        };
    }
}
#endif