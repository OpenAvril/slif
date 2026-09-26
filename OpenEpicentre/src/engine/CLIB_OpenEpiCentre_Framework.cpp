#include "../../include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::~CLIB_OpenEpiCentre_Framework() {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(0, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : ~CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(0, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : ~CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(sysThreadId)." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)." << std::endl;

		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(obj);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(sysThreadId)" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = new CLIB_OpenEpiCentre_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(sysThreadId)" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = new CLIB_OpenEpiCentre_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= bool : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t* sysThreadId)	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= bool : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output(sysThreadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)." << std::endl;
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)." << std::endl;
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)." << std::endl;
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)." << std::endl;
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)." << std::endl;
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
	}