package com.github.openavril.slif.server_assembly.Main;
import com.github.openavril.slif.MutexQue;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.engine.Global;

import java.io.IOException;
public class Main
{
    private static Framework stat_PGM_ServerAssembly = null;
// public.
    public static void main(String[] args) throws IOException {
        byte sysThreadId0 = 0;
        System.out.printf("thread " + sysThreadId0 + "entered first member function, main()" + ".%n");
        stat_PGM_ServerAssembly = new Framework((byte) sysThreadId0);
        System.out.printf("thread " + sysThreadId0 + "==========%n");
        System.out.printf("thread " + sysThreadId0 + "declaration" + ".%n");
        System.out.printf("thread " + sysThreadId0 + "definition" + ".%n");
        System.out.printf("thread " + sysThreadId0 + "substantiation" + ".%n");
        System.out.printf("thread " + sysThreadId0 + "initialisation" + ".%n");
        System.out.printf("thread " + sysThreadId0 + "instantiation" + ".%n");
        System.out.printf("thread " + sysThreadId0 + "running" + ".%n");
        System.out.printf("thread " + sysThreadId0 + "==========%n");
        System.out.printf("thread " + sysThreadId0 + "SIMULATION%n");
        MutexQue.startByLock(sysThreadId0, stat_PGM_ServerAssembly.dyn_CLASS_get_App(sysThreadId0).dyn_CLASS_get_Execute(sysThreadId0).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId0), (byte) 0);
        stat_PGM_ServerAssembly.dyn_CLASS_get_App(sysThreadId0).dyn_CLASS_get_Execute(sysThreadId0).dyn_CLASS_get_Execute_Control(sysThreadId0).app_Terminate_All_Threads(sysThreadId0, stat_PGM_ServerAssembly);
        MutexQue.endByUnlock(sysThreadId0, stat_PGM_ServerAssembly.dyn_CLASS_get_App(sysThreadId0).dyn_CLASS_get_Execute(sysThreadId0).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId0), (byte) 0);

    }
}