#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_DATA_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_DATA_H
#include "CLIB_OpenEpiCentre_Data_Control.h"
#include "CLIB_OpenEpiCentre_Framework.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_Output.h"
#include <array>
#include <vector>
namespace CLIBOpenEpiCentre {
    class CLIB_OpenEpiCentre_Data {
     public:
        CLIB_OpenEpiCentre_Data(uint8_t threadId);
        virtual ~CLIB_OpenEpiCentre_Data();
        class CLIB_OpenEpiCentre_Data_Control* dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* objInput, struct CLIB_OpenEpiCentre_STRUCT_Output* objOutput);
        struct CLIB_OpenEpiCentre_STRUCT_Input* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT_Input* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT_Output* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT_Output* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework *obj);
        struct CLIB_OpenEpiCentre_STRUCT_Input* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadId, uint8_t concurrentthreadId);
        struct CLIB_OpenEpiCentre_STRUCT_Output* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadId, uint8_t concurrentthreadId);
        struct CLIB_OpenEpiCentre_STRUCT_Input* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_On_vector_Of_stack_Of_InputPraise(uint8_t threadId, unsigned long long slot);
        struct CLIB_OpenEpiCentre_STRUCT_Output* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t threadId, unsigned long long slot);
        std::vector<struct CLIB_OpenEpiCentre_STRUCT_Input*>* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(uint8_t threadId);
        std::vector<struct CLIB_OpenEpiCentre_STRUCT_Output*>* dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(uint8_t threadId);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass);
        void dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t threadId, uint8_t concurrentthreadId, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass);
        void dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t threadId, uint8_t concurrentthreadId, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass);
        void dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t threadId, unsigned long long slot, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass);
        void dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t threadId, unsigned long long slot, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t threadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data(uint8_t threadId);
    private:
        static class CLIB_OpenEpiCentre_Data_Control* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control;
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Input*, 3>* _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Output*, 3>* _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Input*, 2>* _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Output*, 2>* _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT_Input*>* _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT_Output*>* _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId);
        static class CLIB_OpenEpiCentre_Data_Control* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_InputPraise(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_OutputPraise(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) ;
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) ;
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) ;
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) ;
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(uint8_t threadId, struct CLIB_OpenEpiCentre_STRUCT_Input* objInput);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(uint8_t threadId, struct CLIB_OpenEpiCentre_STRUCT_Output* objOutput);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t threadId, struct CLIB_OpenEpiCentre_STRUCT_Input* objInput);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t threadId, struct CLIB_OpenEpiCentre_STRUCT_Output* objOutput);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(uint8_t threadId, struct CLIB_OpenEpiCentre_STRUCT_Input* objInput);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(uint8_t threadId, struct CLIB_OpenEpiCentre_STRUCT_Output* objOutput);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_User_Input(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_User_Output(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj);
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Input*, 3>* stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(uint8_t threadId);//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Output*, 3>* stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(uint8_t threadId);//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Input*, 2>* stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t threadId);
        static std::array<struct CLIB_OpenEpiCentre_STRUCT_Output*, 2>* stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t threadId);
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT_Input*>* stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(uint8_t threadId);
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT_Output*>* stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(uint8_t threadId);
        static void stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t threadId, uint8_t concurrentthreadId, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass);
        static void stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t threadId, uint8_t concurrentthreadId, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass);
        static void stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t threadId, unsigned long long slot, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass);
        static void stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t threadId, unsigned long long slot, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre_Data_H
