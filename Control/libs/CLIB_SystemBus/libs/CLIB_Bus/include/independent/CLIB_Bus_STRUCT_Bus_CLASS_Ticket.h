#ifndef CLIB_THREADS_LOG_CLIB_BUS_STRUCT_TICKET_H
#define CLIB_THREADS_LOG_CLIB_BUS_STRUCT_TICKET_H
#include <cstdint>
namespace slif {
    class Ticket {
    public:
        Ticket(uint8_t* sysThreadId, uint8_t* departureAccessId, uint8_t* departureJunctionId, uint8_t* arrivalJunctionId, uint8_t* arrivalAccessId);
        ~Ticket();
        uint8_t* get_Arrival_AccessId();
        uint8_t* get_Arrival_JunctionId();
        uint8_t* get_Departure_AccessId();
        uint8_t* get_Departure_JunctionId();
        void set_Arrival_AccessId(uint8_t* newValue_arrivalAccessId);
        void set_Arrival_JunctionId(uint8_t *newValue_arrivalJunctionId);
        void set_Departure_AccessId(uint8_t *newValue_departureAccessId);
        void set_Departure_JunctionId(uint8_t* newValue_departureJunctionId);
    private:
        static uint8_t* reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId;
        static uint8_t* reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
        static uint8_t* reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId;
        static uint8_t* reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
        static void stat_CLASS_boot0_DECLARE_CLIB_Bus_CLASS_Ticket();
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_CLASS_Ticket();
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_Bus_CLASS_Ticket();
        static void stat_REG_boot0_DECLARE_CLIB_Bus_CLASS_Ticket();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureJunctionId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureAccessId();
        static void stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureJunctionId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureAccessId();
        static void stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureJunctionId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureAccessId();
        static uint8_t* stat_get_Arrival_AccessId();
        static uint8_t* stat_get_Arrival_JunctionId();
        static uint8_t* stat_get_Departure_AccessId();
        static uint8_t* stat_get_Departure_JunctionId();
        static void stat_set_Arrival_AccessId(uint8_t newValue_arrivalJunctionId);
        static void stat_set_Arrival_JunctionId(uint8_t newValue_arrivalJunctionId);
        static void stat_set_Departure_AccessId(uint8_t newValue_departureJunctionId);
        static void stat_set_Departure_JunctionId(uint8_t newValue_departureJunctionId);
    };
}
#endif