#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_DATA_CONTROL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_DATA_CONTROL_H
#include "../engine/CLIB_OpenEpiCentre_Framework.h"
#include <cstddef>
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre_Data_Control
    {
    public:
        CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId);
        virtual ~CLIB_OpenEpiCentre_Data_Control();
        void app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Output_DoubleBuffer(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentsysThreadId);
        void app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentsysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj);
        bool dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId);
        bool dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId);
        bool dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(uint8_t* sysThreadId);
        bool dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId);
        bool dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(uint8_t* sysThreadId);
        bool dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId);
        void dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId, bool value);
        void dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId, bool value);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(uint8_t* sysThreadId);
    private:
        static bool* _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction;
        static bool* _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend;
        static bool* _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
        static bool* _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
        static void stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId);
        static bool* stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId);
        static bool* stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId);
        static bool* stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId);
        static bool* stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId);
        static void stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId, bool new_Bool);
        static void stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId, bool new_Bool);
        static void stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId, bool new_Bool);
        static void stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId, bool new_Bool);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre_Data_Control_H
