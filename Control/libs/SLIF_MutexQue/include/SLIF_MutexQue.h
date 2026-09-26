#ifndef CLIB_SLIF_PACKAGE_MUTEXQUE_H
#define CLIB_SLIF_PACKAGE_MUTEXQUE_H
#include "SLIF_MutexQue_Framework.h"
#include <array>
#include <cstdint>
#include <list>
extern "C" {
    namespace slif {
        class MutexQue {
        public:
            static void endByUnlock(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_ACCESS_ID);
            static int* generateHandle(uint8_t* sysThreadId);
            static void generateProgram(uint8_t* sysThreadId);
            static unsigned char* isINSTANTIATED(uint8_t* sysThreadId);
            static void reInitialiseHandle(uint8_t* sysThreadId, int* handleId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
            static void startByLock(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_ACCESS_ID);
            static void terminateProgram(uint8_t* sysThreadId, int* handleId);
        private:
            static void slif_MutexQue_App_FUNCT_generate_Program(uint8_t* sysThreadId);
            static bool slif_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
            static void slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* sysThreadId);
            static void slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* sysThreadId);
            static void slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static void slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static void slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static std::array<bool, 5>* slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static std::list<void*>* slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(uint8_t* sysThreadId);
            static SLIF_MutexQue_Framework* slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(uint8_t* sysThreadId, int* handleId);
        };
    }
}
#endif
