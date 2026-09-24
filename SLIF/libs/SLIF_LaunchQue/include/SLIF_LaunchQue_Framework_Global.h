#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_SLIF_LaunchQue_Framework_Global_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_SLIF_LaunchQue_Framework_Global_H
#include <list>
#include <cstdint>

#include "SLIF_LaunchQue_Framework.h"

namespace slif {
    class SLIF_LaunchQue_Framework_Global {
    public:
        SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        ~SLIF_LaunchQue_Framework_Global();
        void boot1_REG_DEFINE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        void boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        void boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId, SLIF_LaunchQue_Framework* obj);
        bool dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(uint8_t* threadId);
        bool dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(uint8_t* threadId);
        std::byte* dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId);
        void dyn_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void boot0_CLASS_DECLARE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        static void boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        static void boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        static void boot0_REG_DECLARE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId);
        static unsigned char* stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(uint8_t* threadId, bool bool_Value);
        static unsigned char* stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(uint8_t* threadId, uint8_t uint8_t_Value);
        static bool stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_bool(uint8_t* threadId, unsigned char* bytes);
        static uint8_t stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(uint8_t* threadId, unsigned char* bytes);
    private:
        static std::list<bool>* _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        static std::byte* _stat_REG_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;//todo: number of concurrent threads.
        static void stat_REG_boot1_DEFINE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(uint8_t* threadId);
        static void stat_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(uint8_t* threadId);
        static void stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId);
        static void stat_REG_boot3_INITIALISE_FLAG_SLIF_LaunchQue_Framework_Global_thread_2STATE(uint8_t* threadId, SLIF_LaunchQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId);
        static std::list<bool>* stat_REG_get_Array_Of_FLAG_SLIF_LaunchQue_Framework_Global_Thread2STATE(uint8_t* threadId);
        static std::byte* stat_REG_get_SLIF_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(uint8_t* threadId);
        static void stat_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(uint8_t* threadId, const std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    };
}
#endif
