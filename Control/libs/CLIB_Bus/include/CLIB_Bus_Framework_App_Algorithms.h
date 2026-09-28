#ifndef CLIB_slif_CLIB_Bus_Framework_App_Algorithms_H
#define CLIB_slif_CLIB_Bus_Framework_App_Algorithms_H
#include <cstdint>
#include <string>
namespace slif {
    class CLIB_Bus_Framework_App_Algorithms {
    public:
        CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        virtual ~CLIB_Bus_Framework_App_Algorithms();
        void dyn_REG_boot1_DEFINE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_Bus_Framework_App_Algorithms(uint8_t* sysThreadId);
    private:
    };
}
#endif