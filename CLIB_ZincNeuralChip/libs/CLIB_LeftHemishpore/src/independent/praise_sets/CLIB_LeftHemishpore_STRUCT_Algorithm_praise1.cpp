#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Algorithm_praise1.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise1.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise1.h"
// public.
    void slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise1::app_Do_Praise(uint8_t* sysThreadId, CLIB_LeftHemishpore_STRUCT_Input_praise1* ptr_In_SubSet, CLIB_LeftHemishpore_STRUCT_Output_praise1* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_CLIB_LeftHemishpore_STRUCT_Output_praise1_Value(sysThreadId, new double(*ptr_In_SubSet->dyn_REG_get_Item_Input_praise1_valueA(sysThreadId) + *ptr_In_SubSet->dyn_REG_get_Item_Input_praise1_valueB(sysThreadId)));
    }
// private.