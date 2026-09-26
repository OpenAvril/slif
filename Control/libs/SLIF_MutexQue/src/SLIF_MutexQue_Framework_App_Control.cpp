#include "../include/SLIF_MutexQue_Framework_App_Control.h"
#include "../include/SLIF_MutexQue_Framework_App.h"
#include "../include/SLIF_MutexQue_Framework_Global.h"
#include <iostream>
#include <iterator>
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE;
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId;
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId;
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId;
    std::list<uint8_t>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE;
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index;
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index;
// public.
    slif::SLIF_MutexQue_Framework_App_Control::SLIF_MutexQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App_Control::~SLIF_MutexQue_Framework_App_Control() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : ~SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        delete _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE;
        delete _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId;
        delete _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId;
        delete _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId;
        delete _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE;
        delete _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index;
        delete _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : ~SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId,false);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId) == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)) {

            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicOut(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicOut(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId,false);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId) == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)) {

            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicOut(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(sysThreadId, coreId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj, uint8_t coreId_A, uint8_t coreId_B) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId)" << std::endl;
        auto temp_A = static_cast<unsigned long long>(0);
        temp_A = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(sysThreadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId, coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_sysThreadId(sysThreadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId, coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_sysThreadId(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId, coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId,coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,coreId_B, temp_B);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId)" << std::endl;
        for (uint8_t index_A = 0; index_A < (static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)) - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_A)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId))
                {
                    if ((obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId))
                        || (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId)))
                    {
                        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId,obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(sysThreadId,index_A) > obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(sysThreadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId,obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_A)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId))
                {
                    if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_sysThreadId(sysThreadId, index_A) < obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_sysThreadId(sysThreadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId, obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_A)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId))
                {
                    if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId))
                    {
                        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId, obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId, index_A) > obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId, obj, index_A, index_B);
                        }
                    }
                }
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId)" << std::endl;
        for (uint8_t concurrenctsysThreadId = 0; concurrenctsysThreadId < static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)); concurrenctsysThreadId++)
        {
            if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, concurrenctsysThreadId) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId))
            {
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId) + 1);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, concurrenctsysThreadId) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(sysThreadId))
            {
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, concurrenctsysThreadId) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(sysThreadId))
            {
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId) + 1);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId, concurrenctsysThreadId, 0);
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(sysThreadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId,obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadIdd(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId, obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot3_REINITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadIdd(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId, obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId)" << std::endl;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
    }
    uint8_t slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)" << std::endl;
        return *stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId);
    }
    uint8_t slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)" << std::endl;
        return *stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId);
    }
    std::array<bool, 2> slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool, 2> : dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId)" << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_sysThreadId(sysThreadId)" << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_sysThreadId(sysThreadId)" << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_sysThreadId(sysThreadId)" << std::endl;
        return *temp;
    }
    uint8_t slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t slotID) {
        auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
        std::advance(temp, slotID);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        return *temp;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, std::array<bool, 2> new2bitState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => std::array<bool, 2> : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId, concurrentsysThreadId, new2bitState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newCount) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId,concurrentsysThreadId, newCount);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newCount) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId,concurrentsysThreadId, newCount);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newCount){
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId,concurrentsysThreadId, newCount);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t slotID, uint8_t newID){
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,slotID, newID);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, newValue);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
       stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, newValue);
    }
// private.
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE(sysThreadId)." << std::endl;
        _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId) == nullptr) {}
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE->at(2) = { true, true };
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->resize( static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->resize(static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(sysThreadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->resize(static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId)." << std::endl;
        _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->resize(static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = UINT8_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index = new uint8_t();
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index = UINT8_MAX;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index = new uint8_t();
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index = UINT8_MAX;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->at(0) = { false, false };
        stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->at(1) = { false, true };
        stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->at(2) = { true, false };
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->resize( static_cast<unsigned long long>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->resize( static_cast<unsigned long long>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadIdd(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadIdd(sysThreadId)." << std::endl;
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->resize( static_cast<unsigned long long>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadIdd(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(uint8_t* sysThreadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId)." << std::endl;
        stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->resize( static_cast<int>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexsysThreadId = 0; indexsysThreadId < stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->size(); indexsysThreadId++) {
            auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
            std::advance(temp, indexsysThreadId);
            *temp = static_cast<uint8_t>(indexsysThreadId);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_sysThreadId_To_WRITE(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index = 0;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index = 0;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<std::array<bool, 2>, 3>* : stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE;
    }
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)." << std::endl;
        return _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId;
    }
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        return _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_sysThreadId;
    }
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)." << std::endl;
        return _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_sysThreadId;
    }
    std::list<uint8_t>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<uint8_t>* : stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        return _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_sysThreadId_To_WRITE;
    }
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        return _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index;
    }
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        return _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => std::array<bool, 2> : stat_REG_set_Item_On_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        *temp = new2bitState;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_sysThreadId(sysThreadId)." << std::endl;
        *temp = newCount;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_sysThreadId(sysThreadId)." << std::endl;
        *temp = newCount;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(uint8_t* sysThreadId, uint8_t concurrentsysThreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentsysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_sysThreadId(sysThreadId)." << std::endl;
        *temp = newCount;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t slotID, uint8_t concurrentsysThreadId) {
        auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
        std::advance(temp, slotID);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : stat_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        *temp = concurrentsysThreadId;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index = newValue;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index = newValue;
    }