#include "../include/slif_LaunchQue_Framework.h"
#include <iostream>
#include <thread>
slif::slif_LaunchQue_Framework_App* slif::slif_LaunchQue_Framework::_stat_CLASS_get_ptr_slif_LaunchQue_Framework_App;
	slif::slif_LaunchQue_Framework_Global* slif::slif_LaunchQue_Framework::_stat_CLASS_ptr_slif_LaunchQue_Framework_Global;
// public.
	slif::slif_LaunchQue_Framework::slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : slif_LaunchQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	slif::slif_LaunchQue_Framework::~slif_LaunchQue_Framework() {
		std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_LaunchQue_Framework : ~slif_LaunchQue_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_slif_LaunchQue_Framework_App;
		delete _stat_CLASS_ptr_slif_LaunchQue_Framework_Global;
		std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : ~slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::dyn_CLASS_create_Architecture(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::dyn_CLASS_create_slif_LaunchQue_Framework_Global_and_Settings(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Global(threadId);
		pr_stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	slif::slif_LaunchQue_Framework_App* slif::slif_LaunchQue_Framework::dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId);
	}
	slif::slif_LaunchQue_Framework_Global* slif::slif_LaunchQue_Framework::dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Globaldyn_CLASS_get_ptr_slif_LaunchQue_Framework(threadId)." << std::endl;
		return stat_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId);
	}
	void slif::slif_LaunchQue_Framework::dyn_REG_boot0_DECLARE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;	}

	void slif::slif_LaunchQue_Framework::dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::stat_CLASS_boot0_DECLARE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_App(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_App(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::stat_REG_boot0_DECLARE_slif_LaunchQue_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
// private.
	void slif::slif_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		_stat_CLASS_get_ptr_slif_LaunchQue_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_slif_LaunchQue_Framework_Global(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		_stat_CLASS_ptr_slif_LaunchQue_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		_stat_CLASS_get_ptr_slif_LaunchQue_Framework_App = new class slif::slif_LaunchQue_Framework_App(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		while (stat_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	void slif::slif_LaunchQue_Framework::pr_stat_CLASS_boot3_INITIALISE_slif_LaunchQue_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
		_stat_CLASS_ptr_slif_LaunchQue_Framework_Global = new class slif::slif_LaunchQue_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_LaunchQue_Framework : boot0_REG_DECLARE_slif_LaunchQue_Framework(threadId)." << std::endl;
	}
	slif::slif_LaunchQue_Framework_App* slif::slif_LaunchQue_Framework::stat_CLASS_get_ptr_slif_LaunchQue_Framework_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_slif_LaunchQue_Framework_App;
	}
	slif::slif_LaunchQue_Framework_Global* slif::slif_LaunchQue_Framework::stat_CLASS_get_ptr_slif_LaunchQue_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_slif_LaunchQue_Framework(threadId)." << std::endl;
		return _stat_CLASS_ptr_slif_LaunchQue_Framework_Global;
	}