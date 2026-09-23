#include "../include/CLIB_ThreadLogs_Framework.h"
#include <iostream>
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
// private.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::CLIB_ThreadLogs_Framework(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::~CLIB_ThreadLogs_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : ~CLIB_ThreadLogs_Framework()." << std::endl;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
		std::cout << "thread "  << 0 << ":: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : ~CLIB_ThreadLogs_Framework()." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_CLIB_ThreadLogs_create_Architecture(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_CLASS_CLIB_ThreadLogs_create_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_CLASS_CLIB_ThreadLogs_create_Architecture(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_CLIB_ThreadLogs_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_CLASS_CLIB_ThreadLogs_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_CLASS_CLIB_ThreadLogs_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId);
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(threadId);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot1_DEFINE(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot1_DEFINE(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot1_DEFINE(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot3_INITIALISE(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot3_INITIALISE(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot3_INITIALISE(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId);
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(threadId);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App = nullptr;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global = nullptr;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App = new class CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global = new class CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(threadId)."<< std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
	}