#include "../include/CLIB_OpenEpiCentre.h"
#include "../include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT_Input.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT_Output.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
#include "../libs/CLIB_ThreadLogs/include/CLIB_ThreadLogs.h"
#include "../libs/CLIB_WriteQueForThreadsAt_DataStack/include/CLIB_WriteEnableForThreadsAt_DataStack.h"
#include <cfloat>
#include <iostream>
#include <string>
	static CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	static std::array<bool, 28>* stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise0* objInput_praise0 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1* objInput_praise1 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2* objInput_praise2 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3* objInput_praise3 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise0* objOutput_praise0 =	nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise1* objOutput_praise1 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise2* objOutput_praise2 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise3* objOutput_praise3 = nullptr;
// public
	void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_generate_Program(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_generate_Program(threadId)."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE."));
		CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(threadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE."));

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings."));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings."));

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started STRUCTS Generate."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserInput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserInput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserInput(threadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(threadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)->dyn_REG_boot1_DEFINE_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)->dyn_REG_boot3_INITIALISE_User_Algorithm(threadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)->dyn_REG_boot1_DEFINE_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)->dyn_REG_boot3_INITIALISE_Concurrent(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(threadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Architecture Registers - DEFINE"));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Algorithms(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done Architecture Registers - DEFINE."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Architecture Registers - SUBSTANTIATE."));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Algorithms(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done Architecture Registers - SUBSTANTIATE."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Architecture Registers - INITIALISE."));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Algorithms(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done Architecture Registers - INITIALISE."));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: started Program - INSTANTIATE."));
		CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(threadId);
		CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(threadId);
		CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done Program - INSTANTIATE."));

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: "));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" ::         ,     \\      /      ,"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" ::         ,     \\      /      ,"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" ::        / \\    )\\ _ /(     / \\ "));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" ::       /   \\   (_\\  /_)    /   \\ "));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: __ / __\\_ \\@  @/ __/___\\___"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |              |\\../|               |"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |               \\VV/                |"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |      Open Source MIT Package       |"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |     OpenAvril : OpenEpicentre      |"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |__________________|"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |    / \\ /        \\\\        \\ /\\    |"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |  /    V          ))        V   \\  |"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: |/                //               \\| "));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: `                 V                 '"));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_generate_Program(threadId)."));
		return (void*)CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)."));
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId) = PRIMED."));
			*temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
		}
		else {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId) = PRIMING."));
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(2) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)."));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);

			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_A));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_End(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);

		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise1(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_A));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_End(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise2(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, temp,threadId);
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_A));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_End(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise3(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, temp,threadId);
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(threadId, bytesPraiseId));
			objInput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_A));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(threadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_End(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_Items_Output_praise0(uint8_t threadId, std::list<CLIBOpenEpiCentre::Object*>* sampleOutput)	{
		CLIB_OpenEpiCentre_STRUCT_Output* temp = nullptr;
		double* tempDouble = nullptr;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, temp,threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)->dyn_APP_FUNCT_write_End(threadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),threadId);
		sampleOutput->resize(2);
		sampleOutput->assign(0, reinterpret_cast<Object*>(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(threadId, temp->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId())));
		objOutput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(temp->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset());
		*tempDouble = objOutput_praise0->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value();
		sampleOutput->assign(1, reinterpret_cast<Object*>(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(threadId, *tempDouble)));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_ (sampleOutput);//todo
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(threadId)."));
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			delete stat_CLASS_CLIB_OpenEpiCentre_Framework;
			delete stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED;
			delete objInput_praise0;
			delete objInput_praise1;
			delete objInput_praise2;
			delete objInput_praise3;
			delete objOutput_praise0;
			delete objOutput_praise1;
			delete objOutput_praise2;
			delete objOutput_praise3;
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(4) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(threadId)."));
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(threadId)."));
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(11) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(threadId)."));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(uint8_t threadId)	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(threadId)."));
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(12) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(threadId)."));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(threadId)."));
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(13) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(threadId)."));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(uint8_t threadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(threadId)."));
		unsigned long long* temp = nullptr;
		temp = new unsigned long long (threadId);
		*temp = ULLONG_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(18) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(threadId)."));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(uint8_t threadId, unsigned char* bytes) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId)."));
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" ::<= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId) = PRIMED."));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" ::<= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId) = PRIMING."));
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(27) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId)."));
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
		CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) = false;
		for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); memberFunctionId++) {
			if (CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(memberFunctionId)) {
				CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(memberFunctionId);
				break;
			}
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: TEST :: <= ";
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); index++) {
			std::cout << CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(index);
		}
		std::cout<< std::endl;

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(uint8_t threadId)
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(uint8_t threadId)
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework(threadId);
		while (CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId) == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		return stat_CLASS_CLIB_OpenEpiCentre_Framework;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId)
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId)
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = new std::array<bool, 28>(threadId);
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); index++) {
			auto temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->begin(threadId);
			std::advance(temp, index);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId) {
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); index++) {
			auto temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->begin(threadId);
			std::advance(temp, index);
			*temp = true;
		}
	}
	std::array<bool, 28>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(uint8_t threadId) {
		return stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED;
	}