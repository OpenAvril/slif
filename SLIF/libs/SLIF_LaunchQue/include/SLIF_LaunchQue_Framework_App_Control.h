#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_SLIF_LaunchQue_Framework_App_Control_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_SLIF_LaunchQue_Framework_App_Control_H
#include <cstdint>
#include <list>
namespace slif {
    class SLIF_LaunchQue_Framework_App_Control {
    public:
        SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
        virtual ~SLIF_LaunchQue_Framework_App_Control();
        void dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(uint8_t threadId, class SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads);
        void dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(uint8_t threadId, class SLIF_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads);
        void dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId, class SLIF_LaunchQue_Framework* obj);
        void dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
        unsigned long long dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId, uint8_t concurrentThreadId);
        unsigned long long dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId, uint8_t concurrentThreadId);
        bool dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentThreadId);
        uint8_t dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t concurrentThreadId);
        void dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId, uint8_t concurrentThreadId, unsigned long long newValue);
        void dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId, uint8_t concurrentThreadId, unsigned long long newValue);
        void dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentThreadId, bool newState);
        void dyn_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t slot, uint8_t concurrentThreadId);
        static void stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework_App_Control(uint8_t threadId);
    private:
        static std::list<unsigned long long>* _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadID;
        static std::list<unsigned long long>* _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadID;
        static std::list<bool>* _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* _stat_REG_SLIF_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        void dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(uint8_t threadId, class SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId_A, uint8_t concurrentThreadId_B);
        static void stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId, class SLIF_LaunchQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId, class SLIF_LaunchQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, class SLIF_LaunchQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId, class SLIF_LaunchQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_SLIF_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId);
        static std::list<unsigned long long>* stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId);
        static std::list<unsigned long long>* stat_REG_get_SLIF_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId);
        static std::list<bool>* stat_REG_get_SLIF_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId);
        static std::list<uint8_t>* stat_REG_get_SLIF_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(uint8_t threadId);
        static void stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadId, uint8_t concurrentThreadId, unsigned long long newValue);
        static void stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadId, uint8_t concurrentThreadId, unsigned long long newValue);
        static void stat_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentThreadId, bool newState);
        static void stat_REG_set_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t slot, uint8_t concurrentThreadId);
    };
}
#endif