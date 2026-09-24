#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include <cfloat>
#include <iostream>
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::_stat_REG_ptr_Input_praise3_valueA;
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::_stat_REG_ptr_Input_praise3_valueB;
// public.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_boot1_DEFINE_Input_praise3()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Input_praise3()"));
		stat_REG_boot1_DEFINE_Input_praise3_valueA();
		stat_REG_boot1_DEFINE_Input_praise3_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Input_praise3()"));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_boot2_SUBSTANTIATE_Input_praise3()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Input_praise3()"));
		stat_REG_boot2_SUBSTANTIATE_Input_praise3_valueA();
		stat_REG_boot2_SUBSTANTIATE_Input_praise3_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Input_praise3()"));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_boot3_INITIALISE_Input_praise3()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Input_praise3()"));
		stat_REG_boot3_INITIALISE_Input_praise3_valueA();
		stat_REG_boot3_INITIALISE_Input_praise3_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Input_praise3()"));
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_get_Item_Input_praise3_valueA()
	{
		return *stat_REG_get_Ptr_Input_praise3_valueA();
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_get_Item_Input_praise3_valueB()
	{
		return *stat_REG_get_Ptr_Input_praise3_valueB();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_set_Item_Input_praise3_valueA(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise3_valueA() = newValue;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::dyn_REG_set_Item_Input_praise3_valueB(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise3_valueB() = newValue;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_boot1_DEFINE_Input_praise3_valueA()
	{
		_stat_REG_ptr_Input_praise3_valueA = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_boot1_DEFINE_Input_praise3_valueB()
	{
		_stat_REG_ptr_Input_praise3_valueB = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_boot2_SUBSTANTIATE_Input_praise3_valueA()
	{
		_stat_REG_ptr_Input_praise3_valueA = new double();
		*_stat_REG_ptr_Input_praise3_valueA = (double)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_boot2_SUBSTANTIATE_Input_praise3_valueB()
	{
		_stat_REG_ptr_Input_praise3_valueB = new double();
		*_stat_REG_ptr_Input_praise3_valueB = (double)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_boot3_INITIALISE_Input_praise3_valueA()
	{
		*_stat_REG_ptr_Input_praise3_valueA = (double)(1.2);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_boot3_INITIALISE_Input_praise3_valueB()
	{
		*_stat_REG_ptr_Input_praise3_valueA = (double)(2.6);
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_get_Ptr_Input_praise3_valueA()
	{
		return _stat_REG_ptr_Input_praise3_valueA;
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3::stat_REG_get_Ptr_Input_praise3_valueB()
	{
		return _stat_REG_ptr_Input_praise3_valueB;
	}