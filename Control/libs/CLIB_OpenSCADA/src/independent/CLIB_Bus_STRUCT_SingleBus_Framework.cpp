#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "CLIB_ThreadLogs.h"
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App* slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App;
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global* slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global;
// private.
	slif::CLIB_Bus_STRUCT_SingleBus_Framework::CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework::~CLIB_Bus_STRUCT_SingleBus_Framework() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : ~CLIB_Bus_STRUCT_SingleBus_Framework()."));
		delete stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App;
		delete stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : ~CLIB_Bus_STRUCT_SingleBus_Framework()."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Architecture(std::uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Architecture(sysThreadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId, obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Architecture(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Global_and_Settings(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Global_and_Settings(sysThreadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Global_and_Settings(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_APP_CLIB_Bus_STRUCT_SingleBus_STRUCT_boot1_DEFINE(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_STRUCT_boot1_DEFINE(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_STRUCT_boot1_DEFINE(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_APP_CLIB_Bus_STRUCT_SingleBus_STRUCT_boot3_INITIALISE(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_STRUCT_boot3_INITIALISE(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_APP_CLIB_Bus_STRUCT_SingleBus_STRUCT_boot3_INITIALISE(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App* slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		return pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global* slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
		return stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId, obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App* slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		return pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
	}
// private.
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App = nullptr;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global = nullptr;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App = new class slif::CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId, obj);
		while (pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global = new class slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App* slif::CLIB_Bus_STRUCT_SingleBus_Framework::pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)."));
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App;
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_Global* slif::CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)."));
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global;
	}