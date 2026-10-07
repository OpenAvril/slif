#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Execute_Control.h"
#include <CLIB_ThreadLogs.h>
#include <thread>
	bool* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
	std::array<bool, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;//NUMBER OF THREADS.
	std::array<std::thread*, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads;
// public.
	slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId). "));
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId);
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId). "));
	}
	slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::~CLIB_OpenEpiCentre_Framework_App_Execute_Control() {
		delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
		delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
		delete stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : CLIB_OpenEpiCentre_Framework_App_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId);
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId, obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(sysThreadId, obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, obj);
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId, obj);
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(sysThreadId, obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	bool slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId) {
		return stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
	}
	bool slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* concurrnetThreadId)	{
		auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId)->begin();
		std::advance(temp, *concurrnetThreadId);
		return *temp;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, bool state) {
		stat_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, state);
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* concurrnetThreadId, bool state) {
		stat_set_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId, concurrnetThreadId, state);
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control(sysThreadId). "));
	}
// private.
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = new bool(sysThreadId);
		*stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = true;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = new std::array<bool, 3>();//todo number of concurrent threads.
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, concurrentThreadId);
			*temp = true;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads = new std::array<std::thread*, 3>;//todo number of concurrent threads.
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, concurrentThreadId);
			*temp = nullptr;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
		*stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = true;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, concurrentThreadId);
			*temp = true;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId, class CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(sysThreadId). "));
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, concurrentThreadId);
			*temp = new std::thread(slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_app_thread_Concurrency, sysThreadId, obj, &concurrentThreadId);
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(sysThreadId). "));
	}
	bool* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId) {
		bool* result = nullptr;
		result = new bool(false);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(*stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, concurrentThreadId);
			if (*temp == true) {
				*result = true;
				break;
			}
		}
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = result;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= std::array<bool, 3>* : stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
		return stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
	}
	std::array<bool, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= std::array<bool, 3>* : stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). "));
		return stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, bool newFLAG) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => bool : stat_REG_set_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(sysThreadId). "));
		*stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = newFLAG;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_set_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* threadId, bool state) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => bool : stat_set_ptr_CLIB_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->at(*threadId) = state;
	}