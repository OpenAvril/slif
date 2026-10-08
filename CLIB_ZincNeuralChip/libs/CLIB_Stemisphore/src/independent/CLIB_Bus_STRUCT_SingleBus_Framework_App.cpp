#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.h"
#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
// public.
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId, obj);
		stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::~CLIB_Bus_STRUCT_SingleBus_Framework_App() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()."));
		delete stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
		delete stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		return pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)."));
		return pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId);
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId, obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
// private
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data = new class CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		while(pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId) == nullptr) { }
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute = new class CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId, obj);
		while(pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId) == nullptr) { }
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App::pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)."));
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
	}