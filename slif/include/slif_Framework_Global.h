#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_slif_Framework_Global_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_slif_Framework_Global_H
#include <list>
#include <cstdint>
namespace slif {
    class slif_Framework_Global {
    public:
        slif_Framework_Global(uint8_t threadId);
        ~slif_Framework_Global();
        static void boot0_CLASS_DECLARE_slif_Framework_Global(uint8_t threadId);
        static void boot1_CLASS_DEFINE_slif_Framework_Global(uint8_t threadId);
        static void boot3_CLASS_INITIALISE_slif_Framework_Global(uint8_t threadId);
        static void boot0_REG_DECLARE_slif_Framework_Global(uint8_t threadId);
        void boot1_REG_DEFINE_slif_Framework_Global(uint8_t threadId);
        void boot2_REG_SUBSTANTIATE_slif_Framework_Global(uint8_t threadId);
        void boot3_REG_INITIALISE_slif_Framework_Global(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    private:
    };
}
#endif
