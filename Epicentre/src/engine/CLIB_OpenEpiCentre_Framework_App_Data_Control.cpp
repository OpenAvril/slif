#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Data_Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Data.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction;
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend;
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
// public.
    slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId);
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::~CLIB_OpenEpiCentre_Framework_App_Data_Control() {
        delete stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction;
        delete stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend;
        delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
        delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::app_FUNCT_flip_CLIB_OpenEpiCentre_Framework_App_Data_Control_REG_Input_DoubleBuffer(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Framework_App_Data_Control_REG_Input_DoubleBuffer(obj);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::app_FUNCT_flip_CLIB_OpenEpiCentre_Framework_App_Data_Control_REG_Output_DoubleBuffer(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Framework_App_Data_Control_REG_Output_DoubleBuffer(obj);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::app_FUNCT_pop_CLIB_OpenEpiCentre_Framework_App_Data_Control_STACK_Of_Input(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentsysThreadId) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_set_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentsysThreadId, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_On_vector_Of_stack_Of_InputPraise(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->begin(sysThreadId)+1);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->size(sysThreadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(true);
        }
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::app_FUNCT_pop_CLIB_OpenEpiCentre_Framework_App_Data_Control_STACK_Of_Output(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->at(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->begin(sysThreadId)+1);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->size(sysThreadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(true);
        }
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::app_FUNCT_push_CLIB_OpenEpiCentre_Framework_App_Data_Control_STACK_Of_Input(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->at(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->size(sysThreadId)) = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_InputPraise(sysThreadId)->size(sysThreadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(true);
        }
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::app_FUNCT_push_CLIB_OpenEpiCentre_Framework_App_Data_Control_STACK_Of_Output(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentsysThreadId) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->at(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->size(sysThreadId)) = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentsysThreadId);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_vector_Of_stack_Of_OutputPraise(sysThreadId)->size(sysThreadId) < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(true);
        }
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(sysThreadId);
        stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(sysThreadId);
        stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId);
        stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(sysThreadId);
        stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(sysThreadId);
        stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId);
        stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    bool slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId) {
        return stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(sysThreadId);
    }
    bool slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId) {
        return stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(sysThreadId);
    }
    bool slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(uint8_t* sysThreadId) {
        return !*stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId);
    }
    bool slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId) {
        return *stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(sysThreadId);
    }
    bool slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(uint8_t* sysThreadId) {
        return !*stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId);
    }
    bool slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId) {
        return *stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(sysThreadId);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId, bool value) {
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(value);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId, bool value) {
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(value);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)<< " std::endl;
    }
// private.
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
        stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction = new bool(sysThreadId);
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(true);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend = new bool(sysThreadId);
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(true);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput = new bool(sysThreadId);
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(true);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput = new bool(sysThreadId);
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(true);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(false);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(false);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(false);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
        stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(false);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
    }
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_FLAG_isLoaded_Stack_InputAction = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
        return _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction;
    }
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_FLAG_isLoaded_Stack_OutputSend = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
        return _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend;
    }
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
        return _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
    }
    bool* slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: <= _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
        return _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(uint8_t* sysThreadId, bool new_Bool) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
        *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction = new_Bool;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_InputAction));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(uint8_t* sysThreadId, bool new_Bool) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
        *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend = new_Bool;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Data_Control_isLoaded_Stack_OutputSend));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(uint8_t* sysThreadId, bool new_Bool) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
        *_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput = new_Bool;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(sysThreadId)<< " std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Data_Control::stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(uint8_t* sysThreadId, bool new_Bool) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
        *_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput = new_Bool;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(sysThreadId)<< " std::endl;
    }