#include "../include/CLIB_ThreadLogs.h"
#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include "../libs/CLIB_WriteQueForThreadsAt_LoggingThread/include/LaunchQue_ClusterAccess.h"
#include <array>
#include <cstdint>
#include <iostream>
	static CLIB_ThreadLogs::CLIB_ThreadLogs_Framework* _stat_REG_CLIB_ThreadLogs_Framework;
	static std::array<bool, 4>* _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
	static const uint8_t* dataClusterId = new uint8_t(0);
// public.
	void* slif::ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(uint8_t* threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		void* result = nullptr;
		slif::LaunchQueMutex::lock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(threadId)." << std::endl;
		
		std::cout << "thread " << std::to_string(*threadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_CLIB_ThreadLogs_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(threadId);
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId);
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global(threadId);
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
				std::cout << "thread " << std::to_string(*threadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_CLIB_ThreadLogs_create_Architecture(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		std::cout << "thread " << std::to_string(*threadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		//stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(threadId)->;
		std::cout << "thread " << std::to_string(*threadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |      OpenAvril : ThreadLogs        |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(threadId)." << std::endl;
		result = static_cast<void*>(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId));
		slif::LaunchQueMutex::unlock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
		return result;
	}
	unsigned char* slif::ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(uint8_t* threadId) {
		unsigned char* result = nullptr;
		slif::LaunchQueMutex::lock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(threadId)." << std::endl;
		bool* resultA = nullptr;
		resultA = new bool(threadId);
		*resultA = true;
		if (!stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0)) {
			*resultA = stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0);
		}
		else {
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(1) = !stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0);
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		}
		result = CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbBoolean_To_MsbByteArray(threadId, *resultA);
		std::cout << "thread " << std::to_string(*threadId) << " ::  exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(threadId)." << std::endl;
		slif::LaunchQueMutex::unlock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
		return result;
	}
	void slif::ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t* threadId, std::string* stringForLogPrint) {
		slif::LaunchQueMutex::lock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId)." << std::endl;
		if (!stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0)) {
			stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, stringForLogPrint);
		}
		else {
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(2) = !stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0);
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId)." << std::endl;
		slif::LaunchQueMutex::unlock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
	}
	void slif::ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(uint8_t* threadId) {
		slif::LaunchQueMutex::lock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(threadId)." << std::endl;
		if (!stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0)) {
			delete _stat_REG_CLIB_ThreadLogs_Framework;
			delete _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(3) = !stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(2);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(threadId)." << std::endl;
		slif::LaunchQueMutex::unlock(threadId, *dataClusterId, CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, threadId));
	}
// private.
	void slif::ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
		stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < static_cast<uint8_t>(stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->size()); memberFunctionId++) {
			if (stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(memberFunctionId)) stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0) = stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
	}
	void slif::ThreadLogs::pr_stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(uint8_t* threadId, std::string* stringForLogPrint) {
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)->dyn_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, stringForLogPrint);
	}
	void slif::ThreadLogs::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		_stat_REG_CLIB_ThreadLogs_Framework = nullptr;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void slif::ThreadLogs::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		_stat_REG_CLIB_ThreadLogs_Framework = new class CLIB_ThreadLogs_Framework(threadId);
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework* slif::ThreadLogs::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(uint8_t* threadId) {
		return _stat_REG_CLIB_ThreadLogs_Framework;
	}
	void slif::ThreadLogs::stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
		_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
	}
	void slif::ThreadLogs::stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
		_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId) == nullptr) {}
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->size()); index++)	{
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
	}
	void slif::ThreadLogs::stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->size()); index++)	{
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
	}
	std::array<bool, 4>*  slif::ThreadLogs::stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: <= std::array<bool, 4>* : stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t* threadId) = " << _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED << std::endl;
		return _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
	}

