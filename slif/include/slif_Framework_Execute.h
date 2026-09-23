#ifndef CLIB_PACKAGE_SLIF_FRAMEWORK_EXECUTE_H
#define CLIB_PACKAGE_SLIF_FRAMEWORK_EXECUTE_H
#include <cstdint>
#include <list>
namespace slif {
    class slif_Framework_Execute {
    public:
        slif_Framework_Execute(uint8_t threadId);
        virtual ~slif_Framework_Execute();
        void dyn_REG_boot1_DEFINE_slif_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_slif_Framework_Execute(uint8_t threadId);
        void dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_slif_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_slif_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_slif_Framework_Execute(uint8_t threadId);
    private:
        static std::list<void*>* _stat_PGM_CLIB_slif_MutexQue;
        static void stat_PGM_boot1_DEFINE_CLIB_slif_MutexQue(uint8_t threadId);
        static void stat_PGM_boot2_SUBSTANTIATE_CLIB_slif_MutexQue(uint8_t threadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_slif_MutexQue(uint8_t threadId, std::byte* DATA_CLUSTER_ID, const std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static std::list<void*>* stat_PGM_get_array_of_ptrPGM_CLIB_slif_MutexQue(uint8_t threadId);
    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_slif_Framework_Execute_H