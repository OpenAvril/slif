#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include <cfloat>
#include <iostream>
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::_stat_REG_ptr_Input_praise1_valueA;
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::_stat_REG_ptr_Input_praise1_valueB;
// public.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_boot1_DEFINE_Input_praise1()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Input_praise1()"));
		stat_REG_boot1_DEFINE_Input_praise1_valueA();
		stat_REG_boot1_DEFINE_Input_praise1_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Input_praise1()"));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_boot2_SUBSTANTIATE_Input_praise1()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Input_praise1()"));
		stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueA();
		stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Input_praise1()"));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_boot3_INITIALISE_Input_praise1()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Input_praise1()"));
		stat_REG_boot3_INITIALISE_Input_praise1_valueA();
		stat_REG_boot3_INITIALISE_Input_praise1_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Input_praise1()"));
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_get_Item_Input_praise1_valueA()
	{
		return *stat_REG_get_Ptr_Input_praise1_valueA();
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_get_Item_Input_praise1_valueB()
	{
		return *stat_REG_get_Ptr_Input_praise1_valueB();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_set_Item_Input_praise1_valueA(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise1_valueA() = newValue;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::dyn_REG_set_Item_Input_praise1_valueB(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise1_valueB() = newValue;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot1_DEFINE_Input_praise1_valueA()
	{
		_stat_REG_ptr_Input_praise1_valueA = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot1_DEFINE_Input_praise1_valueB()
	{
		_stat_REG_ptr_Input_praise1_valueB = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueA()
	{
		_stat_REG_ptr_Input_praise1_valueA = new double();
		*_stat_REG_ptr_Input_praise1_valueA = (double)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueB()
	{
		_stat_REG_ptr_Input_praise1_valueB = new double();
		*_stat_REG_ptr_Input_praise1_valueB = (double)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot3_INITIALISE_Input_praise1_valueA()
	{
		*_stat_REG_ptr_Input_praise1_valueA = (double)(1.2);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_boot3_INITIALISE_Input_praise1_valueB()
	{
		*_stat_REG_ptr_Input_praise1_valueA = (double)(2.6);
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_get_Ptr_Input_praise1_valueA()
	{
		return _stat_REG_ptr_Input_praise1_valueA;
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1::stat_REG_get_Ptr_Input_praise1_valueB()
	{
		return _stat_REG_ptr_Input_praise1_valueB;
	}