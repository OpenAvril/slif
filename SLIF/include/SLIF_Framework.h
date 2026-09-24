#ifndef CLIB_PACKAGE_SLIF_FRAMEWORK_H
#define CLIB_PACKAGE_SLIF_FRAMEWORK_H
#include "SLIF_Framework_Global.h"
namespace slif {
    class SLIF_Framework {
    public:
        SLIF_Framework(uint8_t* threadId);
        virtual ~SLIF_Framework();
        void dyn_CLASS_create_Architecture(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        void dyn_CLASS_create_slif_Framework_Global_and_Settings(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        class SLIF_Framework_Global* dyn_CLASS_get_ptr_slif_Framework_Global(uint8_t* threadId);
        void dyn_REG_boot0_DECLARE_slif_Framework(uint8_t* threadId);
        void dyn_REG_boot1_DEFINE_slif_Framework(uint8_t* threadId);
        void dyn_REG_boot2_SUBSTANTIATE_slif_Framework(uint8_t* threadId);
        void dyn_REG_boot3_INITIALISE_slif_Framework(uint8_t* threadId);
        static void stat_CLASS_boot0_DECLARE_slif_Framework(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_slif_Framework(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_Framework(uint8_t* threadId);
        static void stat_REG_boot0_DECLARE_slif_Framework(uint8_t* threadId);
    private:
        static class SLIF_Framework_Global* _stat_CLASS_ptr_slif_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_slif_Framework_Global(uint8_t* threadId);
        static void pr_stat_CLASS_boot3_INITIALISE_slif_Framework_Global(uint8_t* threadId);
        static class SLIF_Framework_Global* stat_CLASS_get_ptr_slif_Framework_Global(uint8_t* threadId);
    };
};
#endif