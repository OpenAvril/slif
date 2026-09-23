#include "../../include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include "../../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include <iostream>
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : CLIB_OpenEpiCentre_Framework(threadId)."));
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(threadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::~CLIB_OpenEpiCentre_Framework() {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(0, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : ~CLIB_OpenEpiCentre_Framework(threadId)."));
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(0, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : ~CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(threadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(threadId);
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(threadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(threadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(threadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(threadId)."));
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)."));
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= class : dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)."));
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t threadId, CLIB_OpenEpiCentre_Framework* obj) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId)."));

		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(obj);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(threadId)."));
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(threadId)."));
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(threadId);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework(threadId)."));
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(threadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(threadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(threadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = new CLIB_OpenEpiCentre_App(threadId);
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(threadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = new CLIB_OpenEpiCentre_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global(threadId)."));
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)."));
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(uint8_t threadId)	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)."));
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = nullptr;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent(threadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input(threadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output(threadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm(threadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input(threadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output(threadId);
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId) == nullptr) {}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)."));
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)."));
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)."));
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)."));
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)."));
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= struct : stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)."));
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
	}