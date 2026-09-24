#include "SLIF_MutexQue.h"
#include "SLIF_MutexQue_Framework.h"
#include "SLIF_MutexQue_Framework_App.h"
#include "SLIF_MutexQue_Framework_App_Control.h"
#include "SLIF_MutexQue_Framework_Global.h"
#include <iostream>
	static std::list<void*>* stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	void slif::MutexQue::endByUnlock(uint8_t* threadId, int* handleId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : unlock(threadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {

			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_APP_FUNCT_write_End(threadId, slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId), SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(threadId, bytes));
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId, true);
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId, true);
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(3) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : unlock(threadId)." << std::endl;
	}
	int* slif::MutexQue::generateHandle(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : generateHandle(threadId)." << std::endl;
		auto handleId = new int();
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->resize(static_cast<uint8_t>(slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->size()+1));
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->assign(slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->size(), *slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->begin());
		*handleId = *reinterpret_cast<int*>(slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->size() - 1);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : generateHandle(threadId)." << std::endl;
		return handleId;
	}
	 void* slif::MutexQue::generateProgram(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : generateProgram(threadId)." << std::endl;
		slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId);
	 	slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId);
	 	slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(threadId);
		slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : generateProgram(threadId)." << std::endl;
		return *stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue->begin();
	}
	unsigned char* slif::MutexQue::isINSTANTIATED(uint8_t* threadId)	{
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : isINSTANTIATED(threadId)." << std::endl;
		bool* result = nullptr;
		result = new bool(threadId);
		*result = true;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			*result = slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(1) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : isINSTANTIATED(threadId)." << std::endl;
		return slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId, *result);
	}
	void slif::MutexQue::reInitialiseHandle(uint8_t* threadId, int* handleId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : reInitialiseHandle(threadId)." << std::endl;
		auto temp = slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->begin();
		std::advance(temp, *handleId);
		auto* tempObj = static_cast<SLIF_MutexQue_Framework*>(*temp);
		tempObj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_set_SLIF_MutexQue_number_Of_Implemented_Threads(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		tempObj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control_For_New_Access_Count(threadId, tempObj);
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : reInitialiseHandle(threadId)." << std::endl;
	}
	void slif::MutexQue::startByLock(uint8_t* threadId, int* handleId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : lock(threadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId), SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbByteArray_To_Msbuint8_t(threadId, bytes));
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(4) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : lock(threadId)." << std::endl;
	}
	void slif::MutexQue::terminateProgram(uint8_t* threadId, int* handleId)	{
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : terminateProgram(threadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			delete stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue;
			delete stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(2) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : terminateProgram(threadId)." << std::endl;
	}
// private.
	void* slif::MutexQue::slif_MutexQue_App_FUNCT_generate_Program(uint8_t* threadId, int* handleId)	{
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_generate_Program(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_create_SLIF_MutexQue_Global_and_Settings(threadId);
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_boot1_DEFINE_SLIF_MutexQue_Global(threadId);
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Global(threadId);
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Global(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_create_SLIF_MutexQue_Architecture(threadId);
		std::cout << "thread " << std::to_string(*threadId) << " :: started Registers - DEFINE" << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_boot1_DEFINE_SLIF_MutexQue_Framework_App_Control(threadId, slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId));
		std::cout << "thread " << std::to_string(*threadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: started Registers - SUBSTANTIATE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_SLIF_MutexQue_Framework_App_Control(threadId,slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId));
		std::cout << "thread " << std::to_string(*threadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: started Registers - INITIALISE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_boot3_INITIALISE_SLIF_MutexQue_Framework_App_Control(threadId,slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId));
		std::cout << "thread " << std::to_string(*threadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: started Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: done Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*threadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |        OpenAvril - WriteQue       |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_generate_Program(threadId)." << std::endl;
		return (void*)slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId, handleId);
	}
	bool slif::MutexQue::slif_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* threadId) {
		slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(index)) {
				slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0) = slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << std::to_string(*threadId) << " :: <= bool : SLIF_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
		return slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
	}
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* threadId) {
	 	std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(threadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue = nullptr;
	 	std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* threadId) {
	 	std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(threadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue = new std::list<void*>();
		slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->resize(1);
		const auto temp = slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(threadId)->begin();
		*temp = slif::MutexQue::slif_MutexQue_App_FUNCT_generate_Program(threadId, 0);
	 	std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
	 	std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = nullptr;
	 	std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : slif_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->size()); memberFunctionId++) {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId) = true;
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
	 	std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->size()); memberFunctionId++) {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	std::array<bool, 5>* slif::MutexQue::slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
		return stat_REG_ptr_SLIF_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<void*>* slif::MutexQue::slif_MutexQue_stat_PGM_get_array_of_ptr_SLIF_MutexQue(uint8_t* threadId) {
	 	std::cout << "thread " << std::to_string(*threadId) << " :: <= std::list<void*>* : SLIF_MutexQue_stat_PGM_get_array_of_ptr_MutexQue(threadId)." << std::endl;
		return stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue;
	}
	slif::SLIF_MutexQue_Framework* slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(uint8_t* threadId, int* handleId)	{
		auto temp = stat_REG_ptr_SLIF_MutexQue_array_of_ptr_MutexQue->begin();
		std::advance(temp, *handleId);
	 	std::cout << "thread " << std::to_string(*threadId) << " :: <= class : slif_MutexQue_stat_PGM_get_ptr_SLIF_MutexQue(threadId)." << std::endl;
		return reinterpret_cast<slif::SLIF_MutexQue_Framework*>(*temp);
	}