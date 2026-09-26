#include "../include/SLIF_LaunchQue_Framework.h"
#include <iostream>
#include <thread>
slif::SLIF_LaunchQue_Framework_App* slif::SLIF_LaunchQue_Framework::_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App;
	slif::SLIF_LaunchQue_Framework_Global* slif::SLIF_LaunchQue_Framework::_stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global;
// public.
	slif::SLIF_LaunchQue_Framework::SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	slif::SLIF_LaunchQue_Framework::~SLIF_LaunchQue_Framework() {
		std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework : ~SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		delete _stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App;
		delete _stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global;
		std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : SLIF_LaunchQue_Framework : ~SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::dyn_CLASS_create_Architecture(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::dyn_CLASS_create_SLIF_LaunchQue_Framework_Global_and_Settings(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Global(sysThreadId);
		pr_stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	slif::SLIF_LaunchQue_Framework_App* slif::SLIF_LaunchQue_Framework::dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
		return stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId);
	}
	slif::SLIF_LaunchQue_Framework_Global* slif::SLIF_LaunchQue_Framework::dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Globaldyn_CLASS_get_ptr_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		return stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId);
	}
	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;	}

	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
// private.
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Global(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		_stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App = new class slif::SLIF_LaunchQue_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	void slif::SLIF_LaunchQue_Framework::pr_stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		_stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global = new class slif::SLIF_LaunchQue_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
	}
	slif::SLIF_LaunchQue_Framework_App* slif::SLIF_LaunchQue_Framework::stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
		return _stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App;
	}
	slif::SLIF_LaunchQue_Framework_Global* slif::SLIF_LaunchQue_Framework::stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : stat_CLASS_get_ptr_SLIF_LaunchQue_Framework(sysThreadId)" << std::endl;
		return _stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global;
	}