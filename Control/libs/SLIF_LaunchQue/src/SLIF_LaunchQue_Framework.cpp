#include "../include/SLIF_LaunchQue_Framework.h"
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
#include <thread>
slif::SLIF_LaunchQue_Framework_App* slif::SLIF_LaunchQue_Framework::_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App;
	slif::SLIF_LaunchQue_Framework_Global* slif::SLIF_LaunchQue_Framework::_stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global;
// public.
	slif::SLIF_LaunchQue_Framework::SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : SLIF_LaunchQue_Framework(threadId)"));
		stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework(threadId);
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : SLIF_LaunchQue_Framework(threadId)"));
	}
	slif::SLIF_LaunchQue_Framework::~SLIF_LaunchQue_Framework() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : ~SLIF_LaunchQue_Framework(threadId)"));
		delete _stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App;
		delete _stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : ~SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::dyn_CLASS_create_Architecture(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework(threadId);
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::dyn_CLASS_create_SLIF_LaunchQue_Framework_Global_and_Settings(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Global(threadId);
		pr_stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId);
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	slif::SLIF_LaunchQue_Framework_App* slif::SLIF_LaunchQue_Framework::dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)"));
		return stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId);
	}
	slif::SLIF_LaunchQue_Framework_Global* slif::SLIF_LaunchQue_Framework::dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Globaldyn_CLASS_get_ptr_SLIF_LaunchQue_Framework(threadId)"));
		return stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId);
	}
	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot0_DECLARE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));	}

	void slif::SLIF_LaunchQue_Framework::dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot0_DECLARE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(threadId);
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(threadId);
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::stat_REG_boot0_DECLARE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
// private.
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App = nullptr;
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId)	{
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		_stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global = nullptr;
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		_stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App = new class slif::SLIF_LaunchQue_Framework_App(threadId);
		while (stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId) == nullptr) {}
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	void slif::SLIF_LaunchQue_Framework::pr_stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
		_stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global = new class slif::SLIF_LaunchQue_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId) == nullptr) {}
		slif::ThreadLogs::printl(threadId, new std::string(" :: exiting LIB :: wq : SLIF_LaunchQue_Framework : boot0_REG_DECLARE_SLIF_LaunchQue_Framework(threadId)"));
	}
	slif::SLIF_LaunchQue_Framework_App* slif::SLIF_LaunchQue_Framework::stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(uint8_t* threadId)	{
		slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)"));
		return _stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_App;
	}
	slif::SLIF_LaunchQue_Framework_Global* slif::SLIF_LaunchQue_Framework::stat_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(uint8_t* threadId) {
		slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : stat_CLASS_get_ptr_SLIF_LaunchQue_Framework(threadId)"));
		return _stat_CLASS_ptr_SLIF_LaunchQue_Framework_Global;
	}