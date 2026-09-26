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
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
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
	void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_generate_Program(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_generate_Program(sysThreadId)." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(sysThreadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(sysThreadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started STRUCTS Generate." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserInput(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserInput(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserInput(sysThreadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)->dyn_REG_boot1_DEFINE_User_Algorithm(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)->dyn_REG_boot3_INITIALISE_User_Algorithm(sysThreadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId)->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId)->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)->dyn_REG_boot1_DEFINE_Concurrent(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId)->dyn_REG_boot3_INITIALISE_Concurrent(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(sysThreadId);
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Architecture Registers - DEFINE" << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done Architecture Registers - DEFINE." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Architecture Registers - INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(sysThreadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done Architecture Registers - INITIALISE." << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: started Program - INSTANTIATE." << std::endl;
		CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(sysThreadId);
		CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(sysThreadId);
		CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: done Program - INSTANTIATE." << std::endl;

		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: " << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" ::         ,     \\      /      ," << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" ::         ,     \\      /      ," << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" ::        / \\    )\\ _ /(     / \\ " << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |              |\\../|               |" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |               \\VV/                |" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |      Open Source MIT Package       |" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |     OpenAvril : OpenEpicentre      |" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |__________________|" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |  /    V          ))        V   \\  |" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: |/                //               \\| " << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: `                 V                 '" << std::endl;
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_generate_Program(sysThreadId)" << std::endl;
		return (void*)CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)" << std::endl;
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId) = PRIMED" << std::endl;
			*temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
		}
		else {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId) = PRIMING" << std::endl;
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(2) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)" << std::endl;
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)" << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);

			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);

		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)" << std::endl;

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise1(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)" << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)" << std::endl;

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise2(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)" << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)." << std::endl;

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise3(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId), CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)." << std::endl;
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_Items_Output_praise0(uint8_t* sysThreadId, std::list<CLIBOpenEpiCentre::Object*>* sampleOutput)	{
		CLIB_OpenEpiCentre_STRUCT_Output* temp = nullptr;
		double* tempDouble = nullptr;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_OpenEpiCentre_WriteEnable_ServerInputReceive(),sysThreadId);
		sampleOutput->resize(2);
		sampleOutput->assign(0, reinterpret_cast<Object*>(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(sysThreadId, temp->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId())));
		objOutput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(temp->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset());
		*tempDouble = objOutput_praise0->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value();
		sampleOutput->assign(1, reinterpret_cast<Object*>(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(sysThreadId, *tempDouble)));
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_ (sampleOutput);//todo
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(sysThreadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
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
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(4) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(sysThreadId)." << std::endl;
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(11) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId)." << std::endl;
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(uint8_t* sysThreadId)	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(12) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId)." << std::endl;
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(sysThreadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(13) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(sysThreadId)." << std::endl;
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(uint8_t* sysThreadId) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(sysThreadId)." << std::endl;
		unsigned long long* temp = nullptr;
		temp = new unsigned long long (sysThreadId);
		*temp = ULLONG_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(sysThreadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(18) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(sysThreadId)." << std::endl;
		return CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(uint8_t* sysThreadId, unsigned char* bytes) {
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" ::<= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId) = PRIMED." << std::endl;
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" ::<= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId) = PRIMING." << std::endl;
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(27) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId)." << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)); memberFunctionId++) {
			if (CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) {
				CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(0) = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
				break;
			}
		}
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(sysThreadId, new std::string(" :: TEST :: <= ";
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)); index++) {
			std::cout << CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->at(index);
		}
		std::cout<< std::endl;

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(uint8_t* sysThreadId)
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(uint8_t* sysThreadId)
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework(sysThreadId);
		while (CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(sysThreadId) == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(uint8_t* sysThreadId) {
		return stat_CLASS_CLIB_OpenEpiCentre_Framework;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t* sysThreadId)
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t* sysThreadId)
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = new std::array<bool, 28>(sysThreadId);
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)); index++) {
			auto temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->begin(sysThreadId);
			std::advance(temp, index);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t* sysThreadId) {
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)); index++) {
			auto temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(sysThreadId)->begin(sysThreadId);
			std::advance(temp, index);
			*temp = true;
		}
	}
	std::array<bool, 28>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED;
	}