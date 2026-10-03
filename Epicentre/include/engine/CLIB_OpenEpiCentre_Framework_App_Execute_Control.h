#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_EXECUTE_CONTROL_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_EXECUTE_CONTROL_H
#include "CLIB_OpenEpiCentre_Framework.h"
#include <array>
#include <cstdint>
#include <thread>
namespace slif {
    class CLIB_OpenEpiCentre_Framework_App_Execute_Control {
    public:
        CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
        virtual ~CLIB_OpenEpiCentre_Framework_App_Execute_Control();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        bool dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId);
        bool dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* concurrnetThreadId);
        void dyn_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, bool state);
        void dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* concurrnetThreadId, bool state);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId);
    private:
        static bool* stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
        static std::array<bool, 3>* stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;//todo number of concurrent threads.
        static std::array<std::thread*, 3>* stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads;//todo number of concurrent threads.
        static void stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        static bool* stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId);
        static std::array<bool, 3>* stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId);
        static void stat_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, bool newFLAG);//todo number of concurrent threads.
        static void stat_set_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* threadId,bool state);
    };
};
#endif