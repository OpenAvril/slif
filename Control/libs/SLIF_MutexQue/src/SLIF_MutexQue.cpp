#include "../include/SLIF_MutexQue.h"
#include "../include/SLIF_MutexQue_Framework.h"
#include "../include/SLIF_MutexQue_Framework_App.h"
#include "../include/SLIF_MutexQue_Framework_App_Control.h"
#include "../include/SLIF_MutexQue_Framework_Global.h"
#include <iostream>
	static std::list<void*>* stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	void slif::MutexQue::endByUnlock(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_ACCESS_ID) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : unlock(sysThreadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId), SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId, bytes_ACCESS_ID));
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, true);
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, true);
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(3) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : unlock(sysThreadId)." << std::endl;
	}
	int* slif::MutexQue::generateHandle(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : generateHandle(sysThreadId)." << std::endl;
		auto handleId = new int();
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->resize(static_cast<uint8_t>(slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->size()+1));
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->assign(slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->size(), *slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->begin());
		*handleId = static_cast<int>(slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->size() - 1);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : generateHandle(sysThreadId)." << std::endl;
		return handleId;
	}
	 void slif::MutexQue::generateProgram(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : generateProgram(sysThreadId)." << std::endl;
		slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId);
		slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : generateProgram(sysThreadId)." << std::endl;
	}
	unsigned char* slif::MutexQue::isINSTANTIATED(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : isINSTANTIATED(sysThreadId)." << std::endl;
		bool* result = nullptr;
		result = new bool(sysThreadId);
		*result = true;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			*result = slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : isINSTANTIATED(sysThreadId)." << std::endl;
		return slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId, *result);
	}
	void slif::MutexQue::reInitialiseHandle(uint8_t* sysThreadId, int* handleId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : reInitialiseHandle(sysThreadId)." << std::endl;
		auto temp = slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->begin();
		std::advance(temp, *handleId);
		auto* tempObj = static_cast<SLIF_MutexQue_Framework*>(*temp);
		tempObj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_set_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		tempObj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId, tempObj);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : reInitialiseHandle(sysThreadId)." << std::endl;
	}
	void slif::MutexQue::startByLock(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_ACCESS_ID) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : lock(sysThreadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId), SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId, bytes_ACCESS_ID));
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(4) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : lock(sysThreadId)." << std::endl;
	}
	void slif::MutexQue::terminateProgram(uint8_t* sysThreadId, int* handleId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : terminateProgram(sysThreadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue;
			delete stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(2) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : terminateProgram(sysThreadId)." << std::endl;
	}
// private.
	void slif::MutexQue::slif_MutexQue_App_FUNCT_generate_Program(uint8_t* sysThreadId) {
		auto handleId = new int(0);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_generate_Program(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(sysThreadId);
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(sysThreadId);
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(sysThreadId);
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_create_SLIF_MutexQue_Architecture(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(sysThreadId, slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(sysThreadId,slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(sysThreadId,slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |        OpenAvril - WriteQue       |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_generate_Program(sysThreadId)." << std::endl;
	}
	bool slif::MutexQue::slif_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index)) {
				slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : SLIF_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		return slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
	}
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue = nullptr;
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)." << std::endl;
		auto handleId = new int(0);
		stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue = new std::list<void*>();
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->resize(1);
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(sysThreadId)->assign(*handleId, static_cast<void*>(new class SLIF_MutexQue_Framework(sysThreadId)));
		slif_MutexQue_App_FUNCT_generate_Program(sysThreadId);
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = nullptr;
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 5>* slif::MutexQue::slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<void*>* slif::MutexQue::slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<void*>* : SLIF_MutexQue_stat_PGM_get_array_of_ptr_MutexQue(sysThreadId)." << std::endl;
		return stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue;
	}
	slif::SLIF_MutexQue_Framework* slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(uint8_t* sysThreadId, int* handleId)	{
		auto temp = stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue->begin();
		std::advance(temp, *handleId);
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(sysThreadId)." << std::endl;
		return reinterpret_cast<slif::SLIF_MutexQue_Framework*>(*temp);
	}