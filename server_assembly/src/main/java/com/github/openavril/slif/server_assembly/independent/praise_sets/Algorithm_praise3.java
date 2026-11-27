package com.github.openavril.slif.server_assembly.independent.praise_sets;
public class Algorithm_praise3 {
    public double doWork(byte sysThreadId, Input_praise3 subsetIn, Output_praise3 subsetOut)
    {
        subsetOut.dyn_REG_set_ServerAssembly_PraiseSet3_STRUCT_Output_value(sysThreadId, (subsetIn.dyn_REG_get_ServerAssembly_PraiseSet3_STRUCT_Input_valueA(sysThreadId) + subsetIn.dyn_REG_get_ServerAssembly_PraiseSet3_STRUCT_Input_valueB(sysThreadId)));
        return subsetOut.dyn_REG_get_ServerAssembly_PraiseSet3_STRUCT_Output_value(sysThreadId);
    }
}
