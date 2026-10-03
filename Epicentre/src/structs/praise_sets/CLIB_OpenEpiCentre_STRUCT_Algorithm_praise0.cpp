#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise0.h"
#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.h"
#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
// public.
    void slif::CLIB_OpenEpiCentre_STRUCT_Algorithm_praise0::app_Do_Praise(uint8_t* sysThreadId, CLIB_OpenEpiCentre_STRUCT_Input_praise0* ptr_In_SubSet, CLIB_OpenEpiCentre_STRUCT_Output_praise0* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(sysThreadId, new double(*ptr_In_SubSet->dyn_REG_get_Item_Input_praise0_valueA(sysThreadId) + *ptr_In_SubSet->dyn_REG_get_Item_Input_praise0_valueB(sysThreadId)));
    }
// private.
