#ifndef CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
#define CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
#include <cstdint>
#include <list>
namespace slif {
    class CLIB_SystemBus_Framework_App_Execute {
    public:
        CLIB_SystemBus_Framework_App_Execute(uint8_t* sysThreadId);
        virtual ~CLIB_SystemBus_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId);
        std::list<int*>* dyn_PGM_get_List_CLIB_List_Of_Busses(uint8_t* sysThreadId);
        int* dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(uint8_t* sysThreadId, uint8_t* busId);
        int* dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(uint8_t* sysThreadId);
    private:
        static int* stat_PGM_CLIB_MutexQue_Of_Stemisphore;
        static std::list<int*>* stat_PGM_CLIB_List_Of_Busses;
        static void stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(uint8_t* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(uint8_t* sysThreadId);
        static std::list<int*>* stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(uint8_t* sysThreadId);
        static int* stat_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(uint8_t* sysThreadId);
    };
};
#endif //CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
