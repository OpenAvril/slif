#ifndef CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#define CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#include "../include/slif_Framework.h"
#include <array>
#include <cstdint>
extern "C" {
    namespace slif {
        class Native {
        public:
            static void* generateHandleLaunchQue(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS);
            static void slif_Framework_App_FUNCT_terminate_Progaram(uint8_t threadId);
        private:
            static void slif_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
            static void slif_stat_boot1_CLASS_DEFINE_slif_Framework(uint8_t threadId);
            static void slif_stat_boot3_CLASS_INITIALISE_slif_Framework(uint8_t threadId);
            static class slif::slif_Framework* slif_stat_CLASS_get_ptr_slif_Framework_For_Native(uint8_t threadId);
            static void slif_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void slif_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
            static void slif_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void slif_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
            static void slif_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void slif_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
            static std::array<bool, 2>* slif_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static std::array<bool, 10>* slif_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
        };
        class LaunchQue {
        public:
            static void slif_Framework_App_FUNCT_request_Wait_launch(uint8_t threadId, unsigned char* bytes);
            static void slif_Framework_App_FUNCT_thread_End(uint8_t threadId, unsigned char* bytes);
            static unsigned char* slif_Framework_App_REG_get_coreId_To_launch(uint8_t threadId);
            static unsigned char* slif_Framework_App_REG_get_Flag_Active(uint8_t threadId);
            static unsigned char* slif_Framework_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes);
            static unsigned char* slif_Framework_App_REG_get_Flag_Idle(uint8_t threadId);
            static unsigned char* slif_Framework_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
            static unsigned char* slif_Framework_App_REG_get_State_launchBit(uint8_t threadId);
            static void slif_Framework_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesThreadId, unsigned char* byteBool);
        private:
            static void slif_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(uint8_t threadId);
            static class slif::slif_Framework* slif_stat_CLASS_get_ptr_slif_Framework_For_LaunchQue(uint8_t threadId);
            static std::array<bool, 10>* slif_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(uint8_t threadId);
        };
    }
}
#endif