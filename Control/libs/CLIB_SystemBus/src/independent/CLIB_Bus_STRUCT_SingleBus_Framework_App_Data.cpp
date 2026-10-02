#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global.h"
#include <iostream>
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
// public.
	slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::~CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data() {
		std::cout << "thread "  << 0 << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()." << std::endl;
		delete stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
		std::cout << "thread "  << 0 << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()." << std::endl;
	}
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class Object* : get_DATA(sysThreadId)." << std::endl;
		return stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId);
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId, unsigned char* newValue_DATA) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: => class Object* : set_DATA(sysThreadId)." << std::endl;
		stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId, newValue_DATA);
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
// private.
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)." << std::endl;
		stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)." << std::endl;
		auto* DATA = new std::byte[1028];
		for (int i = 0; i < sizeof(*DATA); i++) {
			DATA[i] = std::byte{0xFF};
		}
		*stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = *CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)." << std::endl;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)." << std::endl;
		auto* DATA = new std::byte[1028];
		for (int i = 0; i < sizeof(*DATA); i++) {
			DATA[i] = std::byte{0x00};
		}
		*stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = *CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_Global::stat_APP_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_Bus_STRUCT_SingleBus_Framework_App_Data : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)." << std::endl;
	}
	unsigned char* slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId){
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class Object* : stat_get_DATA(sysThreadId)." << std::endl;
		return stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
	}
	void slif::CLIB_Bus_STRUCT_SingleBus_STRUCT_SingleBus_Framework_App_Data::stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(uint8_t* sysThreadId, unsigned char* newValue_DATA) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: => class Object* : stat_set_DATA(sysThreadId)." << std::endl;
		stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA = reinterpret_cast<unsigned char*>(newValue_DATA);
	}