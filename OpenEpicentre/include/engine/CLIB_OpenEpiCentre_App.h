#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_APP_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_APP_H
#include "CLIB_OpenEpiCentre_Algorithms.h"
#include "CLIB_OpenEpiCentre_Data.h"
#include "CLIB_OpenEpiCentre_Execute.h"
namespace CLIBOpenEpiCentre {
    class CLIB_OpenEpiCentre_App {
    public:
        CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        virtual ~CLIB_OpenEpiCentre_App();
        class CLIB_OpenEpiCentre_Algorithms* dyn_CLASS_get_ptr_Algorithms(uint8_t* sysThreadId);
        class CLIB_OpenEpiCentre_Data* dyn_CLASS_get_ptr_Data(uint8_t* sysThreadId);
        class CLIB_OpenEpiCentre_Execute* dyn_CLASS_get_ptr_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId);
    private:
        static class CLIB_OpenEpiCentre_Algorithms* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
        static class CLIB_OpenEpiCentre_Data* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
        static class CLIB_OpenEpiCentre_Execute* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(uint8_t* sysThreadId);
        static class CLIB_OpenEpiCentre_Algorithms* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(uint8_t* sysThreadId);
        static class CLIB_OpenEpiCentre_Data* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(uint8_t* sysThreadId);
        static class CLIB_OpenEpiCentre_Execute* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(uint8_t* sysThreadId);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_APP_H
