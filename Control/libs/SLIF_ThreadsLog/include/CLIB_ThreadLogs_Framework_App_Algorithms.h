#ifndef CLIB_slif_CLIB_ThreadLogs_Framework_App_Algorithms_H
#define CLIB_slif_CLIB_ThreadLogs_Framework_App_Algorithms_H
#include <cstdint>
#include <string>
namespace slif {
    class CLIB_ThreadLogs_Framework_App_Algorithms {
    public:
        CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        virtual ~CLIB_ThreadLogs_Framework_App_Algorithms();
        void dyn_APP_FUNCT_slif_printConsoleAndLog(uint8_t* sysThreadId, std::string* message);
        void dyn_APP_FUNCT_slif_printLog(uint8_t* sysThreadId, std::string* message);
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId);
    private:
        void stat_APP_FUNCT_slif_printConsoleAndLog(uint8_t* sysThreadId, std::string* message);
        void stat_APP_FUNCT_slif_printLog(uint8_t* sysThreadId, std::string* message);
    };
}
#endif