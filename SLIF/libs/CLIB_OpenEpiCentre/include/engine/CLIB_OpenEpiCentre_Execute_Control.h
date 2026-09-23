#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_EXECUTE_CONTROL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_EXECUTE_CONTROL_H
#include "CLIB_OpenEpiCentre_Framework.h"
#include <array>
#include <cstdint>
#include <thread>
namespace CLIBOpenEpiCentre {
    class CLIB_OpenEpiCentre_Execute_Control {
    public:
        CLIB_OpenEpiCentre_Execute_Control();
        virtual ~CLIB_OpenEpiCentre_Execute_Control();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(class CLIB_OpenEpiCentre_Framework* obj);
        bool dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
        bool dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t threadId);
        void dyn_REG_set_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(bool state);
        void dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t threadId, bool state);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control();
    private:
        static bool* _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised;
        static std::array<bool, 3>* _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised;//todo number of concurrent threads.
        static std::array<std::thread*, 3>* _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads;//todo number of concurrent threads.
        static void stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised();
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(class CLIB_OpenEpiCentre_Framework* obj);
        static bool* stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
        static std::array<bool, 3>* stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised();
        static void stat_REG_set_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(bool newFLAG_);//todo number of concurrent threads.
        static void stat_set_ptr_CLIB_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t threadId, bool state);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre_Execute_Control_H