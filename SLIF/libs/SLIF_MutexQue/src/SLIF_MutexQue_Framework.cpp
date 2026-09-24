#include "../include/SLIF_MutexQue_Framework.h"
#include <iostream>
	slif::SLIF_MutexQue_Framework_App* slif::SLIF_MutexQue_Framework::_stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
	slif::SLIF_MutexQue_Framework_Global* slif::SLIF_MutexQue_Framework::_stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
// public.
	slif::SLIF_MutexQue_Framework::SLIF_MutexQue_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(threadId)." << std::endl;
	}
	slif::SLIF_MutexQue_Framework::~SLIF_MutexQue_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
		delete _stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
		std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : SLIF_MutexQue_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::dyn_CLASS_create_SLIF_MutexQue_Architecture(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Architecture(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(uint8_t* threadId)
	{
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(threadId);
		stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(threadId)." << std::endl;
	}
	slif::SLIF_MutexQue_Framework_App* slif::SLIF_MutexQue_Framework::dyn_CLASS_get_ptr_SLIF_MutexQue_App(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: <= class : dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_SLIF_MutexQue_App(threadId);
	}
	slif::SLIF_MutexQue_Framework_Global* slif::SLIF_MutexQue_Framework::dyn_CLASS_get_ptr_SLIF_MutexQue_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: <= class : dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_SLIF_MutexQue_Global(threadId);
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(threadId);
		stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(threadId)." << std::endl;
	}
// private.
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_SLIF_MutexQue_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_Global(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* threadId)	{
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App = new class slif::SLIF_MutexQue_Framework_App(threadId);
		while (stat_CLASS_get_ptr_SLIF_MutexQue_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App(threadId)." << std::endl;
	}
	void slif::SLIF_MutexQue_Framework::pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework : pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_SLIF_MutexQue_Framework_Global = new class slif::SLIF_MutexQue_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_SLIF_MutexQue_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework : pr_stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_Global(threadId)." << std::endl;
	}
	slif::SLIF_MutexQue_Framework_App* slif::SLIF_MutexQue_Framework::stat_CLASS_get_ptr_SLIF_MutexQue_App(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: <= class : stat_CLASS_get_ptr_SLIF_MutexQue_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_SLIF_MutexQue_Framework_App;
	}
	slif::SLIF_MutexQue_Framework_Global* slif::SLIF_MutexQue_Framework::stat_CLASS_get_ptr_SLIF_MutexQue_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: <= class : stat_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_SLIF_MutexQue_Framework_Global;
	}