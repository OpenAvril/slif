#ifndef CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#define CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#include "SLIF_LaunchQue_Framework.h"
#include <array>
#include <cstdint>
extern "C" {
    namespace slif {
        class Native {
        public:
            static void* generateProgramLaunchQue(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS);
            static void terminate_ProgaramLaunchQue(uint8_t threadId);
        private:
            static void SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
            static void SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework(uint8_t threadId);
            static void SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework(uint8_t threadId);
            static class slif::SLIF_LaunchQue_Framework* SLIF_LaunchQue_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_For_Native(uint8_t threadId);
            static void SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
            static void SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
            static void SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
            static std::array<bool, 2>* SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static std::array<bool, 10>* SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
        };
        class LaunchQue {
        public:
            static void threadRequestWaitlaunch(uint8_t threadId, unsigned char* bytes);
            static void threadEnd(uint8_t threadId, unsigned char* bytes);
            static unsigned char* SLIF_LaunchQue_Framework_App_REG_get_coreId_To_launch(uint8_t threadId);
            static unsigned char* SLIF_LaunchQue_Framework_App_REG_get_Flag_Active(uint8_t threadId);
            static unsigned char* SLIF_LaunchQue_Framework_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes);
            static unsigned char* SLIF_LaunchQue_Framework_App_REG_get_Flag_Idle(uint8_t threadId);
            static unsigned char* SLIF_LaunchQue_Framework_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
            static unsigned char* SLIF_LaunchQue_Framework_App_REG_get_State_launchBit(uint8_t threadId);
            static void SLIF_LaunchQue_Framework_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesThreadId, unsigned char* byteBool);
        private:
            static void SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(uint8_t threadId);
            static class slif::SLIF_LaunchQue_Framework* SLIF_LaunchQue_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_For_LaunchQue(uint8_t threadId);
            static std::array<bool, 10>* SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(uint8_t threadId);
        };
    }
}
#endif