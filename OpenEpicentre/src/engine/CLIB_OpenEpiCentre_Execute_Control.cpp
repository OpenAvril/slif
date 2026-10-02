#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Execute_Control.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
#include <thread>
	bool* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
	std::array<bool, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;//NUMBER OF THREADS.
	std::array<std::thread*, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads;
// public.
	slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::CLIB_OpenEpiCentre_Framework_App_Execute_Control(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_Framework_App_Execute_Control()."));
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Framework_App_Execute_Control()."));
	}
	slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::~CLIB_OpenEpiCentre_Framework_App_Execute_Control() {
		delete _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
		delete _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
		delete _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
		stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised();
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised();
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
		stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
		stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: a"));
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: B"));
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(obj);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control(slif::CLIB_OpenEpiCentre_Framework* obj) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	bool slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised() {
		return stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised();
	}
	bool slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t concurrnetsysThreadId)	{
		auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
		std::advance(temp, concurrnetsysThreadId);
		return *temp;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(bool state) {
		*stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised() = state;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t concurrnetsysThreadId, bool state)	{
		stat_set_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrnetsysThreadId, state);
	}

	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()
	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()
	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()
	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));

		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_App_Execute_Control()"));
	}
// private.
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised() {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = nullptr;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised() {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = nullptr;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads() {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads = nullptr;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(slif::CLIB_OpenEpiCentre_Framework* obj)
	{
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = new bool();
		*_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = true;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(slif::CLIB_OpenEpiCentre_Framework* obj)
	{
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = new std::array<bool, 3>();//todo number of concurrent threads.
		for (uint8_t* sysThreadId = 0; sysThreadId < stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()->size(); sysThreadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, sysThreadId);
			*temp = true;
		}
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(slif::CLIB_OpenEpiCentre_Framework* obj) {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads = new std::array<std::thread*, 3>;//todo number of concurrent threads.
		for (uint8_t* sysThreadId = 0; sysThreadId < _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->size(); sysThreadId++) {
			auto temp = _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, sysThreadId);
			*temp = nullptr;
		}
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(slif::CLIB_OpenEpiCentre_Framework* obj) {
		*_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = true;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(slif::CLIB_OpenEpiCentre_Framework* obj)	{
		for (uint8_t* sysThreadId = 0; sysThreadId < stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()->size(); sysThreadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, sysThreadId);
			*temp = true;
		}
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads(class CLIB_OpenEpiCentre_Framework* obj) {
		for (uint8_t concurrentsysThreadId = 0; concurrentsysThreadId < _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->size(); concurrentsysThreadId++) {
			auto temp = _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, concurrentsysThreadId);
			*temp = new std::thread(slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_app_thread_Concurrency, obj, concurrentsysThreadId);
		}
	}
	bool* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised()
	{
		bool* result = nullptr;
		result = new bool(false);
		for (uint8_t* sysThreadId = 0; sysThreadId < sizeof(*_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised); sysThreadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, sysThreadId);
			if (*temp == true) {
				*result = true;
				break;
			}
		}
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = result;
		return _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised;
	}
	std::array<bool, 3>* slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_get_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised()
	{
		return _stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_REG_set_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(bool newFLAG_)
	{
		*_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised = newFLAG_;
	}
	void slif::CLIB_OpenEpiCentre_Framework_App_Execute_Control::stat_set_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t* sysThreadId, bool state) {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->at(sysThreadId) = state;
	}