#include "../../include/engine/CLIB_OpenEpiCentre_Data_Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::CLIB_OpenEpiCentre_Data_Control(uint8_t threadId) {
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId);
        stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(threadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(threadId);
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::~CLIB_OpenEpiCentre_Data_Control() {
        delete _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction;
        delete _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend;
        delete _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
        delete _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(obj);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Output_DoubleBuffer(uint8_t threadId, class CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Output_DoubleBuffer(obj);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentthreadId) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_set_CLIB_OpenEpiCentre_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentthreadId, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_On_vector_Of_stack_Of_InputPraise(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->begin(threadId)+1);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->size(threadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->at(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->begin(threadId)+1);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->size(threadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->at(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->size(threadId)) = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_InputPraise(threadId)->size(threadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentthreadId) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->at(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->size(threadId)) = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentthreadId);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_vector_Of_stack_Of_OutputPraise(threadId)->size(threadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(threadId);
        stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(threadId);
        stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput(threadId);
        stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(threadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(threadId);
        stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput(threadId);
        stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(threadId);
        stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(threadId);
        stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput(threadId);
        stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(uint8_t threadId) {
        return stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(threadId);
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId) {
        return stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(threadId);
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(uint8_t threadId) {
        return !*stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(threadId);
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t threadId) {
        return *stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(threadId);
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(uint8_t threadId) {
        return !*stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(threadId);
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t threadId) {
        return *stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(threadId);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(uint8_t threadId, bool value) {
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(value);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId, bool value) {
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(value);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control(threadId)"));
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(threadId)"));
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(threadId)"));
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input(threadId)"));
        _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output(threadId)"));
        _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(threadId)"));
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction = new bool(threadId);
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(true);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(threadId)"));
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend = new bool(threadId);
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(true);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input(threadId)"));
        _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput = new bool(threadId);
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(true);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output(threadId)"));
        _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput = new bool(threadId);
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(true);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(threadId)"));
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(false);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(threadId)"));
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(false);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input(threadId)"));
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(false);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output(threadId)"));
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(false);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output(threadId)"));
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_FLAG_isLoaded_Stack_InputAction = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(threadId)"));
        return _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_FLAG_isLoaded_Stack_OutputSend = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(threadId)"));
        return _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(threadId)"));
        return _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(threadId)"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(threadId)"));
        return _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(uint8_t threadId, bool new_Bool) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(threadId)"));
        *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction = new_Bool;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(uint8_t threadId, bool new_Bool) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(threadId)"));
        *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend = new_Bool;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t threadId, bool new_Bool) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(threadId)"));
        *_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput = new_Bool;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data_Control::stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t threadId, bool new_Bool) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(threadId)"));
        *_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput = new_Bool;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(threadId)"));
    }