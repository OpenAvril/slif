#include "../../include/independent/CLIB_Bus_STRUCT_Bus.h"
#include "../../include/CLIB_Bus_Framework_Global.h"
#include "independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.h"
#include <cstddef>
    class slif::Ticket* slif::CLIB_Bus_STRUCT_Bus::stat_REG_of_CLIB_Bus_CLASS_Ticket;
    unsigned char* slif::CLIB_Bus_STRUCT_Bus::stat_REG_of_CLIB_Bus_DATA;
// public.
    void slif::CLIB_Bus_STRUCT_Bus::dyn_REG_boot1_DEFINE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){

    }
    void slif::CLIB_Bus_STRUCT_Bus::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){

    }
    void slif::CLIB_Bus_STRUCT_Bus::dyn_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){

    }
    void slif::CLIB_Bus_STRUCT_Bus::stat_REG_boot0_DECLARE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){

    }

    void slif::CLIB_Bus_STRUCT_Bus::stat_CLASS_boot0_DECLARE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){

    }
    void slif::CLIB_Bus_STRUCT_Bus::stat_CLASS_boot1_DEFINE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_Bus_DATA(sysThreadId);
    }
    void slif::CLIB_Bus_STRUCT_Bus::stat_CLASS_boot3_INITIALISE_CLIB_Bus_CLASS_Bus(uint8_t* sysThreadId){
        stat_REG_boot1_INITIALISE_CLIB_Bus_CLASS_Ticket(sysThreadId);
        stat_REG_boot1_INITIALISE_CLIB_Bus_DATA(sysThreadId);
    }
// private.
    void slif::CLIB_Bus_STRUCT_Bus::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket(uint8_t* sysThreadId){
        stat_REG_of_CLIB_Bus_CLASS_Ticket = nullptr;
    }
    void slif::CLIB_Bus_STRUCT_Bus::stat_REG_boot1_DEFINE_CLIB_Bus_DATA(uint8_t* sysThreadId){
        stat_REG_of_CLIB_Bus_DATA = nullptr;
    }
    void slif::CLIB_Bus_STRUCT_Bus::stat_REG_boot1_INITIALISE_CLIB_Bus_CLASS_Ticket(uint8_t* sysThreadId){
        stat_REG_of_CLIB_Bus_CLASS_Ticket = new class Ticket(sysThreadId, static_cast<uint8_t*>(0), static_cast<uint8_t*>(0), static_cast<uint8_t*>(0), static_cast<uint8_t*>(0));
        while (stat_REG_of_CLIB_Bus_CLASS_Ticket == nullptr) {
        }
    }
    void slif::CLIB_Bus_STRUCT_Bus::stat_REG_boot1_INITIALISE_CLIB_Bus_DATA(uint8_t* sysThreadId){
        auto* DATA = new std::byte[1028];
        *stat_REG_of_CLIB_Bus_DATA = *CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA));
    }
