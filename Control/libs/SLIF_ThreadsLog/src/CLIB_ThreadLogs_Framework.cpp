#include "../include/CLIB_ThreadLogs_Framework.h"
#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <iostream>
	slif::CLIB_ThreadLogs_Framework_App* slif::CLIB_ThreadLogs_Framework::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
	slif::CLIB_ThreadLogs_Framework_Global* slif::CLIB_ThreadLogs_Framework::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
// private.
	slif::CLIB_ThreadLogs_Framework::CLIB_ThreadLogs_Framework(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework::~CLIB_ThreadLogs_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : ~CLIB_ThreadLogs_Framework()." << std::endl;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
		std::cout << "thread "  << 0 << ":: exiting LIB :: slif : CLIB_ThreadLogs_Framework : ~CLIB_ThreadLogs_Framework()." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_CLASS_slif_create_Architecture(std::uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_CLASS_slif_create_Architecture(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_CLASS_slif_create_Architecture(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_CLASS_slif_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_CLASS_slif_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_CLASS_slif_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework_App* slif::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId);
	}
	slif::CLIB_ThreadLogs_Framework_Global* slif::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(sysThreadId);
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_APP_slif_stat_STRUCT_boot1_DEFINE(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_APP_slif_stat_STRUCT_boot1_DEFINE(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_APP_slif_stat_STRUCT_boot1_DEFINE(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_APP_slif_stat_STRUCT_boot3_INITIALISE(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_APP_slif_stat_STRUCT_boot3_INITIALISE(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_APP_slif_stat_STRUCT_boot3_INITIALISE(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework_App* slif::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId);
	}
	slif::CLIB_ThreadLogs_Framework_Global* slif::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(sysThreadId);
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework(sysThreadId)." << std::endl;
	}
// private.
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App = nullptr;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global = nullptr;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App = new class slif::CLIB_ThreadLogs_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global = new class slif::CLIB_ThreadLogs_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework_App* slif::CLIB_ThreadLogs_Framework::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
	}
	slif::CLIB_ThreadLogs_Framework_Global* slif::CLIB_ThreadLogs_Framework::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global(sysThreadId)."<< std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
	}