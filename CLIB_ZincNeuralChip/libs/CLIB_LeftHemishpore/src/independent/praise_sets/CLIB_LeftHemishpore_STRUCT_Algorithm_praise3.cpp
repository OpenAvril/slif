#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Algorithm_praise3.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise3.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise3.h"
// public.
    void slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise3::app_Do_Praise(uint8_t* sysThreadId, CLIB_LeftHemishpore_STRUCT_Input_praise3* ptr_In_SubSet, CLIB_LeftHemishpore_STRUCT_Output_praise3* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_CLIB_LeftHemishpore_STRUCT_Output_praise3_Value(sysThreadId, new double(*ptr_In_SubSet->dyn_REG_get_Item_Input_praise3_valueA(sysThreadId) + *ptr_In_SubSet->dyn_REG_get_Item_Input_praise3_valueB(sysThreadId)));
    }
// private.
