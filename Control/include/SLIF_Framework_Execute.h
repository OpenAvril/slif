#ifndef CLIB_PACKAGE_SLIF_FRAMEWORK_EXECUTE_H
#define CLIB_PACKAGE_SLIF_FRAMEWORK_EXECUTE_H
#include <cstdint>
#include <list>
namespace slif {
    class SLIF_Framework_Execute {
    public:
        SLIF_Framework_Execute(uint8_t* threadId);
        virtual ~SLIF_Framework_Execute();
        void dyn_REG_boot1_DEFINE_slif_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(uint8_t* threadId);
        void dyn_REG_boot3_INITIALISE_slif_Framework_Execute(uint8_t* threadId);
        void dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot0_DECLARE_slif_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot1_DEFINE_slif_Framework_Execute(uint8_t* threadId);
        static void stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(uint8_t* threadId);
        static void stat_REG_boot0_DECLARE_slif_Framework_Execute(uint8_t* threadId);
    private:
        static int* stat_REG_HandleId_For_PGM_slifMutexQue;
        static int* stat_REG_HandleId_For_PGM_slifLaunchQue;
        static void stat_PGM_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        static void stat_PGM_boot1_DEFINE_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId);
        static void stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        static void stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId);
        static void stat_PGM_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        static void stat_PGM_boot3_INITIALISE_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId);
        static int* stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_slifMutexQue(uint8_t* threadId);
        static int* stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_slifLaunchQue(uint8_t* threadId);
    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_slif_Framework_Execute_H