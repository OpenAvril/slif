#ifndef CLIB_PACKAGE_SLIF_FRAMEWORK_GLOBAL_H
#define CLIB_PACKAGE_SLIF_FRAMEWORK_GLOBAL_H
#include <list>
#include <cstdint>
namespace slif {
    class SLIF_Framework_Global {
    public:
        SLIF_Framework_Global(uint8_t* sysThreadId);
        ~SLIF_Framework_Global();
        static void boot0_CLASS_DECLARE_slif_Framework_Global(uint8_t* sysThreadId);
        static void boot1_CLASS_DEFINE_slif_Framework_Global(uint8_t* sysThreadId);
        static void boot3_CLASS_INITIALISE_slif_Framework_Global(uint8_t* sysThreadId);
        static void boot0_REG_DECLARE_slif_Framework_Global(uint8_t* sysThreadId);
        void boot1_REG_DEFINE_slif_Framework_Global(uint8_t* sysThreadId);
        void boot2_REG_SUBSTANTIATE_slif_Framework_Global(uint8_t* sysThreadId);
        void boot3_REG_INITIALISE_slif_Framework_Global(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    private:
    };
}
#endif
