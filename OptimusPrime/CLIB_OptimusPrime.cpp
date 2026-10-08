#include "CLIB_OptimusPrime.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/include/CLIB_MutexQue_Framework_Global.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/include/CLIB_ThreadLogs_Framework_Global.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/include/CLIB_LaunchQue_Framework_Global.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_Ticket.h"
#include <iostream>
	static std::array stat_REG_ptr_CLIB_OptimusPrime_array_of_array_of_isMemberFunctionINSTANTIATED = { true };
// public.
	void slif::OptimusPrime::instantiateAll(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : OptimusPrime : instantiateAll(sysThreadId)." << std::endl;
		if (!slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0)) {
			slif_OptimusPrime_App_FUNCT_OptimusPrime(sysThreadId);
			std::cout << "thread " << std::to_string(*sysThreadId) << " :: OptimusPrime : PRIMING PACKAGE." << std::endl;
		}
		else {
			slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0) = !slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : OptimusPrime : instantiateAll(sysThreadId)." << std::endl;
	}
// private.
	void slif::OptimusPrime::slif_OptimusPrime_App_FUNCT_OptimusPrime(uint8_t* sysThreadId) {
		auto handleId = new int();
		*handleId = INT16_MAX;
		auto bytes_AccessId = new unsigned char();
		*handleId = *CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId,new uint8_t(INT8_MAX));
		auto bytes_concuurentsysThreadId = new unsigned char();
		*bytes_concuurentsysThreadId = *CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId,new uint8_t(INT8_MAX));
		auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new uint8_t();
		*MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<uint8_t>(255);
		auto string = new std::string("");
		auto byte_bool = new unsigned char();
		*byte_bool = *CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId,true);
		auto ticket = new class Ticket(0,0,0,0,0);
		auto bytes_Cargo = new unsigned char();
		class slif::Object* value_DATA = nullptr;
		bytes_Cargo = CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, value_DATA);
		auto MAX_NUMBER_OF_JUNCTIONS = new uint8_t();
		*MAX_NUMBER_OF_JUNCTIONS = static_cast<uint8_t>(255);

		slif::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, handleId), bytes_AccessId);
		int* tempA0 = CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, slif::MutexQue::generateHandle(sysThreadId));
		//slif::MutexQue::generateProgram(sysThreadId);
		unsigned char* tempA1 = slif::MutexQue::isINSTANTIATED(sysThreadId);
		slif::MutexQue::reInitialiseHandle(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, handleId), CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS));
		slif::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, handleId), bytes_AccessId);
		slif::MutexQue::terminateProgram(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, handleId));

		//slif::ThreadLogs::generateProgram(uint8_t* sysThreadId);
		unsigned char* tempB0 = slif::ThreadLogs::isINSTANTIATED(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, string);
		slif::ThreadLogs::reInitialiseHandle(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::ThreadLogs::terminateProgram(sysThreadId);

		int* tempC0 = slif::LaunchQue::generateHandle(sysThreadId);
		//slif::LaunchQue::generateProgram(sysThreadId);
		unsigned char* tempC1 = slif::LaunchQue::get_coreIdTolaunch(sysThreadId, handleId);
		unsigned char* tempC2 = slif::LaunchQue::get_FlagSTATEisActive(sysThreadId, handleId);
		unsigned char* tempC3 = slif::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, handleId, bytes_concuurentsysThreadId);
		unsigned char* tempC4 = slif::LaunchQue::get_FlagisIdle(sysThreadId, handleId);
		unsigned char* tempC5 = slif::LaunchQue::get_FlagSTATEofThreadToLaunch(sysThreadId, handleId);
		unsigned char* tempC6 =  slif::LaunchQue::isINSTANTIATED(sysThreadId);
		slif::LaunchQue::reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::LaunchQue::set_FlagSTATEofConcurrentCore(sysThreadId, handleId, bytes_concuurentsysThreadId, byte_bool);
		slif::LaunchQue::terminateProgaram(sysThreadId);
		slif::LaunchQue::threadRequestlaunch(sysThreadId, handleId, bytes_concuurentsysThreadId);
		slif::LaunchQue::threadEnd(sysThreadId, handleId, bytes_concuurentsysThreadId);

		int* tempD0 = slif::Stemisphore::generateHandle(sysThreadId);
		//slif::SystemBusses::generateProgram(sysThreadId);
		unsigned char* tempD1 = slif::Stemisphore::isINSTANTIATED(sysThreadId);
		slif::Stemisphore::load(sysThreadId, *ticket, bytes_Cargo);
		slif::Stemisphore::reInitialiseHandle(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
		unsigned char* tempD2 = slif::Stemisphore::unload(sysThreadId, *ticket);
		slif::Stemisphore::terminateProgram(sysThreadId);
	}
	std::array<bool, 1> slif::OptimusPrime::slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_ptr_CLIB_OptimusPrime_array_of_array_of_isMemberFunctionINSTANTIATED;
	}