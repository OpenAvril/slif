#ifndef OPENEPICENTRE_BACKENDSUBUNTU_slif_LaunchQue_Framework_Execute_H
#define OPENEPICENTRE_BACKENDSUBUNTU_slif_LaunchQue_Framework_Execute_H
#include <cstdint>
#include <list>
namespace slif {
    class slif_LaunchQue_Framework_Execute {
    public:
        slif_LaunchQue_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        virtual ~slif_LaunchQue_Framework_Execute();
        void dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        void dyn_PGM_boot4_INSTANTIATE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void stat_REG_boot0_DECLARE_slif_LaunchQue_Framework_Execute(uint8_t threadId);

    private:



    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_slif_LaunchQue_Framework_Execute_H