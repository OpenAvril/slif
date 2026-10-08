#ifndef CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_APP_CONTROL_H
#define CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_APP_CONTROL_H
#include "CLIB_MutexQue_Framework.h"
#include <array>
#include <cstdint>
#include <list>
namespace slif {
    class CLIB_MutexQue_Framework_App_Control {
    public:
        CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId);
        ~CLIB_MutexQue_Framework_App_Control();
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj, uint8_t* coreId);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicOut(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj, uint8_t* coreId);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_Activate(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj, uint8_t* coreId);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj, uint8_t* coreId_A, uint8_t* coreId_B);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId);
        uint8_t* dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId);
        uint8_t* dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId);
        std::array<bool, 2>* dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(uint8_t* sysThreadId, uint8_t* coreId);
        unsigned long long* dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId);
        unsigned long long* dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId);
        unsigned long long* dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId);
        uint8_t* dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t* slotID);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId, bool FLAGState);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId, bool FLAGState);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId, bool FLAGState);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId, bool FLAGState);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(uint8_t* sysThreadId, uint8_t* coreId, std::array<bool, 2>* new2bitState);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId, unsigned long long* newCount);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId, unsigned long long* newCount);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId, unsigned long long* newCount);
        void dyn_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t* slotID, uint8_t* newID);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t* newValue);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t* newValue);
    private:
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        static std::array<std::array<bool, 2>*, 3>* stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE;
        static std::list<unsigned long long*>* stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId;
        static std::list<unsigned long long*>* stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId;
        static std::list<unsigned long long*>* stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId;
        static std::list<uint8_t*>* stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE;
        static uint8_t* stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index;
        static uint8_t* stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index;
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(uint8_t* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(uint8_t* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId);
        static std::array<std::array<bool, 2>*, 3>* stat_REG_get_ptr_Array_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId);
        static unsigned long long* stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId);
        static unsigned long long* stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId);
        static unsigned long long* stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* coreId);
        static std::list<uint8_t*>* stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId);
        static uint8_t* stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId);
        static uint8_t* stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(uint8_t* sysThreadId, uint8_t* coreId);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t* sysThreadId, bool newFLAG);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t* sysThreadId, bool newFLAG);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t* sysThreadId, bool newFLAG);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t* sysThreadId, bool newFLAG);
        static void stat_REG_set_Item_On_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t* sysThreadId, uint8_t coreId, std::array<bool, 2>* new2bitState);
        static void stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t coreId, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t coreId, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t coreId, unsigned long long newCount);
        static void stat_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(uint8_t* sysThreadId, uint8_t slotID, uint8_t coreId);
        static void stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t* sysThreadId, uint8_t newValue);
        static void stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(uint8_t* sysThreadId, uint8_t newValue);
    };
}
#endif
