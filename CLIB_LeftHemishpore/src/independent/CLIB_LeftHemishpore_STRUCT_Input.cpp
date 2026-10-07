#include "../../include/independent/CLIB_LeftHemishpore_STRUCT_Input.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Data.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
#include <cstdint>
#include <list>
    uint8_t* slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId;
    unsigned long long* slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId;
    std::list<slif::Object*>* slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset;
// public.
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj, unsigned long long* praiseEventId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
        switch (*praiseEventId) {
            case 0:
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise0*>(obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 1:
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise1*>(obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 2:
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise2*>(obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 3:
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise3*>(obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            default:
                break;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId, obj);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    uint8_t* slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        return stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId);
    }
    unsigned long long* slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long* : dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        return stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId);
    }
    slif::Object* slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= slif::Object* : dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
        return *stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin();
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId, uint8_t* newPlayerId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => uint8_t : dyn_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        stat_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId, *newPlayerId);
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId, unsigned long long* new_unsignedLongLong) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => unsigned long long : dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        stat_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId, *new_unsignedLongLong);
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(uint8_t* sysThreadId, CLIB_LeftHemishpore_STRUCT_Input_praise0* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => class* : dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId). "));
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(uint8_t* sysThreadId, CLIB_LeftHemishpore_STRUCT_Input_praise1* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => class* : dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId). "));
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(uint8_t* sysThreadId, CLIB_LeftHemishpore_STRUCT_Input_praise2* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => class* : dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId). "));
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(uint8_t* sysThreadId, CLIB_LeftHemishpore_STRUCT_Input_praise3* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(sysThreadId). "));
    }
// private.
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_Subset(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = new uint8_t();
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = static_cast<uint8_t>(255);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = new unsigned long long();
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = ULONG_LONG_MAX;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_Subset(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset = new std::list<Object*>();
        while (stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId) == nullptr) { }
        stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->resize(1);
        *stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin() = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = static_cast<uint8_t*>(0);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = static_cast<unsigned long long*>(0);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_Subset(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset->assign(0, obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(0));
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
    }
    uint8_t* slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        return stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId;
    }
    unsigned long long* slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= unsigned long long* : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        return stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId;
    }
    std::list<slif::Object*>* slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= std::list<slif::Object*>* : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId). "));
        return stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset;
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(uint8_t* sysThreadId, uint8_t newPlayerId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => uint8_t : stat_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId). "));
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = newPlayerId;
    }
    void slif::CLIB_LeftHemishpore_STRUCT_Input::stat_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(uint8_t* sysThreadId, unsigned long long new_unsignedLongLong) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => unsigned long long : stat_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId). "));
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = new_unsignedLongLong;
    }