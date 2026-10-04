#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include <array>
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
    slif::CLIB_OpenEpiCentre_Framework_App_Data_Control* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control;
    std::array<slif::CLIB_OpenEpiCentre_STRUCT_Input*, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<slif::CLIB_OpenEpiCentre_STRUCT_Output*, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<slif::CLIB_OpenEpiCentre_STRUCT_Input*, 2>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
    std::array<slif::CLIB_OpenEpiCentre_STRUCT_Output*, 2>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
    std::vector<slif::CLIB_OpenEpiCentre_STRUCT_Input*>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    std::vector<slif::CLIB_OpenEpiCentre_STRUCT_Output*>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
// public.
    slif::CLIB_OpenEpiCentre_Framework_App_Data::CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Data::~CLIB_OpenEpiCentre_Framework_App_Data() {
        delete stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control;
        delete stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
        delete _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
        delete _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        }
    slif::CLIB_OpenEpiCentre_Framework_App_Data_Control* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_InputPraise(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_OutputPraise(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(sysThreadId, obj);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Input* objInput, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId, objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId, objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(sysThreadId, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(sysThreadId, objOutput);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        return stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId)->at(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(sysThreadId)));
    }
    struct slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        return stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId)->at(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId)));
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId)->begin();
        std::advance(temp, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(sysThreadId)));
        return *temp;
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework *obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId)->begin();
        std::advance(temp, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId)));
        return *temp;
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        return *temp;
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        return *temp;
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_vector_Of_stack_Of_InputPraise(uint8_t* sysThreadId, unsigned long long slot) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->begin();
        std::advance(temp, slot);
        return *temp;
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t* sysThreadId, unsigned long long slot) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->begin();
        std::advance(temp, slot);
        return *temp;
    }
    std::vector<slif::CLIB_OpenEpiCentre_STRUCT_Input*>* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(uint8_t* sysThreadId) {
        return stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId);
    }
    std::vector<slif::CLIB_OpenEpiCentre_STRUCT_Output*>* slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(uint8_t* sysThreadId) {
        return stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(sysThreadId)) = newClass;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(sysThreadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId)) = newClass;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(sysThreadId)) = newClass;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(sysThreadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId)) = newClass;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(sysThreadId, concurrentsysThreadId, newClass);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(sysThreadId, concurrentsysThreadId, newClass);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t* sysThreadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(sysThreadId, slot, newClass);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::dyn_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t* sysThreadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(sysThreadId, slot, newClass);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)"));
    }
// private.
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)"));
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)"));
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control = new CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId) == nullptr) {}
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)"));
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Data_Control* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)"));
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_doubleBuffer_Input(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_doubleBuffer_Input(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_doubleBuffer_Output(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_doubleBuffer_Output(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_InputPraise(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_InputPraise(sysThreadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_InputPraise(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_OutputPraise(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_OutputPraise(sysThreadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_stack_Of_OutputPraise(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<slif::CLIB_OpenEpiCentre_STRUCT_Input*, 3>();//todo number of implemented CONCURRENT threads.
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(sysThreadId)->size(); index++) {
            stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(sysThreadId)->at(index) = nullptr;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<slif::CLIB_OpenEpiCentre_STRUCT_Output*, 3>();//todo number of implemented CONCURRENT threads.
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(sysThreadId)->size(); index++) {
            stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(sysThreadId)->at(index) = nullptr;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Input(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = new std::array<struct slif::CLIB_OpenEpiCentre_STRUCT_Input*, 2>();
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = { nullptr, nullptr };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Input(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Output(sysThreadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = new std::array<slif::CLIB_OpenEpiCentre_STRUCT_Output*, 2>();
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = { nullptr, nullptr };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Output(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(sysThreadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<slif::CLIB_OpenEpiCentre_STRUCT_Input*>(sysThreadId);
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId) == nullptr) {}
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { nullptr };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(sysThreadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<slif::CLIB_OpenEpiCentre_STRUCT_Output*>(sysThreadId);
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId) == nullptr) {}
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { nullptr };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(uint8_t* sysThreadId, CLIB_OpenEpiCentre_STRUCT_Input* objInput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId)"));
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = objInput;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Input_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(uint8_t* sysThreadId, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId)"));
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = objOutput;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_buffer_Output_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* sysThreadId, struct slif::CLIB_OpenEpiCentre_STRUCT_Input* objInput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Input(sysThreadId)"));
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = { objInput, objInput };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Input(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* sysThreadId, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Output(sysThreadId)"));
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = { objOutput, objOutput };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_side_To_Write_For_doubleBuffer_Output(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(uint8_t* sysThreadId, CLIB_OpenEpiCentre_STRUCT_Input* objInput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(sysThreadId)"));
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { objInput };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_InputPraise(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(uint8_t* sysThreadId, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(sysThreadId)"));
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { objOutput };
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_stack_Of_OutputPraise(sysThreadId)"));
    }
    std::array<struct slif::CLIB_OpenEpiCentre_STRUCT_Input*, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(uint8_t* sysThreadId) {
        return _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
    }
    std::array<struct slif::CLIB_OpenEpiCentre_STRUCT_Output*, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(uint8_t* sysThreadId) {
        return _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<struct slif::CLIB_OpenEpiCentre_STRUCT_Input*, 2>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* sysThreadId) {
        return _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
    }
    std::array<struct slif::CLIB_OpenEpiCentre_STRUCT_Output*, 2>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_get_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* sysThreadId) {
        return _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
    }
    std::vector<struct slif::CLIB_OpenEpiCentre_STRUCT_Input*>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(uint8_t* sysThreadId) {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<struct slif::CLIB_OpenEpiCentre_STRUCT_Output*>* slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(uint8_t* sysThreadId) {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, slif::CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(sysThreadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        *temp = newClass;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, slif::CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(sysThreadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        *temp = newClass;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t* sysThreadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(sysThreadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->begin();
        std::advance(temp, slot);
        *temp = newClass;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(sysThreadId)"));
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data::stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t* sysThreadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(sysThreadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->begin();
        std::advance(temp, slot);
        *temp = newClass;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(sysThreadId)"));
    }