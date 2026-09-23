#include "SLIF_MutexQue_Framework_App_Control.h"
#include "SLIF_MutexQue_Framework_App.h"
#include "SLIF_MutexQue_Framework_Global.h"
#include <iostream>
#include <iterator>
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
    bool* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE;
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId;
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId;
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId;
    std::list<uint8_t>* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE;
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index;
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index;
// public.
    slif::SLIF_MutexQue_Framework_App_Control::SLIF_MutexQue_Framework_App_Control(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App_Control::~SLIF_MutexQue_Framework_App_Control() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : ~SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
        delete _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        delete _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE;
        delete _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId;
        delete _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId;
        delete _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId;
        delete _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE;
        delete _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index;
        delete _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : ~SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(uint8_t threadId, SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId,false);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId) == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)) {

            }
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicOut(uint8_t threadId, SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicOut(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId,false);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId) == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)) {

            }
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicOut(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(uint8_t threadId, SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(threadId, coreId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId));
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(uint8_t threadId, SLIF_MutexQue_Framework* obj, uint8_t coreId_A, uint8_t coreId_B) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId)." << std::endl;
        auto temp_A = static_cast<unsigned long long>(0);
        temp_A = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId, coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId, coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId,coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId,coreId_A, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId,coreId_B, temp_B);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(threadId)." << std::endl;
        for (uint8_t index_A = 0; index_A < (static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)) - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_A)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId))
                {
                    if ((obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId))
                        || (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId)))
                    {
                        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId,obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId,index_A) > obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId,obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_A)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId))
                {
                    if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId, index_A) < obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId, obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_A)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId))
                {
                    if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId))
                    {
                        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId, obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, index_A) > obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(threadId, obj, index_A, index_B);
                        }
                    }
                }
            }
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(threadId)." << std::endl;
        for (uint8_t concurrenctthreadId = 0; concurrenctthreadId < static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)); concurrenctthreadId++)
        {
            if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, concurrenctthreadId) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId))
            {
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, concurrenctthreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, concurrenctthreadId) + 1);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId, concurrenctthreadId, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, concurrenctthreadId) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WAIT(threadId))
            {
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId, concurrenctthreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, concurrenctthreadId) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, concurrenctthreadId) == obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_WRITE(threadId))
            {
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId, concurrenctthreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId, concurrenctthreadId) + 1);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId, concurrenctthreadId, 0);
            }
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId,obj);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId, obj);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(threadId)." << std::endl;
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId, obj);
        stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId, obj);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(threadId)." << std::endl;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        return stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
    }
    uint8_t slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        return *stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
    }
    uint8_t slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
        return *stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
    }
    std::array<bool, 2> slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::array<bool, 2> : dyn_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId)." << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId)." << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId)." << std::endl;
        return *temp;
    }
    unsigned long long slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_SLIF_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId)." << std::endl;
        return *temp;
    }
    uint8_t slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId, uint8_t slotID) {
        auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
        std::advance(temp, slotID);
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : dyn_REG_get_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)." << std::endl;
        return *temp;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId, FLAGState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(uint8_t threadId, uint8_t concurrentthreadId, std::array<bool, 2> new2bitState) {
        std::cout << "thread " << std::to_string(threadId) << " :: => std::array<bool, 2> : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(threadId)." << std::endl;
        stat_REG_set_Item_On_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId, concurrentthreadId, new2bitState);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        std::cout << "thread " << std::to_string(threadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId,concurrentthreadId, newCount);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        std::cout << "thread " << std::to_string(threadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId,concurrentthreadId, newCount);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount){
        std::cout << "thread " << std::to_string(threadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId,concurrentthreadId, newCount);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId, uint8_t slotID, uint8_t newID){
        std::cout << "thread " << std::to_string(threadId) << " :: => uint8_t : dyn_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)." << std::endl;
        stat_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId,slotID, newID);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(threadId) << " :: => uint8_t : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(newValue);
    }
    void slif::SLIF_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(threadId) << " :: => uint8_t : dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
       stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(newValue);
    }
// private.
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE(threadId)." << std::endl;
        _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = true;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = true;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = true;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = true;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId) == nullptr) {}
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE->at(2) = { true, true };
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->resize( static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->resize(static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(uint8_t threadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)." << std::endl;
        _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->resize(static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(uint8_t threadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)." << std::endl;
        _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId) == nullptr) {}
        stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->resize(static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT8_MAX;
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = new uint8_t();
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = UINT8_MAX;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
        _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = new uint8_t();
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = UINT8_MAX;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = false;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = false;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = false;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = false;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
        _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId) == nullptr) {}
        stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->at(0) = { false, false };
        stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->at(1) = { false, true };
        stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->at(2) = { true, false };
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->resize( static_cast<unsigned long long>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)." << std::endl;
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->resize( static_cast<unsigned long long>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadIdd(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId)." << std::endl;
        stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->resize( static_cast<unsigned long long>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(uint8_t threadId, SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)." << std::endl;
        stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->resize( static_cast<int>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId)));
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint8_t>(threadId);
        }
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = 0;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = 0;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
    }
    bool slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= bool : stat_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        return _stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::array<std::array<bool, 2>, 3>* : stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
        return _stat_REG_CONST_SLIF_MutexQue_Framework_App_Control_2bitFLAG_STATE;
    }
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)." << std::endl;
        return _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId;
    }
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)." << std::endl;
        return _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteIDLE_Count_For_threadId;
    }
    std::list<unsigned long long>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)." << std::endl;
        return _stat_REG_LIST_Of_SLIF_MutexQue_Framework_App_Control_WriteWAIT_Count_For_threadId;
    }
    std::list<uint8_t>* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<uint8_t>* : stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)." << std::endl;
        return _stat_REG_QUE_Of_SLIF_MutexQue_Framework_App_Control_threadId_To_WRITE;
    }
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t* : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        return _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index;
    }
    uint8_t* slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t* : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
        return _stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(threadId) << " :: => bool : stat_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)." << std::endl;
        *_stat_REG_FLAG_SLIF_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = newFLAG;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId, uint8_t concurrentthreadId, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: => std::array<bool, 2> : stat_REG_set_Item_On_Of_SLIF_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(threadId)." << std::endl;
        *temp = new2bitState;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)." << std::endl;
        *temp = newCount;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)." << std::endl;
        *temp = newCount;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        std::cout << "thread " << std::to_string(threadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_WriteWait_Count_For_threadId(threadId)." << std::endl;
        *temp = newCount;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId, uint8_t slotID, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
        std::advance(temp, slotID);
        std::cout << "thread " << std::to_string(threadId) << " :: => uint8_t : stat_REG_set_Item_On_QUE_SLIF_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(threadId)." << std::endl;
        *temp = concurrentthreadId;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = newValue;
    }
    void slif::SLIF_MutexQue_Framework_App_Control::stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= uint8_t : stat_REG_get_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)." << std::endl;
        *_stat_REG_ptr_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = newValue;
    }