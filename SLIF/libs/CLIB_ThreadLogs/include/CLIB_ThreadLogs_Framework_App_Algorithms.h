#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Algorithms_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Algorithms_H
#include <cstdint>
#include <string>
namespace CLIB_ThreadLogs {
    class CLIB_ThreadLogs_Framework_App_Algorithms {
    public:
        CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        virtual ~CLIB_ThreadLogs_Framework_App_Algorithms();
        void dyn_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t threadId, std::string* message);
        void dyn_APP_FUNCT_CLIB_ThreadLogs_printLog(uint8_t threadId, std::string* message);
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId);
    private:
        void stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t threadId, std::string* message);
        void stat_APP_FUNCT_CLIB_ThreadLogs_printLog(uint8_t threadId, std::string* message);
    };
}
#endif