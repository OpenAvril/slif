#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_User_Output.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise0* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0;
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise1* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1;
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise2* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2;
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise3* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3;
// public.
	slif::Object* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(unsigned long long praiseId) {
		auto* result = new  std::list<slif::Object*>(1);
		auto temp = result->begin();
		std::advance(temp, 0);
		switch (praiseId) {
			case 0:
				*temp = reinterpret_cast<slif::Object *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0());
				break;

			case 1:
				*temp = reinterpret_cast<slif::Object *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1());
				break;

			case 2:
				*temp = reinterpret_cast<slif::Object *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2());
				break;

			case 3:
				*temp = reinterpret_cast<slif::Object *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3());
				break;

			default:
				break;
		}
		return *result->begin();
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput()" << std::endl;
	}
// private.
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise0();
		while(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0() == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise1();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1() == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise2();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2() == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3() {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise3();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3() == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()" << std::endl;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise0* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0()	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise1* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1()	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise2* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2()	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise3* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3()	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3;
	}