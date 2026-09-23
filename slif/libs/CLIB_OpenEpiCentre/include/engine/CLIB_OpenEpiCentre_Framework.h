#ifndef TESTBENCH_CLIB_OPENEPICENTRE_FRAMEWORK_H
#define TESTBENCH_CLIB_OPENEPICENTRE_FRAMEWORK_H
#include "CLIB_OpenEpiCentre_App.h"
#include "CLIB_OpenEpiCentre_Framework_Global.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_Concurrent.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_Output.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_User_Algorithm.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_User_Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_User_Output.h"
namespace CLIBOpenEpiCentre {
    class CLIB_OpenEpiCentre_Framework {
    public:
        CLIB_OpenEpiCentre_Framework(uint8_t threadId);
        virtual ~CLIB_OpenEpiCentre_Framework();
        void dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(uint8_t threadId);
        void dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(uint8_t threadId);
        class CLIB_OpenEpiCentre_App* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId);
        class CLIB_OpenEpiCentre_Framework_Global* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId);
        struct CLIB_OpenEpiCentre_STRUCT_Concurrent* dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId);
        struct CLIB_OpenEpiCentre_STRUCT_Input* dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId);
        struct CLIB_OpenEpiCentre_STRUCT_Output* dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId);
        struct CLIB_OpenEpiCentre_STRUCT_User_Algorithm* dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId);
        struct CLIB_OpenEpiCentre_STRUCT_User_Input* dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId);
        struct CLIB_OpenEpiCentre_STRUCT_User_Output* dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
    private:
        static struct CLIB_OpenEpiCentre_App* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
        static struct CLIB_OpenEpiCentre_Framework_Global* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
        static struct CLIB_OpenEpiCentre_STRUCT_Concurrent* _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
        static struct CLIB_OpenEpiCentre_STRUCT_Input* _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
        static struct CLIB_OpenEpiCentre_STRUCT_Output* _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
		static struct CLIB_OpenEpiCentre_STRUCT_User_Algorithm* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
		static struct CLIB_OpenEpiCentre_STRUCT_User_Input* _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
		static struct CLIB_OpenEpiCentre_STRUCT_User_Output* _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_App* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_Framework_Global* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_STRUCT_Concurrent* stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_STRUCT_Input* stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_STRUCT_Output* stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_STRUCT_User_Algorithm* stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_STRUCT_User_Input* stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId);
        static struct CLIB_OpenEpiCentre_STRUCT_User_Output* stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId);
    };
}
#endif
