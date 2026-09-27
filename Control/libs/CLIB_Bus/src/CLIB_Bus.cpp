#include "../include/CLIB_Bus.h"
#include "../../SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../include/CLIB_Bus_Framework_Global.h"
#include <array>
#include <cstdint>
#include <iostream>
	static slif::CLIB_Bus_Framework* stat_REG_slif_CLIB_Bus_Framework;
	static std::array<bool, 4>* stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
// public.
	void slif::Bus::generateProgram(uint8_t* sysThreadId) {
		void* result = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_App_FUNCT_slif_generate_Program(sysThreadId)." << std::endl;
		
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_boot1_DEFINE(sysThreadId);
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_boot3_INITIALISE(sysThreadId);
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework(sysThreadId);
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework(sysThreadId);
			stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_Framework_create_Architecture(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |      OpenAvril : Bus        |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_App_FUNCT_slif_generate_Program(sysThreadId)." << std::endl;
	}
	unsigned char* slif::Bus::isINSTANTIATED(uint8_t* sysThreadId) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : isINSTANTIATED(sysThreadId)." << std::endl;
		unsigned char* result = nullptr;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		result = CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId, *temp);
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::  exiting LIB :: slif : Bus : isINSTANTIATED(sysThreadId)." << std::endl;
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
		return result;
	}
	void slif::Bus::load(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_Cargo) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : load(sysThreadId)." << std::endl;
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {

		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : load(sysThreadId)." << std::endl;
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
	}
	void slif::Bus::unload(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_Cargo) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : unload(sysThreadId)." << std::endl;
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {

		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : unload(sysThreadId)." << std::endl;
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
	}
	void slif::Bus::reInitialiseHandle(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : reInitialiseHandle(sysThreadId)." << std::endl;
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			slif::MutexQue::reInitialiseHandle(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : reInitialiseHandle(sysThreadId)." << std::endl;
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
	}
	void slif::Bus::terminateProgram(uint8_t* sysThreadId) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_slif_CLIB_Bus_Framework;
			delete stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : terminateProgram(sysThreadId)." << std::endl;
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQue(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, *sysThreadId));
	}
// private.
	void slif::Bus::stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < static_cast<uint8_t>(stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			if (stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}

	void slif::Bus::stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_REG_slif_CLIB_Bus_Framework = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_CLASS_boot1_DEFINE_slif_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::Bus::stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_REG_slif_CLIB_Bus_Framework = new class slif::CLIB_Bus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_CLASS_boot3_INITIALISE_slif_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_Framework* slif::Bus::stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_slif_CLIB_Bus_Framework(uint8_t* sysThreadId)" << std::endl;
		return stat_REG_slif_CLIB_Bus_Framework;
	}
	void slif::Bus::stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_slif_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void slif::Bus::stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_slif_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void slif::Bus::stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 4>*  slif::Bus::stat_REG_get_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool, 4>* : stat_REG_get_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId)" << std::endl;
		return stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
	}

