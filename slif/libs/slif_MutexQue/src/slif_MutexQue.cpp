#include "../include/slif_MutexQue.h"
#include "../include/slif_MutexQue_Framework.h"
#include "../include/slif_MutexQue_Framework_App.h"
#include "../include/slif_MutexQue_Framework_App_Control.h"
#include "../include/slif_MutexQue_Framework_Global.h"
#include <iostream>
	static std::list<void*>* stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_slif_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	int* slif::MutexQue::generateHandle(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		auto handleId = new int();
		slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->resize(static_cast<uint8_t>(slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->size()+1));
		slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->assign(slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->size(), *slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->begin());
		auto temp = slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->begin();
		std::advance(temp, slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->size());
		auto* tempObj = static_cast<slif_MutexQueQue_Framework*>(*temp);
		tempObj->dyn_CLASS_get_ptr_slif_MutexQue_Global(threadId)->dyn_REG_set_slif_MutexQue_number_Of_Implemented_Threads(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		tempObj->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_boot3_INITIALISE_slif_MutexQue_Framework_App_Control_For_New_Access_Count(threadId, tempObj);
		*handleId = slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->size();
		return handleId;
	}
	 std::list<void*>* slif::MutexQue::generateProgram(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_generateAllLibrariesWithin(threadId)." << std::endl;
	 	auto* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY = new std::list<std::byte>();
	 	MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->resize(1);
	 	MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->assign(0, static_cast<std::byte>(2));
	 	stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue = nullptr;
	 	slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId);
	 	slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId);

	 	std::cout << "thread " << std::to_string(threadId) << " :: started Architecture array_of_ptr_Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
	 	slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(threadId);
	 	slif_MutexQue_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_Framework(threadId);
		slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: done Architecture array_of_ptr_Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new std::byte();
		*MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<std::byte>(2);
		slif_MutexQue_stat_PGM_get_ptr_slif_MutexQue(threadId, 0)->dyn_CLASS_get_ptr_slif_MutexQue_Global(threadId)->dyn_REG_set_slif_MutexQue_number_Of_Implemented_Threads(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif_MutexQue_stat_PGM_get_ptr_slif_MutexQue(threadId, 0)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_boot3_INITIALISE_slif_MutexQue_Framework_App_Control(threadId, slif_MutexQue_stat_PGM_get_ptr_slif_MutexQue(threadId, 0));
	 	return stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_generateAllLibrariesWithin(threadId)." << std::endl;
	}
	unsigned char* slif::MutexQue::slif_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId, uint8_t dataClusterId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
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
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		return slif::slif_MutexQueQue_Framework_Global::stat_APP_CONVERT_slif_MutexQue_MsbBoolean_To_MsbByteArray(threadId, *result);
	}
	void slif::MutexQue::slif_MutexQue_App_FUNCT_terminate_Program(uint8_t threadId, uint8_t dataClusterId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_terminate_Program(threadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			delete stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue;
			delete stat_REG_ptr_slif_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(2) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_terminate_Program(threadId)." << std::endl;
	}
	void slif::MutexQue::unlock(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_write_End(threadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {

			slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_APP_FUNCT_write_End(threadId, slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId), slif_MutexQue_Framework_Global::stat_APP_CONVERT_slif_MutexQue_MsbByteArray_To_Msbuint8_t(threadId, bytes));
			slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_slif_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId, true);
			slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_slif_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId, true);
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(3) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_write_End(threadId)." << std::endl;

	}
	void slif::MutexQue::lock(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_write_Start(threadId)." << std::endl;
		if (!slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId), slif_MutexQue_Framework_Global::stat_APP_CONVERT_slif_MutexQue_MsbByteArray_To_Msbuint8_t(threadId, bytes));
		}
		else {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(4) = !slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_write_Start(threadId)." << std::endl;
	}
// private.
	void* slif::MutexQue::slif_MutexQue_App_FUNCT_generate_Program(uint8_t threadId, uint8_t dataClusterId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_generate_Program(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_create_slif_MutexQue_Global_and_Settings(threadId);
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_Global(threadId)->dyn_REG_boot1_DEFINE_slif_MutexQue_Global(threadId);
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_slif_MutexQue_Global(threadId);
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_Global(threadId)->dyn_REG_boot3_INITIALISE_slif_MutexQue_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_create_slif_MutexQue_Architecture(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: started Registers - DEFINE" << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_boot1_DEFINE_slif_MutexQue_Framework_App_Control(threadId, slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId));
		std::cout << "thread " << std::to_string(threadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: started Registers - SUBSTANTIATE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_slif_MutexQue_Framework_App_Control(threadId,slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId));
		std::cout << "thread " << std::to_string(threadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: started Registers - INITIALISE." << std::endl;
		slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId)->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_boot3_INITIALISE_slif_MutexQue_Framework_App_Control(threadId,slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId));
		std::cout << "thread " << std::to_string(threadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: started Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: done Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |        OpenAvril - WriteQue       |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_App_FUNCT_generate_Program(threadId)." << std::endl;
		return (void*)slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId, dataClusterId);
	}
	bool slif::MutexQue::slif_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
		slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(index)) {
				slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0) = slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: <= bool : slif_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
		return slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
	}
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(threadId)." << std::endl;
		stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue = nullptr;
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_Framework(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_Framework(threadId)." << std::endl;
	 	stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue = new std::list<void*>();
	 	slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->resize(1);
	 	for (uint8_t dataClusterId = 0; dataClusterId < static_cast<uint8_t>(stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue->size()); dataClusterId++) {
	 		auto temp = slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->begin();
	 		std::advance(temp, dataClusterId);
	 		*temp = slif::MutexQue::slif_MutexQue_App_FUNCT_generate_Program(threadId, 0);
	 	}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_Framework(threadId)." << std::endl;
	 }
	void slif::MutexQue::slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(threadId)." << std::endl;
	 	auto DEFAULT = slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->begin();
	 	for (uint8_t dataClusterId = 0; dataClusterId < static_cast<uint8_t>(MAX_NUMBER_OF_DATA_CLUSTERS); dataClusterId++) {
	 		slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(threadId)->push_back(*DEFAULT);
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		stat_REG_ptr_slif_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->size()); memberFunctionId++) {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	void slif::MutexQue::slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: slif : slif_MutexQue : slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->size()); memberFunctionId++) {
			slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: slif : slif_MutexQue : slif_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	std::array<bool, 5>* slif::MutexQue::slif_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId) {
		return stat_REG_ptr_slif_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<void*>* slif::MutexQue::slif_MutexQue_stat_PGM_get_array_of_ptr_slif_MutexQue(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<void*>* : slif_MutexQue_stat_PGM_get_array_of_ptr_MutexQue(threadId)." << std::endl;
		return stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue;
	}
	class slif::slif_MutexQueQue_Framework* slif::MutexQue::slif_MutexQue_stat_PGM_get_ptr_slif_MutexQue(uint8_t threadId, uint8_t dataClusterId)	{
		auto temp = stat_REG_ptr_slif_MutexQue_array_of_ptr_MutexQue->begin();
		std::advance(temp, dataClusterId);
	 	std::cout << "thread " << std::to_string(threadId) << " :: <= class : slif_MutexQue_stat_PGM_get_ptr_MutexQue(threadId)." << std::endl;
		return reinterpret_cast<slif::slif_MutexQueQue_Framework*>(*temp);
	}