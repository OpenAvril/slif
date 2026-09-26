#ifndef CLIB_SLIF_PACKAGE_OPTIMUSPRIME_H
#define CLIB_SLIF_PACKAGE_OPTIMUSPRIME_H
#include <array>
#include <cstdint>
extern "C" {
    namespace slif {
        class OptimusPrime {
        public:
            static void instantiateAll(uint8_t* sysThreadId);
        private:
            static void slif_OptimusPrime_App_FUNCT_OptimusPrime(uint8_t* sysThreadId);
            static std::array<bool, 1> slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
        };
    }
}
#endif
