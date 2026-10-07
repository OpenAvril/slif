#include "../../include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Execute.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
	slif::CLIB_OpenEpiCentre_Framework_App* slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	slif::CLIB_OpenEpiCentre_Framework_Global* slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	slif::CLIB_OpenEpiCentre_STRUCT_Concurrent* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	slif::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	slif::CLIB_OpenEpiCentre_STRUCT_User_Input* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	slif::CLIB_OpenEpiCentre_STRUCT_User_Output* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
// public.
	slif::CLIB_OpenEpiCentre_Framework::CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	slif::CLIB_OpenEpiCentre_Framework::~CLIB_OpenEpiCentre_Framework() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : ~CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		delete stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
		delete stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
		delete stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
		delete stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
		delete stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : ~CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(sysThreadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(sysThreadId)."));
	}
	slif::CLIB_OpenEpiCentre_Framework_App* slif::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)."));
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_Framework_Global* slif::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)."));
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)."));

		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute(obj);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Concurrent* slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)"));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)"));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_STRUCT_User_Input* slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)"));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
	}
	slif::CLIB_OpenEpiCentre_STRUCT_User_Output* slif::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)"));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)"));
	}
// private.
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)"));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)"));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)"));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)"));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)"));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = new CLIB_OpenEpiCentre_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)"));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)"));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = new CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)."));
	}
	slif::CLIB_OpenEpiCentre_Framework_App* slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)."));
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	}
	slif::CLIB_OpenEpiCentre_Framework_Global* slif::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= bool : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)."));
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = new struct slif::CLIB_OpenEpiCentre_STRUCT_Concurrent(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = new struct slif::CLIB_OpenEpiCentre_STRUCT_Input(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = new struct slif::CLIB_OpenEpiCentre_STRUCT_Output(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = new struct slif::CLIB_OpenEpiCentre_STRUCT_User_Algorithm(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = new struct slif::CLIB_OpenEpiCentre_STRUCT_User_Input(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
	}
	void slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = new struct slif::CLIB_OpenEpiCentre_STRUCT_User_Output(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Concurrent* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)."));
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Input* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)."));
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)."));
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)."));
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_User_Input* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)."));
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_User_Output* slif::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)."));
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
	}