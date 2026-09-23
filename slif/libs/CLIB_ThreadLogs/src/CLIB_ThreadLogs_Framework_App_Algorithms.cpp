#include "../include/CLIB_ThreadLogs_Framework_App_Algorithms.h"
#include <iostream>
// public.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::~CLIB_ThreadLogs_Framework_App_Algorithms() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
		std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t threadId, std::string* message)	{
		//std::cout << "thread " << std::to_string(threadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId)." << std::endl;
		stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, message);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_APP_FUNCT_CLIB_ThreadLogs_printLog(uint8_t threadId, std::string* message)	{
		//std::cout << "thread " << std::to_string(threadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_ThreadLogs_printLog(threadId)." << std::endl;
		stat_APP_FUNCT_CLIB_ThreadLogs_printLog(threadId, message);
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t threadId, std::string* message)	{
		//std::cout << "thread " << std::to_string(threadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId)." << std::endl;
		//stat_APP_FUNCT_CLIB_ThreadLogs_printLog(threadId, message);
		std::cout << "thread " << std::to_string(threadId) << *message << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms::stat_APP_FUNCT_CLIB_ThreadLogs_printLog(uint8_t threadId, std::string* message)	{
		std::cout << "thread " << std::to_string(threadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_ThreadLogs_printLog(threadId)." << std::endl;
		//todo log file
	}

