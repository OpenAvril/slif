#ifndef OPENEPICENTRE_BACKENDSUBUNTU_SLIF_LaunchQue_Framework_Execute_H
#define OPENEPICENTRE_BACKENDSUBUNTU_SLIF_LaunchQue_Framework_Execute_H
#include <cstdint>
#include <list>
namespace slif {
    class SLIF_LaunchQue_Framework_Execute {
    public:
        SLIF_LaunchQue_Framework_Execute(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        virtual ~SLIF_LaunchQue_Framework_Execute();
        void dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        void dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId);
    private:
        static int* stat_REG_HandleId_For_PGM_slifMutexQue;
        static void stat_REG_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        static void stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        static void stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);


    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_SLIF_LaunchQue_Framework_Execute_H