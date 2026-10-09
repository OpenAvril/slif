#include "../include/CLIB_LeftHemishpore.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_Global.h"
#include "../../include/independent/CLIB_LeftHemishpore_STRUCT_Input.h"
#include "../../include/independent/CLIB_LeftHemishpore_STRUCT_Output.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise0.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise1.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise2.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise3.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise0.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise1.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise2.h"
#include "../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise3.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <string>
	static std::list<DEVELOPMENT::CLIB_LeftHemishpore_Framework*>* stat_CLASS_CLIB_LeftHemishpore_Framework = nullptr;
	static std::array<bool, 13>* stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Input_praise0* objInput_praise0 = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Input_praise1* objInput_praise1 = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Input_praise2* objInput_praise2 = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Input_praise3* objInput_praise3 = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Output_praise0* objOutput_praise0 =	nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Output_praise1* objOutput_praise1 = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Output_praise2* objOutput_praise2 = nullptr;
	static struct slif::CLIB_LeftHemishpore_STRUCT_Output_praise3* objOutput_praise3 = nullptr;
// public
	void DEVELOPMENT::CLIB_LeftHemishpore::generateProgram(uint8_t* sysThreadId) {
		auto handleId = new int(0);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_generate_Program(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_boot1_DEFINE_Framework(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_boot3_INITIALISE_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_LeftHemishpore_Framework_Global Meta-Data and Settings." << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Global_and_Settings(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_LeftHemishpore_Framework_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started independent Generate." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserInput(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserInput(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserInput(sysThreadId);

		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserOutput(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserOutput(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserOutput(sysThreadId);

		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)->dyn_REG_boot1_DEFINE_User_Algorithm(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)->dyn_REG_boot3_INITIALISE_User_Algorithm(sysThreadId);

		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId)->dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId)->dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));

		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId)->dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Output(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Output(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId)->dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Output(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));

		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)->dyn_REG_boot1_DEFINE_Concurrent(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)->dyn_REG_boot3_INITIALISE_Concurrent(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Architecture(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Registers - DEFINE" << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Data(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Data_Control(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Data(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Data_Control(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Registers - INITIALISE." << std::endl;
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId), CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Data(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId), CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId), CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Data_Control(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Program - INSTANTIATE." << std::endl;
		CLIB_LeftHemishpore_stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(sysThreadId);
		CLIB_LeftHemishpore_stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(sysThreadId);
		CLIB_LeftHemishpore_stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(sysThreadId);
		CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_PGM_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Program - INSTANTIATE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::        / \\    )\\  /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: _ / _\\_ \\@  @/ _/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |     OpenAvril : OpenEpicentre      |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
	}
	unsigned char* DEVELOPMENT::CLIB_LeftHemishpore::get_Output(uint8_t* sysThreadId, unsigned char* bytes_praiseId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_IsInitialised_slif(sysThreadId)." << std::endl;
		auto result = new unsigned char();
		auto sampleOutput = new std::list<slif::Object*>;
		auto temp = new slif::CLIB_LeftHemishpore_STRUCT_Output();
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			switch (*slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId, bytes_praiseId)) {
			case 0:
				auto* tempDouble = new double();
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Output(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
				sampleOutput->resize(2);
				sampleOutput->assign(0, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbUnsignedLongLong_to_ByteArray(sysThreadId, temp->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Output_praiseEventId(sysThreadId))));
				objOutput_praise0 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Output_praise0*>(temp->dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Output_Subset(sysThreadId));
				tempDouble = objOutput_praise0->dyn_REG_get_CLIB_LeftHemishpore_STRUCT_Output_praise0_Value(sysThreadId);
				sampleOutput->assign(1, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId, tempDouble)));
				//*result = slif::CLIB_LeftHemishpore_Framework_Global::
				break;

			case 1:
				auto* tempDouble = new double();
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Output(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
				sampleOutput->resize(2);
				sampleOutput->assign(0, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbUnsignedLongLong_to_ByteArray(sysThreadId, temp->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Output_praiseEventId(sysThreadId))));
				objOutput_praise1 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Output_praise1*>(temp->dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Output_Subset(sysThreadId));
				tempDouble = objOutput_praise1->dyn_REG_get_CLIB_LeftHemishpore_STRUCT_Output_praise1_Value(sysThreadId);
				sampleOutput->assign(1, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId, tempDouble)));
				//*result = slif::CLIB_LeftHemishpore_Framework_Global::
				break;

			case 2:
				auto* tempDouble = new double();
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Output(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
				sampleOutput->resize(2);
				sampleOutput->assign(0, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbUnsignedLongLong_to_ByteArray(sysThreadId, temp->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Output_praiseEventId(sysThreadId))));
				objOutput_praise2 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Output_praise2*>(temp->dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Output_Subset(sysThreadId));
				tempDouble = objOutput_praise2->dyn_REG_get_CLIB_LeftHemishpore_STRUCT_Output_praise2_Value(sysThreadId);
				sampleOutput->assign(1, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId, tempDouble)));
				//*result = slif::CLIB_LeftHemishpore_Framework_Global::
				break;

			case 3:
				auto* tempDouble = new double();
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Output(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
				CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
				sampleOutput->resize(2);
				sampleOutput->assign(0, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbUnsignedLongLong_to_ByteArray(sysThreadId, temp->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Output_praiseEventId(sysThreadId))));
				objOutput_praise3 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Output_praise3*>(temp->dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Output_Subset(sysThreadId));
				tempDouble = objOutput_praise3->dyn_REG_get_CLIB_LeftHemishpore_STRUCT_Output_praise3_Value(sysThreadId);
				sampleOutput->assign(1, reinterpret_cast<class slif::Object*>(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId, tempDouble)));
				//*result = slif::CLIB_LeftHemishpore_Framework_Global::
				break;
			}
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(1) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_IsInitialised_slif(sysThreadId)." << std::endl;
		return result;
	}




	unsigned char* DEVELOPMENT::CLIB_LeftHemishpore::get_FLAG_isINITIALISED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_IsInitialised_slif(sysThreadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(13) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_IsInitialised_slif(sysThreadId)." << std::endl;
		return slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Msbbool_to_MsbByteArray(temp);
	}
	unsigned char* DEVELOPMENT::CLIB_LeftHemishpore::get_FLAG_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)"));
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: <= slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId) = PRIMED"));
			*temp = CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
		}
		else {
			std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: <= slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId) = PRIMING"));
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(2) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)"));
		return slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* DEVELOPMENT::CLIB_LeftHemishpore::get_FLAG_isStackLoaded_ServerInputReceive(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId)."));
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(11) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId)."));
		return slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* DEVELOPMENT::CLIB_LeftHemishpore::get_FLAG_isStackLoaded_ServerOutputSend(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId)."));
		bool* temp = nullptr;
		temp = new bool(sysThreadId);
		*temp = true;
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(12) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId)."));
		return slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* DEVELOPMENT::CLIB_LeftHemishpore::get_MetaData_PraiseEventId(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_io_PRAISE_get_MetaData_PraiseEventId(sysThreadId)."));
		unsigned long long* temp = nullptr;
		temp = new unsigned long long (sysThreadId);
		*temp = ULLONG_MAX;
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Output_praiseEventId(sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(18) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_io_PRAISE_get_MetaData_PraiseEventId(sysThreadId)."));
		return slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(*temp);
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::set_InputItemsFor_praise0(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)"));
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);

			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId), CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise0 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Input_praise0 *>(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_LeftHemishpore_Framework_App_Data_Control_REG_Input_DoubleBuffer(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Input(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);

		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)"));

	}
	void DEVELOPMENT::CLIB_LeftHemishpore::set_InputItemsFor_praise1(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)"));
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId), CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise1 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Input_praise1*>(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_LeftHemishpore_Framework_App_Data_Control_REG_Input_DoubleBuffer(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Input(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)"));

	}
	void DEVELOPMENT::CLIB_LeftHemishpore::set_InputItemsFor_praise2(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)"));
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId), CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise2 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Input_praise2*>(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_LeftHemishpore_Framework_App_Data_Control_REG_Input_DoubleBuffer(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Input(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));

	}
	void DEVELOPMENT::CLIB_LeftHemishpore::set_InputItemsFor_praise3(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, temp,sysThreadId);
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId), CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(sysThreadId, bytesPraiseId));
			objInput_praise3 = reinterpret_cast<slif::CLIB_LeftHemishpore_STRUCT_Input_praise3*>(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_A));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(slif::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId, bytesValue_B));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_flip_CLIB_LeftHemishpore_Framework_App_Data_Control_REG_Input_DoubleBuffer(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Input(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_CLIB_LeftHemishpore_WriteEnable_ServerInputReceive(),sysThreadId);
		}
		else {
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(3) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_set_Items_Input_praise0(uint8_t* sysThreadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B)."));
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::set_MetaData_PraiseEventId(uint8_t* sysThreadId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId)."));
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			std::cout << "thread " << std::to_string(*sysThreadId) << " ::<= slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId) = PRIMED."));
			CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId))->dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			std::cout << "thread " << std::to_string(*sysThreadId) << " ::<= slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId) = PRIMING."));
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(27) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_io_PRAISE_set_MetaData_PraiseEventId(sysThreadId)."));
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::terminateProgram(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_terminate_Program(sysThreadId)."));
		if (!CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_CLASS_CLIB_LeftHemishpore_Framework;
			delete stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED;
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
			CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(4) = !CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) ;
			CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore : CLIB_LeftHemishpore_Framework_App_FUNCT_terminate_Program(sysThreadId)."));
	}
