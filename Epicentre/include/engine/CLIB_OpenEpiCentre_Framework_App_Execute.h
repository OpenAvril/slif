#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_EXECUTE_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_EXECUTE_H
#include "CLIB_OpenEpiCentre_Framework.h"
#include "CLIB_OpenEpiCentre_Framework_App_Execute_Control.h"
#include <list>
#include <thread>
namespace slif {
    class CLIB_OpenEpiCentre_Framework_App_Execute {
    public:
        CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId);
        virtual ~CLIB_OpenEpiCentre_Framework_App_Execute();
        class CLIB_OpenEpiCentre_Framework_App_Execute_Control* dyn_CLASS_get_ptr_Execute_Control(uint8_t* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        int* dyn_PGM_get_HandleID_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId);
        int* dyn_PGM_get_HandleID_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId);
        int* dyn_PGM_get_HandleID_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId);
    private:
        static class CLIB_OpenEpiCentre_Framework_App_Execute_Control* _stat_CLASS_CLIB_OpenEpiCentre_Framework_App_Execute_Control;
        static void* _stat_PGM_CLIB_LaunchQueForThreadsAt_Server;
        static std::array<class WriteEnableForThreadsAt_DataStack_Framework*, 2>* _stat_PGM_CLIB_WriteQueForThreadsAt_DataStack;
        static void stat_CLASS_boot1_DEFINE_Execute_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_Execute_Control(uint8_t* sysThreadId);
        static class CLIB_OpenEpiCentre_Framework_App_Execute_Control* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
        static std::list<std::thread*>* stat_PGM_get_ptr_List_Of_Threads(uint8_t* sysThreadId);
        static void stat_PGM_boot1_DEFINE_HandleID_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId);
        static void stat_PGM_boot1_DEFINE_HandleID_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId);
        static void stat_PGM_boot1_DEFINE_HandleID_For_HandleID_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_HandleID_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_HandleID_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_HandleID_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId);
        static int* stat_PGM_get_HandleID_For_CLIB_LaunchQue_Server(uint8_t* sysThreadId);
        static int* stat_PGM_get_HandleID_For_CLIB_MutexQue_ServerInputReceive(uint8_t* sysThreadId);
        static int* stat_PGM_get_HandleID_For_CLIB_MutexQue_ServerOutputSend(uint8_t* sysThreadId);
    };
};
#endif