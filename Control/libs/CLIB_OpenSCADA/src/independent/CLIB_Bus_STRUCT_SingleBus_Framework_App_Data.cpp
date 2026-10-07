#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.h"
#include "../../CLIB_OpenSCADA/include/CLIB_SystemBus_Framework_Global.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "CLIB_ThreadLogs.h"
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
// public.
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::~CLIB_Bus_STRUCT_SingleBus_Framework_App_Data() {
		slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()."));
		delete stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
		slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()."));
	}
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class Object* : get_DATA(sysThreadId)."));
		return stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId);
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId, unsigned char* newValue_DATA) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => class Object* : set_DATA(sysThreadId)."));
		stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId, newValue_DATA);
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)."));
	}
// private.
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)."));
		stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = nullptr;
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)."));
		auto* DATA = new std::byte[1028];
		for (int i = 0; i < sizeof(*DATA); i++) {
			DATA[i] = std::byte{0xFF};
		}
		*stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = *CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)."));
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)."));
		auto* DATA = new std::byte[1028];
		for (int i = 0; i < sizeof(*DATA); i++) {
			DATA[i] = std::byte{0x00};
		}
		*stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = *CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA));
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)."));
	}
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId){
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= class Object* : stat_get_DATA(sysThreadId)."));
		return stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data::stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId, unsigned char* newValue_DATA) {
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => class Object* : stat_set_DATA(sysThreadId)."));
		stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = reinterpret_cast<unsigned char*>(newValue_DATA);
	}