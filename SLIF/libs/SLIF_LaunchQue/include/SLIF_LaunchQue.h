#ifndef CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#define CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#include "SLIF_LaunchQue_Framework.h"
#include <array>
#include <cstdint>
extern "C" {
    namespace slif {
        class LaunchQue {
        public:
            static int* generateHandle(uint8_t* threadId, std::byte* MEX_NUMBER_OF_CONCURRENT_TASK_THREADS);
            static void* generateProgram(uint8_t* threadId);
            static unsigned char* get_coreIdTolaunch(uint8_t* threadId);
            static unsigned char* get_FlagSTATEisActive(uint8_t* threadId);
            static unsigned char* get_FlagSTATEofConcurrentCore(uint8_t* threadId, unsigned char* bytes);
            static unsigned char* get_FlagisIdle(uint8_t* threadId);
            static unsigned char* get_FlagSTATEofThreadToLaunch(uint8_t* threadId);
            static unsigned char* isINSTANTIATED(uint8_t* threadId);
            static void set_FlagSTATEofConcurrentCore(uint8_t* threadId, unsigned char* bytesThreadId, unsigned char* byteBool);
            static void terminateProgaram(uint8_t* threadId);
            static void threadRequestlaunch(uint8_t* threadId, unsigned char* bytes);
            static void threadEnd(uint8_t* threadId, unsigned char* bytes);
        private:
            static void SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework(uint8_t* threadId);
            static std::list<class slif::SLIF_LaunchQue_Framework*>* SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(uint8_t* threadId);
            static class slif::SLIF_LaunchQue_Framework* SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId, const int* handleId);
            static void SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static std::array<bool, 2>* SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t* threadId);
        };
    }
}
#endif