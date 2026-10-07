#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus.h"
#include "../../CLIB_MutexQue/include/CLIB_MutexQue.h"
#include "../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_Ticket.h"
#include "CLIB_ThreadLogs.h"
#include <array>
#include <cstdint>
	static slif::CLIB_Bus_STRUCT_SingleBus_Framework* stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
	static std::array<bool, 4>* stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
// public.
	int* slif::CLIB_Bus_STRUCT_SingleBus::generateHandle(uint8_t* sysThreadId) {
		auto oldSize = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->resize(oldSize+1);
		for (uint8_t i = oldSize; i < stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size(); i++) {
			auto temp = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
			std::advance(temp, i);
			temp = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
		}
		return new int(static_cast<int>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size() - 1));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::generateProgram(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_App_FUNCT_slif_generate_Program(sysThreadId)."));
		
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE."));
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE."));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings."));
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings."));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Architecture(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Registers - DEFINE"));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done Registers - DEFINE."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Registers - SUBSTANTIATE."));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done Registers - SUBSTANTIATE."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Registers - INITIALISE."));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done Registers - INITIALISE."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE."));

		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, 3);
		auto list = new std::list<uint8_t>();
		list->resize(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
		for (uint8_t i = 0; i < list->size(); i++) {
			list->assign(i, 2);
		}
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *list);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: started Program - INSTANTIATION."));
		stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: done Program - INSTANTIATION."));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" ::         ,     \\      /      ,"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" ::         ,     \\      /      ,"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" ::        / \\    )\\ _ /(     / \\ "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" ::       /   \\   (_\\  /_)    /   \\ "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: __ / __\\_ \\@  @/ __/___\\___"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |              |\\../|               |"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |               \\VV/                |"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |      Open Source MIT Package       |"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |      OpenAvril : CLIB_Bus_STRUCT_SingleBus        |"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |__________________|"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |    / \\ /        \\\\        \\ /\\    |"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |  /    V          ))        V   \\  |"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: |/                //               \\| "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: `                 V                 '"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_App_FUNCT_slif_generate_Program(sysThreadId)."));
	}
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus::isINSTANTIATED(uint8_t* sysThreadId) {
		slif::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, 0));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : isINSTANTIATED(sysThreadId)."));
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
		result = CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *temp);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" ::  exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : isINSTANTIATED(sysThreadId)."));
		slif::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, 0));
		return result;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::load(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_DATA) {
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId, CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(bytes_DATA)));
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
	}
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus::unload(uint8_t* sysThreadId, Ticket ticket) {
		auto bytes_DATA = new unsigned char();
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)));
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		return bytes_DATA;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS) {
			slif::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, 0));
				if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
			auto list = new std::list<uint8_t>();
			list->resize(MAX_NUMBER_OF_JUNCTIONS);
			for (uint8_t i = oldSize; i < MAX_NUMBER_OF_JUNCTIONS; i++) {
				list->assign(i, 2);
			}
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *list);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		slif::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, 0));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::terminateProgram(uint8_t* sysThreadId) {
		slif::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, 0));
			slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : terminateProgram(sysThreadId)."));
		if (!stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
			delete stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : terminateProgram(sysThreadId)."));
		slif::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, 0));
	}
// private.
	void slif::CLIB_Bus_STRUCT_SingleBus::stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(sysThreadId)."));
		stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < static_cast<uint8_t>(stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			if (stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_APP_FUNCT_slif_Calc_IsAllINSTANTIATED(sysThreadId)."));
	}

	void slif::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot1_DEFINE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)."));
		stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot1_DEFINE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot3_INITIALISE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)."));
		stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework = new class slif::CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot3_INITIALISE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework* slif::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class: stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId)"));
		return stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)."));
		stat_REG_flag_slif_isMemberFunctionINSTANTIATED = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot1_DEFINE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)."));
		stat_REG_flag_slif_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot2_SUBSTANTIATE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)."));
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_slif_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot3_INITIALISE_slif_array_Of_flag_isINSTANTIATED(sysThreadId)."));
	}
	std::array<bool, 4>*  slif::CLIB_Bus_STRUCT_SingleBus::stat_REG_get_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= std::array<bool, 4>* : stat_REG_get_slif_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId)"));
		return stat_REG_flag_slif_isMemberFunctionINSTANTIATED;
	}

