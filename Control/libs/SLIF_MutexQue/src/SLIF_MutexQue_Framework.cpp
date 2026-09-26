#include "../include/SLIF_MutexQue_Framework.h"
#include <iostream>
	slif::SLIF_MutexQue_Framework_App* slif::SLIF_MutexQue_Framework::_stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
	slif::SLIF_MutexQue_Framework_Global* slif::SLIF_MutexQue_Framework::_stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
// public.
	slif::SLIF_MutexQue_Framework::SLIF_MutexQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
	}
	slif::SLIF_MutexQue_Framework::~SLIF_MutexQue_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
		delete _stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
		delete _stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
		std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::dyn_CLASS_create_SLIF_MutexQue_Architecture(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Architecture(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Architecture(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(uint8_t* sysThreadId)
	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(sysThreadId)." << std::endl;
	}
	slif::SLIF_MutexQue_Framework_App* slif::SLIF_MutexQue_Framework::dyn_CLASS_get_ptr_SLIF_MutexQue_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId);
	}
	slif::SLIF_MutexQue_Framework_Global* slif::SLIF_MutexQue_Framework::dyn_CLASS_get_ptr_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId);
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId);
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
	}
// private.
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId)." << std::endl;
		_stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_SLIF_MutexQue_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId)." << std::endl;
		_stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App = new class slif::SLIF_MutexQue_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_SLIF_MutexQue_Framework_Global = new class slif::SLIF_MutexQue_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
	}
	slif::SLIF_MutexQue_Framework_App* slif::SLIF_MutexQue_Framework::stat_CLASS_get_ptr_SLIF_MutexQue_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)." << std::endl;
		return _stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
	}
	slif::SLIF_MutexQue_Framework_Global* slif::SLIF_MutexQue_Framework::stat_CLASS_get_ptr_SLIF_MutexQue_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
	}