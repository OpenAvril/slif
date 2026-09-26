#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include <iostream>
	slif::CLIB_ThreadLogs_Framework_App_Algorithms* slif::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	slif::CLIB_ThreadLogs_Framework_App_Execute* slif::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
// public.
	slif::CLIB_ThreadLogs_Framework_App::CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId);
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework_App::~CLIB_ThreadLogs_Framework_App() {
		std::cout << "thread "  << 0 << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
		std::cout << "thread "  << 0 << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework_App_Algorithms* slif::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
	}
	slif::CLIB_ThreadLogs_Framework_App_Execute* slif::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId);
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(sysThreadId)." << std::endl;
	}
// private
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = new class CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		while(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId) == nullptr) { }
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute = new class CLIB_ThreadLogs_Framework_App_Execute(sysThreadId);
		while(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId) == nullptr) { }
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)." << std::endl;
	}
	slif::CLIB_ThreadLogs_Framework_App_Algorithms* slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	}
	slif::CLIB_ThreadLogs_Framework_App_Execute* slif::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
	}