#include "../include/CLIB_LaunchQue_Framework.h"
#include "../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <iostream>
#include <thread>
	slif::CLIB_LaunchQue_Framework_App* slif::CLIB_LaunchQue_Framework::stat_CLASS_ptr_CLIB_LaunchQue_Framework_App;
	slif::CLIB_LaunchQue_Framework_Global* slif::CLIB_LaunchQue_Framework::stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global;
// public.
	slif::CLIB_LaunchQue_Framework::CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	slif::CLIB_LaunchQue_Framework::~CLIB_LaunchQue_Framework() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : CLIB_LaunchQue_Framework : ~CLIB_LaunchQue_Framework(sysThreadId)"));
		delete stat_CLASS_ptr_CLIB_LaunchQue_Framework_App;
		delete stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: wq : CLIB_LaunchQue_Framework : ~CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::dyn_CLASS_create_Architecture(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::dyn_CLASS_create_CLIB_LaunchQue_Framework_Global_and_Settings(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	slif::CLIB_LaunchQue_Framework_App* slif::CLIB_LaunchQue_Framework::dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)"));
		return stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId);
	}
	slif::CLIB_LaunchQue_Framework_Global* slif::CLIB_LaunchQue_Framework::dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Globaldyn_CLASS_get_ptr_CLIB_LaunchQue_Framework(sysThreadId)"));
		return stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId);
	}
	void slif::CLIB_LaunchQue_Framework::dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));	}

	void slif::CLIB_LaunchQue_Framework::dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
// private.
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_ptr_CLIB_LaunchQue_Framework_App = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_ptr_CLIB_LaunchQue_Framework_App = new class slif::CLIB_LaunchQue_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	void slif::CLIB_LaunchQue_Framework::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
		stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global = new class slif::CLIB_LaunchQue_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework : boot0_REG_DECLARE_CLIB_LaunchQue_Framework(sysThreadId)"));
	}
	slif::CLIB_LaunchQue_Framework_App* slif::CLIB_LaunchQue_Framework::stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)"));
		return stat_CLASS_ptr_CLIB_LaunchQue_Framework_App;
	}
	slif::CLIB_LaunchQue_Framework_Global* slif::CLIB_LaunchQue_Framework::stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : stat_CLASS_get_ptr_CLIB_LaunchQue_Framework(sysThreadId)"));
		return stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global;
	}