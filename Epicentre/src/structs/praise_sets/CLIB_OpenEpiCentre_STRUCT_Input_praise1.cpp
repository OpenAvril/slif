#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include <cfloat>
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
	double* slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::_stat_REG_ptr_Input_praise1_valueA;
	double* slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::_stat_REG_ptr_Input_praise1_valueB;
// public.
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_boot1_DEFINE_Input_praise1()
	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Input_praise1()" << std::endl;
		stat_REG_boot1_DEFINE_Input_praise1_valueA();
		stat_REG_boot1_DEFINE_Input_praise1_valueB();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Input_praise1()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_boot2_SUBSTANTIATE_Input_praise1()
	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Input_praise1()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueA();
		stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueB();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Input_praise1()" << std::endl;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_boot3_INITIALISE_Input_praise1()
	{
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Input_praise1()" << std::endl;
		stat_REG_boot3_INITIALISE_Input_praise1_valueA();
		stat_REG_boot3_INITIALISE_Input_praise1_valueB();
		slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Input_praise1()" << std::endl;
	}
	double slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_get_Item_Input_praise1_valueA()
	{
		return *stat_REG_get_Ptr_Input_praise1_valueA();
	}
	double slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_get_Item_Input_praise1_valueB()
	{
		return *stat_REG_get_Ptr_Input_praise1_valueB();
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_set_Item_Input_praise1_valueA(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise1_valueA() = newValue;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_set_Item_Input_praise1_valueB(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise1_valueB() = newValue;
	}
// private.
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot1_DEFINE_Input_praise1_valueA()
	{
		_stat_REG_ptr_Input_praise1_valueA = nullptr;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot1_DEFINE_Input_praise1_valueB()
	{
		_stat_REG_ptr_Input_praise1_valueB = nullptr;
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueA()
	{
		_stat_REG_ptr_Input_praise1_valueA = new double();
		*_stat_REG_ptr_Input_praise1_valueA = (double)(FLT_MAX);
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueB()
	{
		_stat_REG_ptr_Input_praise1_valueB = new double();
		*_stat_REG_ptr_Input_praise1_valueB = (double)(FLT_MAX);
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot3_INITIALISE_Input_praise1_valueA()
	{
		*_stat_REG_ptr_Input_praise1_valueA = (double)(1.2);
	}
	void slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot3_INITIALISE_Input_praise1_valueB()
	{
		*_stat_REG_ptr_Input_praise1_valueA = (double)(2.6);
	}
	double* slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_get_Ptr_Input_praise1_valueA()
	{
		return _stat_REG_ptr_Input_praise1_valueA;
	}
	double* slif::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_get_Ptr_Input_praise1_valueB()
	{
		return _stat_REG_ptr_Input_praise1_valueB;
	}