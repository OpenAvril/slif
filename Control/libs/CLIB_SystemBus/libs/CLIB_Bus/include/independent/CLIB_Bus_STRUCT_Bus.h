#ifndef CLIB_THREADS_LOG_CLIB_BUS_STRUCT_BUS_H
#define CLIB_THREADS_LOG_CLIB_BUS_STRUCT_BUS_H
#include <cstdint>
namespace slif {
    struct CLIB_Bus_STRUCT_Bus {
    public:
        void dyn_REG_boot1_DEFINE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId);

    private:
        static class Ticket* stat_REG_of_CLIB_Bus_CLASS_Ticket; 
        static unsigned char* stat_REG_of_CLIB_Bus_DATA;
        static void stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_Bus_DATA(uint8_t* sysThreadId);
        static void stat_REG_boot1_INITIALISE_CLIB_Bus_CLASS_Ticket(std::uint8_t* sysThreadId);
        static void stat_REG_boot1_INITIALISE_CLIB_Bus_DATA(std::uint8_t* sysThreadId);
    };
}
#endif
