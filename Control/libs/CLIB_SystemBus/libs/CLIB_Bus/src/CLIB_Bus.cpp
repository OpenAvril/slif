#include "../include/CLIB_Bus.h"
#include "../include/CLIB_Bus_Framework.h"
#include "../../CLIB_MutexQue/include/CLIB_MutexQue.h"
#include "../include/CLIB_Bus_Framework_Global.h"
#include "../include/independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.h"
#include <array>
#include <cstdint>
#include <iostream>
	static slif::CLIB_Bus_Framework* stat_REG_CLIB_Bus_Framework;
	static std::array<bool, 4>* stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
// public.
	int* slif::Bus::generateHandle(uint8_t* sysThreadId) {
		auto oldSize = stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_List_Of_Busses(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_List_Of_Busses(sysThreadId)->resize(oldSize+1);
		for (uint8_t i = oldSize; i < stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_List_Of_Busses(sysThreadId)->size(); i++) {
			auto temp = stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_List_Of_Busses(sysThreadId)->begin();
			std::advance(temp, i);
			temp = stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_List_Of_Busses(sysThreadId)->begin();
		}
		return new int(static_cast<int>(stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_List_Of_Busses(sysThreadId)->size() - 1));
	}
	void slif::Bus::generateProgram(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_App_FUNCT_slif_generate_Program(sysThreadId)." << std::endl;
		
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_boot1_DEFINE(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_boot3_INITIALISE(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_Bus(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_CLASS_Bus(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_Bus(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Bus(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_Bus(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Bus(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_Framework_create_Architecture(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, 3);
		auto list = new std::list<uint8_t>();
		list->resize(stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
		for (uint8_t i = 0; i < list->size(); i++) {
			list->assign(i, 2);
		}
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *list);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);

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
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_MutexQue_Of_For_Bus(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, 0));
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
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_MutexQue_Of_For_Bus(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, 0));
		return result;
	}
	void slif::Bus::load(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_DATA) {
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Data(sysThreadId)->dyn_REG_set_CLIB_Bus_Framework_App_Data_DATA(sysThreadId, CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_MsbByteArray_To_DATA(sysThreadId, reinterpret_cast<class Object*>(bytes_DATA)));
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
	}
	unsigned char* slif::Bus::unload(uint8_t* sysThreadId, Ticket ticket) {
		auto bytes_DATA = new unsigned char();
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Data(sysThreadId)->dyn_REG_get_CLIB_Bus_Framework_App_Data_DATA(sysThreadId)));
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		return bytes_DATA;
	}
	void slif::Bus::reInitialiseHandle(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_JUNCTIONS) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_MutexQue_Of_For_Bus(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, 0));
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
			stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, *MAX_NUMBER_OF_JUNCTIONS);
			auto list = new std::list<uint8_t>();
			list->resize(*MAX_NUMBER_OF_JUNCTIONS);
			for (uint8_t i = oldSize; i < *MAX_NUMBER_OF_JUNCTIONS; i++) {
				list->assign(i, 2);
			}
			stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *list);
			stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
			stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_MutexQue_Of_For_Bus(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, 0));
	}
	void slif::Bus::terminateProgram(uint8_t* sysThreadId) {
		slif::MutexQue::startByLock(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_MutexQue_Of_For_Bus(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, 0));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_Bus_Framework;
			delete stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : terminateProgram(sysThreadId)." << std::endl;
		slif::MutexQue::endByUnlock(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_MutexQue_Of_For_Bus(sysThreadId), CLIB_Bus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_Framework_Global_Msbuint8_t_To_MsbByteArray(sysThreadId, 0));
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

	void slif::Bus::stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_Bus_Framework = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_CLASS_boot1_DEFINE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	void slif::Bus::stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Bus : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_Bus_Framework = new class slif::CLIB_Bus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Bus : stat_CLASS_boot3_INITIALISE_CLIB_Bus_Framework(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_Framework* slif::Bus::stat_CLASS_get_ptr_CLIB_Bus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_Bus_Framework(uint8_t* sysThreadId)" << std::endl;
		return stat_REG_CLIB_Bus_Framework;
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

