#include "SLIF_OptimusPrime.h"
#include "../Control/libs/SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../Control/libs/SLIF_LaunchQue/include/SLIF_LaunchQue.h"
#include <iostream>
	static std::array stat_REG_ptr_SLIF_OptimusPrime_array_of_array_of_isMemberFunctionINSTANTIATED = { true };
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
		*handleId = *SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(sysThreadId,INT8_MAX);
		auto bytes_concuurentsysThreadId = new unsigned char();
		*bytes_concuurentsysThreadId = *SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(sysThreadId,INT8_MAX);
		auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new std::byte();
		*MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<std::byte>(255);
		auto byte_bool = new unsigned char();
		*byte_bool = *SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId,true);

		slif::MutexQue::endByUnlock(sysThreadId, handleId, bytes_AccessId);
		int* tempA0 = slif::MutexQue::generateHandle(sysThreadId);
		//slif::MutexQue::generateProgram(sysThreadId);
		unsigned char* tempA1 = slif::MutexQue::isINSTANTIATED(sysThreadId);
		slif::MutexQue::reInitialiseHandle(sysThreadId, handleId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::MutexQue::startByLock(sysThreadId, handleId, bytes_AccessId);
		slif::MutexQue::terminateProgram(sysThreadId, handleId);

		int* tempB0 = slif::LaunchQue::generateHandle(sysThreadId);
		//slif::LaunchQue::generateProgram(sysThreadId);
		unsigned char* tempB1 = slif::LaunchQue::get_coreIdTolaunch(sysThreadId, handleId);
		unsigned char* tempB2 = slif::LaunchQue::get_FlagSTATEisActive(sysThreadId, handleId);
		unsigned char* tempB3 = slif::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, handleId, bytes_concuurentsysThreadId);
		unsigned char* tempB4 = slif::LaunchQue::get_FlagisIdle(sysThreadId, handleId);
		unsigned char* tempB5 = slif::LaunchQue::get_FlagSTATEofThreadToLaunch(sysThreadId, handleId);
		unsigned char* tempB6 =  slif::LaunchQue::isINSTANTIATED(sysThreadId);
		slif::LaunchQue::reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::LaunchQue::set_FlagSTATEofConcurrentCore(sysThreadId, handleId, bytes_concuurentsysThreadId, byte_bool);
		slif::LaunchQue::terminateProgaram(sysThreadId);
		slif::LaunchQue::threadRequestlaunch(sysThreadId, handleId, bytes_concuurentsysThreadId);
		slif::LaunchQue::threadEnd(sysThreadId, handleId, bytes_concuurentsysThreadId);
	}
	std::array<bool, 1> slif::OptimusPrime::slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_ptr_SLIF_OptimusPrime_array_of_array_of_isMemberFunctionINSTANTIATED;
	}