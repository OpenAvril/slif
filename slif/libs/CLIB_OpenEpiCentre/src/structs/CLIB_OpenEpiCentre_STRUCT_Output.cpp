#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_Output.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include <cstdint>
#include <iostream>
#include <list>
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::_REG_ptr_OpenEpiCentre_STRUCT_Output_playerId;
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::_REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::_REG_ptr_OpenEpiCentre_STRUCT_Output_Subset;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Output_Subset(CLIB_OpenEpiCentre_Framework* obj, unsigned long long praiseEventId) {
        switch (praiseEventId) {
            case 0:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 1:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise1*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 2:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise2*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 3:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise3*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            default:
                break;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output()"));
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_playerId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_Subset();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output()"));
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_playerId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_Subset();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output()"));
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_playerId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_Subset(obj);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output()"));
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_playerId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_playerId();
    }
    unsigned long long CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId();
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->begin();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Output_playerId(uint8_t newPlayerId) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_playerId() = newPlayerId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(unsigned long long new_unsignedLongLong) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId() = new_unsignedLongLong;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT_Output_praise0* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT_Output_praise1* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT_Output_praise2* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT_Output_praise3* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Output()"));
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_playerId() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_playerId()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_playerId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_playerId()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_Subset() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_Subset()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_Subset = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Output_Subset()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_playerId() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_playerId()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_playerId = new uint8_t();
        *_REG_ptr_OpenEpiCentre_STRUCT_Output_playerId = static_cast<uint8_t>(255);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_playerId()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId = new unsigned long long();
        *_REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId = ULONG_LONG_MAX;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_Subset() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_Subset()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_Subset = new std::list<Object*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset() == nullptr) { }
        stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->resize(1);
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()->begin() = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Output_Subset()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_playerId() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_playerId()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_playerId = static_cast<uint8_t*>(0);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_playerId()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId = static_cast<unsigned long long*>(0);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_Subset(CLIB_OpenEpiCentre_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_Subset()"));
        _REG_ptr_OpenEpiCentre_STRUCT_Output_Subset->assign(0, obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(0));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Output_Subset()"));
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_playerId() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Output_playerId;
    }
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Output_praiseEventId;
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Output_Subset;
    }