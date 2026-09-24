#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_App(threadId)"));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App(threadId);
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_App(threadId)"));
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::~CLIB_OpenEpiCentre_App() {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Algorithms(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Algorithms(threadId)."));
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(threadId);
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Data(threadId)."));
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(threadId);
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Execute(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_Execute(threadId)."));
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(threadId);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_App(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_App(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_AppApp(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_App(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_App(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_App(threadId)"));
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_App(threadId)"));
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_App(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_App(threadId)"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot0_DECLARE_App(threadId)"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_App(threadId)"));
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms(uint8_t* threadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(uint8_t* threadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms(uint8_t* threadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms(threadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(threadId) == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data(threadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(threadId) == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(uint8_t* threadId) {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute(threadId);
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(threadId) == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms(threadId)."));
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data(threadId)."));
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(uint8_t* threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute(threadId)."));
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
    }