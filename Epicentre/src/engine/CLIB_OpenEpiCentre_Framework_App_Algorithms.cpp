#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Algorithms.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
    std::list<slif::CLIB_OpenEpiCentre_STRUCT_Concurrent*>* slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::CLIB_OpenEpiCentre_Framework_App_Algorithms()
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::~CLIB_OpenEpiCentre_Framework_App_Algorithms()
    {
        delete stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    slif::CLIB_OpenEpiCentre_STRUCT_Concurrent* slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(obj);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent)
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Algorithm()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(obj, objConcurrent);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm()
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm()
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm()
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_Algorithm()" << std::endl;

        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_Algorithm()" << std::endl;
    }
// private.
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent()
    {
        stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre_Framework* obj)
    {
        stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_OpenEpiCentre_STRUCT_Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent()->resize(static_cast<unsigned long>(3));//NUMBER OF CONCURRENT THREADS.
        for (int concurrentThreadId = 0; concurrentThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = nullptr;
        }
    }
    void slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent)
    {
        for (int concurrentThreadId = 0; concurrentThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
        }
    }
    std::list<slif::CLIB_OpenEpiCentre_STRUCT_Concurrent*>* slif::CLIB_OpenEpiCentre_Framework_App_Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return stat_REG_ptr_list_Of_ptr_Concurrent;
    }