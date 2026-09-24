#ifndef CLIB_THEADLOGS_CLIB_ThreadLogs_H
#define CLIB_THEADLOGS_CLIB_ThreadLogs_H
#include "../include/CLIB_ThreadLogs_Framework.h"
#include <cstdint>
#include <list>
#include <string>
using namespace CLIB_ThreadLogs;
extern "C" {
    namespace slif {
        class ThreadLogs {
            public:
            static void* stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(uint8_t* threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
            static unsigned char* stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(uint8_t* threadId);
            static void stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t* threadId, std::string* stringForLogPrint);
            static void stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(uint8_t* threadId);
        private:
            static void stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(uint8_t* threadId);
            static void pr_stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t* threadId, std::string* stringForLogPrint);
            static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t* threadId);
            static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t* threadId);
            static class CLIB_ThreadLogs_Framework* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(uint8_t* threadId);
            static void stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId);
            static void stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId);
            static void stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId);
            static std::array<bool, 4>* stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId);
        };
    }
}
#endif