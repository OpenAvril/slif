#include "CLIB_Optimus.h"
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
//=== Optimus
	static std::array<bool, 1> stat_REG_ptr_CLIB_Optimus_array_of_array_of_isMemberFunctionINSTANTIATED = { true };
// public.
	void slif::Optimus::prime(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : Optimus : prime(sysThreadId)." << std::endl;
		if (!slif_Optimus_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0)) {
			slif_Optimus_App_FUNCT_prime(sysThreadId);
			std::cout << "thread " << std::to_string(*sysThreadId) << " :: Optimus : PRIMING PACKAGE." << std::endl;
		}
		else {
			slif_Optimus_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0) = !slif_Optimus_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : Optimus : prime(sysThreadId)." << std::endl;
	}
// private.
	void slif::Optimus::slif_Optimus_App_FUNCT_prime(uint8_t* sysThreadId) {
		auto handleId = new unsigned char();
		handleId = valueofMsbInt_To_MsbByteArray(sysThreadId,new int(INT_MAX));
		auto bytes_AccessId = new unsigned char();
		bytes_AccessId = valueofMsbuint8_t_To_MsbByteArray(sysThreadId, new uint8_t(255));
		
		auto bytes_concuurentThreadId = new unsigned char();
		bytes_concuurentThreadId = valueofMsbuint8_t_To_MsbByteArray(sysThreadId,new uint8_t(INT8_MAX));
		
		auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new uint8_t();
		*MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<uint8_t>(255);
		
		auto string = new std::string("");
		
		auto byte_bool = new unsigned char();
		byte_bool = valueofMsbBool_to_MsbByteArray(sysThreadId,true);
		
		auto ticket = new class Ticket(0,0,0,0,0);
		
		auto bytes_Cargo = new unsigned char();
		class slif::Object* value_DATA = nullptr;
		bytes_Cargo = objDATA_To_MsbByteArray(sysThreadId, value_DATA);
		
		auto MAX_NUMBER_OF_JUNCTIONS = new uint8_t();
		*MAX_NUMBER_OF_JUNCTIONS = static_cast<uint8_t>(255);

		slif::MutexQue::endByUnlock(sysThreadId, handleId, bytes_AccessId);
		int* tempA0 = msbByteArray_To_valueOfmsbInt(sysThreadId, slif::MutexQue::generateHandle(sysThreadId));
		//slif::MutexQue::generateProgram(sysThreadId);
		unsigned char* tempA1 = slif::MutexQue::isINSTANTIATED(sysThreadId);
		slif::MutexQue::reInitialiseHandle(sysThreadId, handleId, valueofMsbuint8_t_To_MsbByteArray(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS));
		slif::MutexQue::startByLock(sysThreadId, handleId, bytes_AccessId);
		slif::MutexQue::terminateProgram(sysThreadId, handleId);

		//slif::ThreadLogs::generateProgram(uint8_t* sysThreadId);
		unsigned char* tempB0 = slif::ThreadLogs::isINSTANTIATED(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, string);
		slif::ThreadLogs::reInitialiseHandle(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::ThreadLogs::terminateProgram(sysThreadId);

		int* tempC0 = slif::LaunchQue::generateHandle(sysThreadId);
		//slif::LaunchQue::generateProgram(sysThreadId);
		unsigned char* tempC1 = slif::LaunchQue::get_coreIdTolaunch(sysThreadId, handleId, bytes_AccessId);
		unsigned char* tempC2 = slif::LaunchQue::get_FlagSTATEisActive(sysThreadId, handleId, bytes_AccessId);
		unsigned char* tempC3 = slif::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, handleId, bytes_concuurentThreadId);
		unsigned char* tempC4 = slif::LaunchQue::get_FlagisIdle(sysThreadId, handleId, bytes_AccessId);
		unsigned char* tempC5 = slif::LaunchQue::get_FlagSTATEofThreadToLaunch(sysThreadId, handleId, bytes_AccessId);
		unsigned char* tempC6 =  slif::LaunchQue::isINSTANTIATED(sysThreadId);
		slif::LaunchQue::reInitialiseHandle(sysThreadId, handleId, bytes_AccessId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif::LaunchQue::set_FlagSTATEofConcurrentCore(sysThreadId, handleId, bytes_concuurentThreadId, byte_bool);
		slif::LaunchQue::terminateProgaram(sysThreadId);
		slif::LaunchQue::threadRequestlaunch(sysThreadId, handleId, bytes_concuurentThreadId);
		slif::LaunchQue::threadEnd(sysThreadId, handleId, bytes_concuurentThreadId);

		int* tempD0 = slif::Stemisphore::generateHandle(sysThreadId);
		//slif::SystemBusses::generateProgram(sysThreadId);
		unsigned char* tempD1 = slif::Stemisphore::isINSTANTIATED(sysThreadId);
		slif::Stemisphore::load(sysThreadId, *ticket, bytes_Cargo);
		slif::Stemisphore::reInitialiseHandle(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
		unsigned char* tempD2 = slif::Stemisphore::unload(sysThreadId, *ticket);
		slif::Stemisphore::terminateProgram(sysThreadId);
	}
	std::array<bool, 1> slif::Optimus::slif_Optimus_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_ptr_CLIB_Optimus_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	class slif::Object* slif::Optimus::msbByteArray_To_ObjDATA(uint8_t* sysThreadId, unsigned char* byteArray_DATA) {
		return reinterpret_cast<slif::Object*>(byteArray_DATA);
	}
	bool slif::Optimus::msbByteArray_To_valueOfmsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
		return (bytes_Array[7] & 1) != 0;
	}
	int* slif::Optimus::msbByteArray_To_valueOfmsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
		int* temp;
		temp = new int();
		std::memcpy(&temp, bytes_Array, sizeof(int));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
		return temp;
	}
	double* slif::Optimus::msbByteArray_To_valueOfmsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
		double* temp;
		temp = new double();
		std::memcpy(&temp, bytes_Array, sizeof(double));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
		return temp;
	}
	uint8_t* slif::Optimus::msbByteArray_To_valueOfmsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
		uint8_t* temp;
		temp = new uint8_t();
		std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
		return temp;
	}
	unsigned long long* slif::Optimus::msbByteArray_To_valueOfmsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
		unsigned long long* temp;
		temp = new unsigned long long();
		std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
		return temp;
	}
	unsigned char* slif::Optimus::objDATA_To_MsbByteArray(uint8_t* sysThreadId, class slif::Object* DATA) {
		return reinterpret_cast<unsigned char*>(DATA);
	}
	unsigned char* slif::Optimus::valueofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char();
		for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
			buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* slif::Optimus::valueofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
		std::memcpy(buffer, &newValue_Int, sizeof(int));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* slif::Optimus::valueofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
		std::memcpy(buffer, &newValue_Double, sizeof(double));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* slif::Optimus::valueofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* newValue_ULongLong) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
		std::memcpy(buffer, &newValue_ULongLong, sizeof(unsigned long long));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* slif::Optimus::valueofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<uint8_t>(255));
		std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
		std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}