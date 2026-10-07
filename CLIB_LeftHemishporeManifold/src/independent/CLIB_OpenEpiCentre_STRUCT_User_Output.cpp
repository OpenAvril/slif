#include "../../include/independent/CLIB_OpenEpiCentre_STRUCT_User_Output.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise0* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0;
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise1* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1;
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise2* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2;
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise3* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3;
// public.
	slif::Object* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t* sysThreadId, unsigned long long* praiseId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId). "));
		auto* result = new  std::list<slif::Object*>(1);
		auto temp = result->begin();
		std::advance(temp, 0);
		switch (*praiseId) {
			case 0:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(sysThreadId));
				break;

			case 1:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId));
				break;

			case 2:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId));
				break;

			case 3:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId));
				break;

			default:
				break;
		}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId). "));
		return *result->begin();
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_UserOutput(sysThreadId). "));
	}
// private.
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Outputpraise0(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3 = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise0();
		while(stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise1();
		while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise2();
		while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId). "));
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId). "));
		stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3 = new class slif::CLIB_OpenEpiCentre_STRUCT_Output_praise3();
		while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId) == nullptr) {}
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Output : stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId). "));
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise0* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0(sysThreadId). "));
		return stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise0;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise1* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1(sysThreadId). "));
		return stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise1;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise2* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2(sysThreadId). "));
		return stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise2;
	}
	slif::CLIB_OpenEpiCentre_STRUCT_Output_praise3* slif::CLIB_OpenEpiCentre_STRUCT_User_Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class : stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3(sysThreadId). "));
		return stat_REG_ptr_CLIB_OpenEpiCentre_STRUCT_UserOutput_Output_praise3;
	}