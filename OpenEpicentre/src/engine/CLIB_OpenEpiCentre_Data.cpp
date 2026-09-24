#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include <array>
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::_stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_Data(threadId)"));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(threadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Data(threadId)"));
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::~CLIB_OpenEpiCentre_Data() {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control;
        delete _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
        delete _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
        delete _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(uint8_t* threadId) {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(threadId)"));
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_InputPraise(threadId);
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_OutputPraise(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(threadId)"));
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(threadId, obj);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Input* objInput, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(threadId)"));
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId, objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId, objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(threadId, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(threadId, objOutput);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        return stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId)->at(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(threadId)));
    }
    struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        return stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId)->at(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(threadId)));
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId)->begin();
        std::advance(temp, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(threadId)));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(uint8_t* threadId, CLIB_OpenEpiCentre_Framework *obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId)->begin();
        std::advance(temp, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(threadId)));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t* threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t* threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_On_vector_Of_stack_Of_InputPraise(uint8_t* threadId, unsigned long long slot) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->begin();
        std::advance(temp, slot);
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t* threadId, unsigned long long slot) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->begin();
        std::advance(temp, slot);
        return *temp;
    }
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(uint8_t* threadId) {
        return stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId);
    }
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(uint8_t* threadId) {
        return stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(uint8_t* threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(threadId)) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(uint8_t* threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(threadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(threadId)) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(uint8_t* threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(threadId)) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(uint8_t* threadId, class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(threadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(threadId)) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t* threadId, uint8_t concurrentthreadId, CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(threadId, concurrentthreadId, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t* threadId, uint8_t concurrentthreadId, CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(threadId, concurrentthreadId, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t* threadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(threadId, slot, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t* threadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(threadId, slot, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(threadId)"));
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(threadId)"));
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data(threadId)"));
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control = new CLIB_OpenEpiCentre_Data_Control(threadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId) == nullptr) {}
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data_Control(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId)"));
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId)"));
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_doubleBuffer_Input(threadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_doubleBuffer_Output(threadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_doubleBuffer_Output(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_InputPraise(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_InputPraise(threadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_InputPraise(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_OutputPraise(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_OutputPraise(threadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_buffer_stack_Of_OutputPraise(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId)"));
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*, 3>();//todo number of implemented CONCURRENT threads.
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(threadId)->size(); index++) {
            stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(threadId)->at(index) = nullptr;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId)"));
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*, 3>();//todo number of implemented CONCURRENT threads.
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(threadId)->size(); index++) {
            stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(threadId)->at(index) = nullptr;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Input(threadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = new std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*, 2>();
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = { nullptr, nullptr };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Output(threadId)"));
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*, 2>();
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = { nullptr, nullptr };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Output(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(threadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*>(threadId);
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId) == nullptr) {}
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { nullptr };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(uint8_t* threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(threadId)"));
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*>(threadId);
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId) == nullptr) {}
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { nullptr };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(uint8_t* threadId, CLIB_OpenEpiCentre_STRUCT_Input* objInput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId)"));
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(threadId)->size(); index++) {
            auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(threadId)->begin();
            std::advance(temp, index);
            *temp = objInput;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Input_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(uint8_t* threadId, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId)"));
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(threadId)->size(); index++) {
            auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(threadId)->begin();
            std::advance(temp, index);
            *temp = objOutput;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_buffer_Output_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* threadId, struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* objInput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Input(threadId)"));
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = { objInput, objInput };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* threadId, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Output(threadId)"));
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = { objOutput, objOutput };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_side_To_Write_For_doubleBuffer_Output(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(uint8_t* threadId, CLIB_OpenEpiCentre_STRUCT_Input* objInput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(threadId)"));
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { objInput };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_InputPraise(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(uint8_t* threadId, CLIB_OpenEpiCentre_STRUCT_Output* objOutput) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(threadId)"));
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { objOutput };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_stack_Of_OutputPraise(threadId)"));
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(uint8_t* threadId) {
        return _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(uint8_t* threadId) {
        return _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(uint8_t* threadId) {
        return _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_get_REG_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(uint8_t* threadId) {
        return _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
    }
    std::vector<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(uint8_t* threadId) {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(uint8_t* threadId) {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t* threadId, uint8_t concurrentthreadId, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(threadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Input_ReferenceForThread(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        *temp = newClass;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t* threadId, uint8_t concurrentthreadId, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(threadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_array_Of_buffer_Output_ReferenceForThread(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        *temp = newClass;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t* threadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Input* newClass) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(threadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->begin();
        std::advance(temp, slot);
        *temp = newClass;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_InputPraise(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data::stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t* threadId, unsigned long long slot, CLIB_OpenEpiCentre_STRUCT_Output* newClass) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(threadId)"));
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->begin();
        std::advance(temp, slot);
        *temp = newClass;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Vector_Of_stack_Of_OutputPraise(threadId)"));
    }