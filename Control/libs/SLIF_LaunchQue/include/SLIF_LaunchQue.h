#ifndef CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#define CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#include "SLIF_LaunchQue_Framework.h"
#include <array>
#include <cstdint>
extern "C" {
    namespace slif {
        class LaunchQue {
        public:
            static int* generateHandle(uint8_t* threadId);
            static void generateProgram(uint8_t* threadId);
            static unsigned char* get_coreIdTolaunch(uint8_t* threadId, int* handleId);
            static unsigned char* get_FlagSTATEisActive(uint8_t* threadId, int* handleId);
            static unsigned char* get_FlagSTATEofConcurrentCore(uint8_t* threadId, int* handleId, unsigned char* bytes_concuurentThreadId);
            static unsigned char* get_FlagisIdle(uint8_t* threadId, int* handleId);
            static unsigned char* get_FlagSTATEofThreadToLaunch(uint8_t* threadId, int* handleId);
            static unsigned char* isINSTANTIATED(uint8_t* threadId);
            static void reInitialiseHandle(uint8_t* threadId, int* handleId, std::byte* MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
            static void set_FlagSTATEofConcurrentCore(uint8_t* threadId, int* handleId, unsigned char* bytes_concuurentThreadId, unsigned char* byteBool);
            static void terminateProgaram(uint8_t* threadId);
            static void threadRequestlaunch(uint8_t* threadId, int* handleId, unsigned char* bytes_concuurentThreadId);
            static void threadEnd(uint8_t* threadId, int* handleId, unsigned char* bytes_concuurentThreadId);
        private:
            static int* stat_REG_HandleId_For_PGM_slifMutexQue;
            static void SLIF_LaunchQue_generateProgram(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId);
            static std::list<class slif::SLIF_LaunchQue_Framework*>* SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(uint8_t* threadId);
            static class slif::SLIF_LaunchQue_Framework* SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId, const int* handleId);
            static void SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static void SLIF_LaunchQue_stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
            static std::array<bool, 13>* SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t* threadId);
            static int* SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        };
    }
}
#endif