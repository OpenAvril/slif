#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.h"
#include <cfloat>
#include <iostream>
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::_stat_REG_ptr_Input_praise2_valueA;
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::_stat_REG_ptr_Input_praise2_valueB;
// public.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_boot1_DEFINE_Input_praise2()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Input_praise2()"));
		stat_REG_boot1_DEFINE_Input_praise2_valueA();
		stat_REG_boot1_DEFINE_Input_praise2_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Input_praise2()"));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_boot2_SUBSTANTIATE_Input_praise2()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Input_praise2()"));
		stat_REG_boot2_SUBSTANTIATE_Input_praise2_valueA();
		stat_REG_boot2_SUBSTANTIATE_Input_praise2_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Input_praise2()"));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_boot3_INITIALISE_Input_praise2()
	{
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Input_praise2()"));
		stat_REG_boot3_INITIALISE_Input_praise2_valueA();
		stat_REG_boot3_INITIALISE_Input_praise2_valueB();
		CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Input_praise2()"));
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_get_Item_Input_praise2_valueA()
	{
		return *stat_REG_get_Ptr_Input_praise2_valueA();
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_get_Item_Input_praise2_valueB()
	{
		return *stat_REG_get_Ptr_Input_praise2_valueB();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_set_Item_Input_praise2_valueA(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise2_valueA() = newValue;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::dyn_REG_set_Item_Input_praise2_valueB(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise2_valueB() = newValue;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_boot1_DEFINE_Input_praise2_valueA()
	{
		_stat_REG_ptr_Input_praise2_valueA = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_boot1_DEFINE_Input_praise2_valueB()
	{
		_stat_REG_ptr_Input_praise2_valueB = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_boot2_SUBSTANTIATE_Input_praise2_valueA()
	{
		_stat_REG_ptr_Input_praise2_valueA = new double();
		*_stat_REG_ptr_Input_praise2_valueA = (double)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_boot2_SUBSTANTIATE_Input_praise2_valueB()
	{
		_stat_REG_ptr_Input_praise2_valueB = new double();
		*_stat_REG_ptr_Input_praise2_valueB = (double)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_boot3_INITIALISE_Input_praise2_valueA()
	{
		*_stat_REG_ptr_Input_praise2_valueA = (double)(1.2);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_boot3_INITIALISE_Input_praise2_valueB()
	{
		*_stat_REG_ptr_Input_praise2_valueA = (double)(2.6);
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_get_Ptr_Input_praise2_valueA()
	{
		return _stat_REG_ptr_Input_praise2_valueA;
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2::stat_REG_get_Ptr_Input_praise2_valueB()
	{
		return _stat_REG_ptr_Input_praise2_valueB;
	}