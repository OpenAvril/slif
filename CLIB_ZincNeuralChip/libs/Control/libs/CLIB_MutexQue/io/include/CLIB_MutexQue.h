#ifndef CLIB_CLIB_PACKAGE_MUTEXQUE_H
#define CLIB_CLIB_PACKAGE_MUTEXQUE_H
#include "../../include/CLIB_MutexQue_Framework.h"
#include <array>
#include <cstdint>
#include <list>
extern "C" {
    namespace slif {
        class MutexQue {
        public:
            static void endByUnlock(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_ACCESS_ID);
            static unsigned char* generateHandle(uint8_t* sysThreadId);
            static void generateProgram(uint8_t* sysThreadId);
            static unsigned char* isINSTANTIATED(uint8_t* sysThreadId);
            static void reInitialiseHandle(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_MAX_NUMBER_OF_THREADS_FOR_ACCESS);
            static void startByLock(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_ACCESS_ID);
            static void terminateProgram(uint8_t* sysThreadId, unsigned char* handleId);
        private:
            static void* CLIB_MutexQue_App_FUNCT_generate_Program(uint8_t* sysThreadId);
            static bool CLIB_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
            static void CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* sysThreadId);
            static void CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* sysThreadId);
            static void CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static void CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static void CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static std::array<bool, 5>* CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static std::list<void*>* CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(uint8_t* sysThreadId);
            static CLIB_MutexQue_Framework* CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(uint8_t* sysThreadId, int* handleId);
        };
    }
}
#endif
