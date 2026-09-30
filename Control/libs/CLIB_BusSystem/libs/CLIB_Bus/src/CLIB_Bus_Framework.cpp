#include "../include/CLIB_Bus_Framework.h"
#include "../include/CLIB_Bus_Framework_App.h"
#include "../include/CLIB_Bus_Framework_Global.h"
#include <iostream>
	slif::CLIB_Bus_Framework_App* slif::CLIB_Bus_Framework::stat_CLASS_ptr_CLIB_Bus_Framework_App;
	slif::CLIB_Bus_Framework_Global* slif::CLIB_Bus_Framework::stat_CLASS_ptr_CLIB_Bus_Framework_Global;
	struct slif::CLIB_Bus_STRUCT_Bus* slif::CLIB_Bus_Framework::stat_CLASS_ptr_CLIB_Bus_STRUCT_Bus;
// private.
	slif::CLIB_Bus_Framework::CLIB_Bus_Framework(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_Bus_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_Framework::~CLIB_Bus_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: slif : CLIB_Bus_Framework : ~CLIB_Bus_Framework()." << std::endl;
		delete stat_CLASS_ptr_CLIB_Bus_Framework_App;
		delete stat_CLASS_ptr_CLIB_Bus_Framework_Global;
		std::cout << "thread "  << 0 << ":: exiting LIB :: slif : CLIB_Bus_Framework : ~CLIB_Bus_Framework()." << std::endl;
	}
	void slif::CLIB_Bus_Framework::dyn_APP_CLIB_Bus_Framework_create_Architecture(std::uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_Framework_create_Architecture(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_Framework_create_Architecture(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::dyn_APP_CLIB_Bus_Framework_create_Global_and_Settings(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_Framework_create_Global_and_Settings(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_Framework_create_Global_and_Settings(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::dyn_APP_CLIB_Bus_STRUCT_boot1_DEFINE(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_STRUCT_boot1_DEFINE(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_Bus_STRUCT_Bus(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_STRUCT_boot1_DEFINE(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::dyn_APP_CLIB_Bus_STRUCT_boot3_INITIALISE(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_STRUCT_boot3_INITIALISE(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_Bus_STRUCT_Bus(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_APP_CLIB_Bus_STRUCT_boot3_INITIALISE(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_Framework_App* slif::CLIB_Bus_Framework::dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId);
	}
	slif::CLIB_Bus_Framework_Global* slif::CLIB_Bus_Framework::dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId);
	}
	slif::CLIB_Bus_STRUCT_Bus* slif::CLIB_Bus_Framework::dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)." << std::endl;
		return stat_STRUCT_get_ptr_CLIB_Bus_STRUCT_Bus(sysThreadId);
	}
	void slif::CLIB_Bus_Framework::dyn_REG_boot1_DEFINE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_REG_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_REG_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::stat_REG_boot0_DECLAIRE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : stat_REG_boot0_DECLAIRE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : stat_REG_boot0_DECLAIRE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
// private.
	void slif::CLIB_Bus_Framework::stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_Framework_App = nullptr;
	}
	void slif::CLIB_Bus_Framework::stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_Global(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_Global(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_Framework_Global = nullptr;
	}
	void slif::CLIB_Bus_Framework::stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_Framework_App = new class slif::CLIB_Bus_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_Framework::stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_Global(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_Framework_Global = new class slif::CLIB_Bus_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_Global(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_Framework_App* slif::CLIB_Bus_Framework::stat_CLASS_get_ptr_CLIB_Bus_Framework_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_Bus_Framework_App;
	}
	slif::CLIB_Bus_Framework_Global* slif::CLIB_Bus_Framework::stat_CLASS_get_ptr_CLIB_Bus_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)."<< std::endl;
		return stat_CLASS_ptr_CLIB_Bus_Framework_Global;
	}
	void slif::CLIB_Bus_Framework::stat_STRUCT_boot1_DEFINE_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_STRUCT_Bus = nullptr;
	}
	void slif::CLIB_Bus_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_STRUCT_Bus = new struct slif::CLIB_Bus_STRUCT_Bus();
		while (stat_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_Framework : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_STRUCT_Bus* slif::CLIB_Bus_Framework::stat_STRUCT_get_ptr_CLIB_Bus_STRUCT_Bus(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_Bus;
	}