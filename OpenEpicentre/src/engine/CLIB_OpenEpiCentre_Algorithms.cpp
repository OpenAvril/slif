#include "../../include/engine/CLIB_OpenEpiCentre_Algorithms.h"
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
    std::list<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::CLIB_OpenEpiCentre_Algorithms()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::~CLIB_OpenEpiCentre_Algorithms()
    {
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentsysThreadId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentsysThreadId);
        return *temp;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(obj);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Algorithm()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(obj, objConcurrent);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_Algorithm()" << std::endl;

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_Algorithm()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent()
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre_Framework* obj)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_OpenEpiCentre_STRUCT_Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent()->resize(static_cast<unsigned long>(3));//NUMBER OF CONCURRENT THREADS.
        for (int concurrentsysThreadId = 0; concurrentsysThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentsysThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentsysThreadId);
            *temp = nullptr;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent)
    {
        for (int concurrentsysThreadId = 0; concurrentsysThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentsysThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentsysThreadId);
            *temp = objConcurrent;
        }
    }
    std::list<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return _stat_REG_ptr_list_Of_ptr_Concurrent;
    }