#ifndef OPENEPICENTRE_BACKENDSUBUNTU_CLIB_LaunchQue_Framework_Execute_H
#define OPENEPICENTRE_BACKENDSUBUNTU_CLIB_LaunchQue_Framework_Execute_H
#include <cstdint>
#include <list>
namespace slif {
    class CLIB_LaunchQue_Framework_Execute {
    public:
        CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId);
    private:
        static int* stat_REG_HandleId_For_PGM_CLIBMutexQue;
        static void stat_REG_boot1_DEFINE_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId);


    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_CLIB_LaunchQue_Framework_Execute_H