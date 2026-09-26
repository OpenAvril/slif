#include "SLIF_OptimusPrime.h"
#include "../Control/libs/SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../Control/libs/SLIF_LaunchQue/include/SLIF_LaunchQue.h"
#include <iostream>
	static std::array stat_REG_ptr_SLIF_OptimusPrime_array_of_array_of_isMemberFunctionINSTANTIATED = { true };
// public.
	void slif::OptimusPrime::instantiateAll(uint8_t* threadId) {
		std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : OptimusPrime : instantiateAll(threadId)." << std::endl;
		if (!slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId).at(0)) {
			slif_OptimusPrime_App_FUNCT_OptimusPrime(threadId);
			std::cout << "thread " << std::to_string(*threadId) << " :: OptimusPrime : PRIMING PACKAGE." << std::endl;
		}
		else {
			slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId).at(0) = !slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId).at(0);
		}
		std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : OptimusPrime : instantiateAll(threadId)." << std::endl;
	}
// private.
	void slif::OptimusPrime::slif_OptimusPrime_App_FUNCT_OptimusPrime(uint8_t* threadId) {
		auto handleId = new int();
		*handleId = INT16_MAX;
		auto bytes_AccessId = new unsigned char();
		*handleId = *SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(threadId,INT8_MAX);
		auto bytes_concuurentThreadId = new unsigned char();
		*bytes_concuurentThreadId = *SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_Msb_uint8_t_to_MsbByteArray(threadId,INT8_MAX);
		auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new std::byte();
		*MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<std::byte>(255);
		auto byte_bool = new unsigned char();
		*byte_bool = *SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId,true);

		slif::MutexQue::endByUnlock(threadId, handleId, bytes_AccessId);
		int* tempA0 = slif::MutexQue::generateHandle(threadId);
		//slif::MutexQue::generateProgram(threadId);
		unsigned char* tempA1 = slif::MutexQue::isINSTANTIATED(threadId);
		slif::MutexQue::reInitialiseHandle(threadId, handleId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::MutexQue::startByLock(threadId, handleId, bytes_AccessId);
		slif::MutexQue::terminateProgram(threadId, handleId);

		int* tempB0 = slif::LaunchQue::generateHandle(threadId);
		//slif::LaunchQue::generateProgram(threadId);
		unsigned char* tempB1 = slif::LaunchQue::get_coreIdTolaunch(threadId, handleId);
		unsigned char* tempB2 = slif::LaunchQue::get_FlagSTATEisActive(threadId, handleId);
		unsigned char* tempB3 = slif::LaunchQue::get_FlagSTATEofConcurrentCore(threadId, handleId, bytes_concuurentThreadId);
		unsigned char* tempB4 = slif::LaunchQue::get_FlagisIdle(threadId, handleId);
		unsigned char* tempB5 = slif::LaunchQue::get_FlagSTATEofThreadToLaunch(threadId, handleId);
		unsigned char* tempB6 =  slif::LaunchQue::isINSTANTIATED(threadId);
		slif::LaunchQue::reInitialiseHandle(threadId, handleId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::LaunchQue::set_FlagSTATEofConcurrentCore(threadId, handleId, bytes_concuurentThreadId, byte_bool);
		slif::LaunchQue::terminateProgaram(threadId);
		slif::LaunchQue::threadRequestlaunch(threadId, handleId, bytes_concuurentThreadId);
		slif::LaunchQue::threadEnd(threadId, handleId, bytes_concuurentThreadId);
	}
	std::array<bool, 1> slif::OptimusPrime::slif_OptimusPrime_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
		return stat_REG_ptr_SLIF_OptimusPrime_array_of_array_of_isMemberFunctionINSTANTIATED;
	}