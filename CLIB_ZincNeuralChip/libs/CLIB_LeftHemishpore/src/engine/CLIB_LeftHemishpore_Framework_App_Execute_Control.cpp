#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Execute_Control.h"
#include <iostream>
#include <thread>
	bool* slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised;
	std::list<bool>* slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;//NUMBER OF THREADS.
	std::list<std::thread*>* slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads;
// public.
	slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId);
		stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::~CLIB_LeftHemishpore_Framework_App_Execute_Control() {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised;
		delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
		delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads;
		std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
		stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId);
		stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId, obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId, obj);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, obj);
		stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId, obj);
		stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId, obj);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	bool slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		return stat_REG_get_ptr_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
	}
	bool slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_get_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* concurrnetThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_REG_get_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;

	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_set_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, bool state) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		stat_REG_set_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, state);
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::dyn_REG_set_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t* concurrnetThreadId, bool state) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : dyn_REG_set_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		stat_set_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId, concurrnetThreadId, state);
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
// private.
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised = new bool(sysThreadId);
		*stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised = true;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = new std::list<bool>();
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->resize(*CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Implemented_Cores(sysThreadId));
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, concurrentThreadId);
			*temp = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads = new std::list<std::thread*>();
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads->resize(*CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Implemented_Cores(sysThreadId));
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, concurrentThreadId);
			*temp = nullptr;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		*stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised = true;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, slif::CLIB_LeftHemishpore_Framework* obj)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, concurrentThreadId);
			*temp = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, concurrentThreadId);
			*temp = new std::thread(slif::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_app_thread_Concurrency, sysThreadId, obj, &concurrentThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	bool* slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_get_ptr_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId) {
		bool* result = nullptr;
		result = new bool(false);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(*stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, concurrentThreadId);
			if (*temp == true) {
				*result = true;
				break;
			}
		}
		stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised = result;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool, 3>* : stat_REG_get_ptr_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised;
	}
	std::list<bool>* slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool, 3>* : stat_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		auto temp = stat_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId)->begin();
		std::advance(temp, *concurrnetThreadId);
		return *temp;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_REG_set_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(uint8_t* sysThreadId, bool newFLAG) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		*stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised = newFLAG;
	}
	void slif::CLIB_LeftHemishpore_Framework_App_Execute_Control::stat_set_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, uint8_t threadId, bool state) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: => bool : stat_set_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		auto temp = stat_REG_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
		std::advance(temp, threadId);
		*temp = state;
	}