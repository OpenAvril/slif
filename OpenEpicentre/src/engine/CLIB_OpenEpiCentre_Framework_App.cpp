#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
    slif::CLIB_OpenEpiCentre_Framework_App_Algorithms* slif::CLIB_OpenEpiCentre_Framework_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms;
    slif::CLIB_OpenEpiCentre_Framework_App_Data* slif::CLIB_OpenEpiCentre_Framework_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data;
    slif::CLIB_OpenEpiCentre_Framework_App_Execute* slif::CLIB_OpenEpiCentre_Framework_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Execute;
// public.
    slif::CLIB_OpenEpiCentre_Framework_App::CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_Framework_App(sysThreadId)" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Framework_App(sysThreadId)" << std::endl;
    }
    slif::CLIB_OpenEpiCentre_Framework_App::~CLIB_OpenEpiCentre_Framework_App() {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Execute;
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Algorithms* slif::CLIB_OpenEpiCentre_Framework_App::dyn_CLASS_get_ptr_Algorithms(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Algorithms(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms(sysThreadId);
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Data* slif::CLIB_OpenEpiCentre_Framework_App::dyn_CLASS_get_ptr_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Data(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Execute* slif::CLIB_OpenEpiCentre_Framework_App::dyn_CLASS_get_ptr_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Execute(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute(sysThreadId);
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_App(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_AppApp(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_App(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_App(sysThreadId)" << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Algorithms(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_App(sysThreadId)" << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Algorithms(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_App(sysThreadId)" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_App(sysThreadId)" << std::endl;
    }
// private.
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Algorithms(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms = nullptr;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data = nullptr;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Execute = nullptr;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Algorithms(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms = new class slif::CLIB_OpenEpiCentre_Framework_App_Algorithms(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms(sysThreadId) == nullptr) {}
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data = new class slif::CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId) == nullptr) {}
    }
    void slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Execute = new class slif::CLIB_OpenEpiCentre_Framework_App_Execute(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute(sysThreadId) == nullptr) {}
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Algorithms* slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms(sysThreadId)." << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Algorithms;
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Data* slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data(sysThreadId)." << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Data;
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Execute* slif::CLIB_OpenEpiCentre_Framework_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute(sysThreadId)." << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App_Execute;
    }