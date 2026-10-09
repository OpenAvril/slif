#include "../include/CLIB_MutexQue_Framework_App_Control.h"
#include "../include/CLIB_MutexQue_Framework_App.h"
#include "../include/CLIB_MutexQue_Framework_Global.h"
#include <iostream>
#include <iterator>
#include <thread>
bool* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
    bool* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    bool* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
    bool* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE;
    std::list<unsigned long long>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId;
    std::list<unsigned long long>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId;
    std::list<unsigned long long>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId;
    std::list<uint8_t>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE;
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index;
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index;
// public.
    slif::CLIB_MutexQue_Framework_App_Control::CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    slif::CLIB_MutexQue_Framework_App_Control::~CLIB_MutexQue_Framework_App_Control() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : ~CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        delete stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
        delete stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        delete stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
        delete stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        delete stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE;
        delete stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId;
        delete stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId;
        delete stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId;
        delete stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE;
        delete stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index;
        delete stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : ~CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId,new uint8_t(*obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, coreId) + 1));
        if (*obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, coreId) == *coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)) {

            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicOut(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicOut(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId,new uint8_t(*obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, coreId) + 1));
        if (*obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, coreId) == *coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)) {

            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicOut(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_Activate(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_Activate(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(sysThreadId, coreId, *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_Activate(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj, uint8_t* coreId_A, uint8_t* coreId_B) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId)" << std::endl;
        auto temp_A = new unsigned long long(0);
        temp_A = obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(sysThreadId, coreId_A);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId, coreId_A, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(sysThreadId, coreId_A);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId, coreId_A, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId, coreId_A);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId, coreId_A, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId,coreId_B, temp_A);

        auto temp_B = new uint8_t(0);
        temp_B = obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,coreId_A);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,coreId_A, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, coreId_B));
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId,coreId_B, temp_B);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId)" << std::endl;
        for (uint8_t index_A = 0; index_A < (static_cast<uint8_t>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)) - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < static_cast<uint8_t>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_A)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId))
                {
                    if ((obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_B)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId))
                        || (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_B)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)))
                    {
                        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId,obj, &index_A, &index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_B)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(sysThreadId,&index_A) > obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(sysThreadId, &index_B))
                        {
                            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId,obj, &index_A, &index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_A)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId))
                {
                    if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_B)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(sysThreadId, &index_A) < obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(sysThreadId, &index_B))
                        {
                            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId, obj, &index_A, &index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_A)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId))
                {
                    if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_B)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId))
                    {
                        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId, obj, &index_A, &index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, &index_B)) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId, &index_A) > obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId, &index_B))
                        {
                            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(sysThreadId, obj, &index_A, &index_B);
                        }
                    }
                }
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId)" << std::endl;
        for (uint8_t threadId = 0; threadId < static_cast<uint8_t>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)); threadId++)
        {
            if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, &threadId) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId))
            {
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId, &threadId, 0);
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId, threadId, *obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId, &threadId) + 1);
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId, threadId, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, &threadId) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId))
            {
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId, &threadId, 0);
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId, threadId, 0);
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId, threadId, *obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId, &threadId) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId, &threadId) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId))
            {
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId, &threadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(sysThreadId, &threadId) + 1);
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId, threadId, 0);
                obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId, threadId, 0);
            }
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_ptr_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(sysThreadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId,obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId, obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(sysThreadId, obj);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId, obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId)" << std::endl;
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId);
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId);
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId);
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)" << std::endl;
        return stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId);
    }
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)" << std::endl;
        return stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, coreId);
    }
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)" << std::endl;
        return stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, coreId);
    }
    std::array<bool, 2> slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(uint8_t* sysThreadId, uint8_t* coreId) {
        auto temp = stat_REG_get_ptr_Array_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->begin();
        std::advance(temp, *coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool, 2> : dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(sysThreadId)" << std::endl;
        return *temp;
    }
    unsigned long long* slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId) {
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->begin();
        std::advance(temp, *coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(sysThreadId)" << std::endl;
        return new unsigned long long(*temp);
    }
    unsigned long long* slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId) {
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->begin();
        std::advance(temp, *coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(sysThreadId)" << std::endl;
        return new unsigned long long(*temp);
    }
    unsigned long long* slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId) {
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->begin();
        std::advance(temp, *coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(sysThreadId)" << std::endl;
        return new unsigned long long(*temp);
    }
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t* slotID) {
        auto temp = stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
        std::advance(temp, *slotID);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        return new uint8_t(*temp);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId, FLAGState);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, FLAGState);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId, FLAGState);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId, bool FLAGState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, FLAGState);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(uint8_t* sysThreadId, uint8_t* coreId, std::array<bool, 2> new2bitState) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => std::array<bool, 2> : dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId, *coreId, new2bitState);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId, unsigned long long* newCount) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId, *coreId, *newCount);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId, unsigned long long* newCount) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId, *coreId, *newCount);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId, unsigned long long* newCount){
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId, *coreId, *newCount);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t* slotID, uint8_t* newID){
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : dyn_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        stat_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId, *slotID, *newID);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t* newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        if (*newValue == *slif::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)) {
            *newValue = 0;
        }
        stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(sysThreadId, *newValue);
    }
    void slif::CLIB_MutexQue_Framework_App_Control::dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t* newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        if (*newValue == *slif::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)) {
            *newValue = 0;
        }
        stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, newValue);
    }
