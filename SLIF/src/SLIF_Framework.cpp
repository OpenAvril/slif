#include "../include/SLIF_Framework.h"
#include <iostream>
#include <thread>
	slif::SLIF_Framework_Global* slif::SLIF_Framework::_stat_CLASS_ptr_slif_Framework_Global;
// public.
	slif::SLIF_Framework::SLIF_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : slif_Framework(threadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_slif_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : slif_Framework(threadId)." << std::endl;
	}
	slif::SLIF_Framework::~SLIF_Framework() {
		std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework : ~slif_Framework(threadId)." << std::endl;
		delete _stat_CLASS_ptr_slif_Framework_Global;
		std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : slif_Framework : ~slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::dyn_CLASS_create_Architecture(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_slif_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_slif_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::dyn_CLASS_create_slif_Framework_Global_and_Settings(uint8_t* threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_slif_Framework_Global(threadId);
		pr_stat_CLASS_boot3_INITIALISE_slif_Framework_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	slif::SLIF_Framework_Global* slif::SLIF_Framework::dyn_CLASS_get_ptr_slif_Framework_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_boot3_INITIALISE_slif_Framework_Globaldyn_CLASS_get_ptr_slif_Framework(threadId)." << std::endl;
		return stat_CLASS_get_ptr_slif_Framework_Global(threadId);
	}
	void slif::SLIF_Framework::dyn_REG_boot0_DECLARE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::dyn_REG_boot1_DEFINE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::dyn_REG_boot2_SUBSTANTIATE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;	}

	void slif::SLIF_Framework::dyn_REG_boot3_INITIALISE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::stat_CLASS_boot0_DECLARE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::stat_CLASS_boot1_DEFINE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::stat_CLASS_boot3_INITIALISE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::stat_REG_boot0_DECLARE_slif_Framework(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
// private.
	void slif::SLIF_Framework::stat_CLASS_boot1_DEFINE_slif_Framework_Global(uint8_t* threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		_stat_CLASS_ptr_slif_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	void slif::SLIF_Framework::pr_stat_CLASS_boot3_INITIALISE_slif_Framework_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
		_stat_CLASS_ptr_slif_Framework_Global = new class slif::SLIF_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_slif_Framework_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : slif_Framework : boot0_REG_DECLARE_slif_Framework(threadId)." << std::endl;
	}
	slif::SLIF_Framework_Global* slif::SLIF_Framework::stat_CLASS_get_ptr_slif_Framework_Global(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_slif_Framework(threadId)." << std::endl;
		return _stat_CLASS_ptr_slif_Framework_Global;
	}