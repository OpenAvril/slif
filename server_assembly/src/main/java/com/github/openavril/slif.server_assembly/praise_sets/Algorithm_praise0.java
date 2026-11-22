package com.github.openavril.slif.server_assembly.praise_sets;
public class Algorithm_praise0 {
    public double doWork(byte sysThreadId, Input_praise0 subsetIn, Output_praise0 subsetOut)
    {
        subsetOut.dyn_REG_set_ServerAssembly_PraiseSet0_STRUCT_Output_value(sysThreadId, (subsetIn.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId) + subsetIn.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId)));
        return subsetOut.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Output_value(sysThreadId);
    }
}
