#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_Input.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Data.h"
#include <cstdint>
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
#include <list>
    uint8_t* slif::CLIB_OpenEpiCentre_STRUCT_Input::_REG_ptr_OpenEpiCentre_STRUCT_Input_playerId;
    unsigned long long* slif::CLIB_OpenEpiCentre_STRUCT_Input::_REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId;
    std::list<slif::Object*>* slif::CLIB_OpenEpiCentre_STRUCT_Input::_REG_ptr_OpenEpiCentre_STRUCT_Input_Subset;
// public.
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_Framework* obj, unsigned long long praiseEventId) {
        switch (praiseEventId) {
            case 0:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 1:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 2:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 3:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            default:
                break;
        }
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input()" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset();
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset();
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(slif::CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset(obj);
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    uint8_t slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
    }
    unsigned long long slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
    }
    slif::Object* slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Input_playerId(uint8_t newPlayerId) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId() = newPlayerId;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(unsigned long long new_unsignedLongLong) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() = new_unsignedLongLong;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise0* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise1* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise2* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise3* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<slif::Object*>(objInputSubset);
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
// private.
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = nullptr;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = nullptr;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset = nullptr;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = new uint8_t();
        *_REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = static_cast<uint8_t>(255);
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = new unsigned long long();
        *_REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = ULONG_LONG_MAX;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset = new std::list<Object*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset() == nullptr) { }
        stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->resize(1);
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin() = nullptr;
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = static_cast<uint8_t*>(0);
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = static_cast<unsigned long long*>(0);
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset->assign(0, obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(0));
        slif::ThreadLogs::printl(*sysThreadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
    }
    uint8_t* slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId;
    }
    unsigned long long* slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId;
    }
    std::list<slif::Object*>* slif::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset;
    }