// private.
	void DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)); memberFunctionId++) {
			if (CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) {
				CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(0) = CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
				break;
			}
		}
		for (int index = 0; index < sizeof(*CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)); index++) {
			std::cout << CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->at(index);
		}
		std::cout<< std::endl;

	}
	void DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_CLASS_boot1_DEFINE_Framework(uint8_t* sysThreadId)
	{
		stat_CLASS_CLIB_LeftHemishpore_Framework = nullptr;
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_CLASS_boot3_INITIALISE_Framework(uint8_t* sysThreadId) {
		stat_CLASS_CLIB_LeftHemishpore_Framework = new class slif::CLIB_LeftHemishpore_Framework(sysThreadId);
		while (CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(sysThreadId, handleId) == nullptr) {}
	}
	DEVELOPMENT::CLIB_LeftHemishpore_Framework* DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId, int* handleId) {
		auto temp = stat_CLASS_CLIB_LeftHemishpore_Framework->begin();
		std::advance(temp, *handleId);
		return *temp;
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(uint8_t* sysThreadId)
	{
		stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED = nullptr;
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(uint8_t* sysThreadId) {
		stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED = new std::array<bool, 28>();
		for (int index = 0; index < sizeof(*CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)); index++) {
			auto temp = CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->begin();
			std::advance(temp, index);
			*temp = true;
		}
	}
	void DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(uint8_t* sysThreadId) {
		for (int index = 0; index < sizeof(*CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)); index++) {
			auto temp = CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(sysThreadId)->begin();
			std::advance(temp, index);
			*temp = true;
		}
	}
	std::array<bool, 13>* DEVELOPMENT::CLIB_LeftHemishpore::CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED;
	}