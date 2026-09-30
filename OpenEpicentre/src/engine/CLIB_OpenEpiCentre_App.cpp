#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_App(sysThreadId)" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App(sysThreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_App(sysThreadId)" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::~CLIB_OpenEpiCentre_App() {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Algorithms(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Algorithms(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(sysThreadId);
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Data(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Data(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(sysThreadId);
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Execute(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Execute(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(sysThreadId);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_App(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_AppApp(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_App(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_App(sysThreadId)" << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(sysThreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_App(sysThreadId)" << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(sysThreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_App(sysThreadId)" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_App(sysThreadId)" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(sysThreadId) == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(sysThreadId) == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(uint8_t* sysThreadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(sysThreadId) == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(sysThreadId)." << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(sysThreadId)." << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(uint8_t* sysThreadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(sysThreadId)." << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
    }