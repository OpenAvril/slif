#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise3.h"
#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Algorithm_praise3::app_Do_Praise(CLIB_OpenEpiCentre_STRUCT_Input_praise3* ptr_In_SubSet, CLIB_OpenEpiCentre_STRUCT_Output_praise3* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(ptr_In_SubSet->dyn_REG_get_Item_Input_praise3_valueA() / ptr_In_SubSet->dyn_REG_get_Item_Input_praise3_valueB());
    }
// private.