// private.
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE(sysThreadId)." << std::endl;
        stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = new bool();
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = new bool();
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = new bool();
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = new bool();
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = true;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        *stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE = {{
            {true, true},
            {true, true },
            {true, true }
        }};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId = new std::list<unsigned long long>();
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->resize(1);
        for (int indexThreadId = 0; indexThreadId < stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->size(); indexThreadId++) {
            auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->begin();
            std::advance(temp, indexThreadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId = new std::list<unsigned long long>();
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->resize(1);
        for (int indexThreadId = 0; indexThreadId < stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->size(); indexThreadId++) {
            auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->begin();
            std::advance(temp, indexThreadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId = new std::list<unsigned long long>();
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->resize(1);
        for (int indexThreadId = 0; indexThreadId < stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->size(); indexThreadId++) {
            auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->begin();
            std::advance(temp, indexThreadId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId)." << std::endl;
        stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE = new std::list<uint8_t>();
        stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->resize(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId));
        for (int indexThreadId = 0; indexThreadId < stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->size(); indexThreadId++) {
            auto temp = stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
            std::advance(temp, indexThreadId);
            *temp = UINT8_MAX;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index = new uint8_t();
        *stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index = UINT8_MAX;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index = new uint8_t();
        *stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index = UINT8_MAX;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = false;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE = {{
            {false, false},
            {false, true},
            {true, false}
        }};
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->resize( static_cast<unsigned long long>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexThreadId = 0; indexThreadId < stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->size(); indexThreadId++) {
            auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->begin();
            std::advance(temp, indexThreadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->resize(static_cast<unsigned long long>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexThreadId = 0; indexThreadId < stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->size(); indexThreadId++) {
            auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->begin();
            std::advance(temp, indexThreadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(sysThreadId)." << std::endl;
        stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->resize( static_cast<unsigned long long>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexThreadId = 0; indexThreadId < stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->size(); indexThreadId++) {
            auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->begin();
            std::advance(temp, indexThreadId);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId)." << std::endl;
        stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->resize( static_cast<int>(*CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)));
        for (int indexThreadId = 0; indexThreadId < stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->size(); indexThreadId++) {
            auto temp = stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
            std::advance(temp, indexThreadId);
            *temp = static_cast<uint8_t>(indexThreadId);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index = 0;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index = 0;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        return stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        return stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        return stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
    }
    bool slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        return stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_Array_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<std::array<bool, 2>*, 3>* : stat_REG_get_ptr_Array_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE;
    }
    unsigned long long slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId)." << std::endl;
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->begin();
        std::advance(temp, *coreId);
        return *temp;
    }
    unsigned long long slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId)." << std::endl;
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->begin();
        std::advance(temp, *coreId);
        return *temp;
    }
    unsigned long long slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<unsigned long long>* : stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId)." << std::endl;
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->begin();
        std::advance(temp, *coreId);
        return *temp;
    }
    std::list<uint8_t>* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<uint8_t>* : stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        return stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE;
    }
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        return stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index;
    }
    uint8_t* slif::CLIB_MutexQue_Framework_App_Control::stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        return stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE = newFLAG;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId, bool newFLAG) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId)." << std::endl;
        *stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING = newFLAG;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_Item_On_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId, uint8_t coreId, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)->begin();
        std::advance(temp, coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => std::array<bool, 2> : stat_REG_set_Item_On_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(sysThreadId)." << std::endl;
        *temp = new2bitState;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t coreId, unsigned long long newCount) {
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId->begin();
        std::advance(temp, coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(sysThreadId)." << std::endl;
        *temp = newCount;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t coreId, unsigned long long newCount) {
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId->begin();
        std::advance(temp, coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        *temp = newCount;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t coreId, unsigned long long newCount) {
        auto temp = stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId->begin();
        std::advance(temp, coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => unsigned long long : stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(sysThreadId)." << std::endl;
        *temp = newCount;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t slotID, uint8_t coreId) {
        auto temp = stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)->begin();
        std::advance(temp, slotID);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: => uint8_t : stat_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(sysThreadId)." << std::endl;
        *temp = coreId;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t* sysThreadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index = newValue;
    }
    void slif::CLIB_MutexQue_Framework_App_Control::stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(uint8_t* sysThreadId, uint8_t newValue) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index = newValue;
    }