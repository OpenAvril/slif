#include "../include/CLIB_MutexQue.h"
#include "../include/CLIB_MutexQue_Framework.h"
#include "../include/CLIB_MutexQue_Framework_App.h"
#include "../include/CLIB_MutexQue_Framework_App_Control.h"
#include "../include/CLIB_MutexQue_Framework_Global.h"
#include <iostream>
	static std::list<void*>* stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	void slif::MutexQue::endByUnlock(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_ACCESS_ID) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, slif::MutexQue::CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId), CLIB_MutexQue_Framework_Global::stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId, bytes_ACCESS_ID));
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, true);
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, true);
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(3) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
	}
	int* slif::MutexQue::generateHandle(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : generateHandle(sysThreadId)" << std::endl;
		auto handleId = new int();
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->resize(static_cast<uint8_t>(CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->size()+1));
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->assign(CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->size(), *CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->begin());
		*handleId = static_cast<int>(CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->size() - 1);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : generateHandle(sysThreadId)" << std::endl;
		return handleId;
	}
	 void slif::MutexQue::generateProgram(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : generateProgram(sysThreadId)" << std::endl;
		CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId);
		CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : generateProgram(sysThreadId)" << std::endl;
	}
	unsigned char* slif::MutexQue::isINSTANTIATED(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : isINSTANTIATED(sysThreadId)" << std::endl;
		bool* result = nullptr;
		result = new bool(sysThreadId);
		*result = true;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			*result = CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : isINSTANTIATED(sysThreadId)" << std::endl;
		return slif::CLIB_MutexQue_Framework_Global::stat_APP_CONVERT_CLIB_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId, *result);
	}
	void slif::MutexQue::reInitialiseHandle(uint8_t* sysThreadId, int* handleId, std::byte MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : reInitialiseHandle(sysThreadId)" << std::endl;
		auto temp = CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->begin();
		std::advance(temp, *handleId);
		const auto tempObj = static_cast<CLIB_MutexQue_Framework*>(*temp);
		tempObj->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_set_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId, &MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		tempObj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId, tempObj);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : reInitialiseHandle(sysThreadId)" << std::endl;
	}
	void slif::MutexQue::startByLock(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_ACCESS_ID) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : lock(sysThreadId)" << std::endl;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, slif::MutexQue::CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId), CLIB_MutexQue_Framework_Global::stat_APP_CONVERT_CLIB_MutexQue_MsbByteArray_To_Msbuint8_t(sysThreadId, bytes_ACCESS_ID));
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(4) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : lock(sysThreadId)" << std::endl;
	}
	void slif::MutexQue::terminateProgram(uint8_t* sysThreadId, int* handleId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : terminateProgram(sysThreadId)" << std::endl;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue;
			delete stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(2) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : terminateProgram(sysThreadId)" << std::endl;
	}
// private.
	void slif::MutexQue::CLIB_MutexQue_App_FUNCT_generate_Program(uint8_t* sysThreadId) {
		auto handleId = new int(0);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_create_CLIB_MutexQue_Global_and_Settings(sysThreadId);
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(sysThreadId);
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(sysThreadId);
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_create_CLIB_MutexQue_Architecture(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(sysThreadId, CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - DEFINE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - SUBSTANTIATE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(sysThreadId,CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - SUBSTANTIATE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - INITIALISE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(sysThreadId,CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE" << std::endl;

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
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
	}
	bool slif::MutexQue::CLIB_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index)) {
				CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : CLIB_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId)" << std::endl;
		return CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
	}
	void slif::MutexQue::CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue = nullptr;
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)" << std::endl;
	}
	void slif::MutexQue::CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)" << std::endl;
		auto handleId = new int(0);
		stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue = new std::list<void*>();
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->resize(1);
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->assign(*handleId, static_cast<void*>(new class CLIB_MutexQue_Framework(sysThreadId)));
		CLIB_MutexQue_App_FUNCT_generate_Program(sysThreadId);
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)" << std::endl;
	}
	void slif::MutexQue::CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = nullptr;
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	void slif::MutexQue::CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	void slif::MutexQue::CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	std::array<bool, 5>* slif::MutexQue::CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<void*>* slif::MutexQue::CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<void*>* : CLIB_MutexQue_stat_PGM_get_array_of_ptr_MutexQue(sysThreadId)." << std::endl;
		return stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue;
	}
	slif::CLIB_MutexQue_Framework* slif::MutexQue::CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(uint8_t* sysThreadId, int* handleId)	{
		auto temp = stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue->begin();
		std::advance(temp, *handleId);
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId)." << std::endl;
		return reinterpret_cast<slif::CLIB_MutexQue_Framework*>(*temp);
	}