#include "../include/CLIB_SystemBus_Framework_App.h"
#include "../../../include/CLIB_ThreadLogs.h"
	slif::CLIB_SystemBus_Framework_App_Execute* slif::CLIB_SystemBus_Framework_App::stat_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute;
// public.
	slif::CLIB_SystemBus_Framework_App::CLIB_SystemBus_Framework_App(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : CLIB_SystemBus_Framework_App(sysThreadId)."));
		stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_App(sysThreadId);
		stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	slif::CLIB_SystemBus_Framework_App::~CLIB_SystemBus_Framework_App() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : ~CLIB_SystemBus_Framework_App()."));
		delete stat_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : ~CLIB_SystemBus_Framework_App()."));
	}
	void slif::CLIB_SystemBus_Framework_App::dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_SystemBus_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_SystemBus_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_SystemBus_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	slif::CLIB_SystemBus_Framework_App_Execute* slif::CLIB_SystemBus_Framework_App::dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)."));
		return stat_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId);
	}
	void slif::CLIB_SystemBus_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_SystemBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_SystemBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_SystemBus_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_App(sysThreadId)."));
	}
// private
	void slif::CLIB_SystemBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App_Execute(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App_Execute(sysThreadId)."));
		stat_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_SystemBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App_Execute(sysThreadId)."));
	}
	slif::CLIB_SystemBus_Framework_App_Execute* slif::CLIB_SystemBus_Framework_App::stat_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)."));
		return stat_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute;
	}