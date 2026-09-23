#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include <iostream>
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
// public.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::CLIB_ThreadLogs_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::~CLIB_ThreadLogs_Framework_App() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
		std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(threadId);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
// private
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Execute(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = new class CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		while(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId) == nullptr) { }
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute = new class CLIB_ThreadLogs_Framework_App_Execute(threadId, MAX_NUMBER_OF_DATA_CLUSTERS, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		while(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId) == nullptr) { }
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Execute(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Execute(threadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute;
	}