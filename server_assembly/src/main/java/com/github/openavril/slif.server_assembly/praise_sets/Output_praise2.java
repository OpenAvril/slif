package com.github.openavril.slif.server_assembly.praise_sets;
import com.github.openavril.slif.server_assembly.engine.Framework;

public class Output_praise2 {
    private static double output_praise2_value;

    // public.
    public void dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input_praise2 : dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
        dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output_value(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input_praise2 : dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
    }

    public void dyn_REG_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input_praise2 : dyn_REG_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
        dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output_value(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input_praise2 : dyn_REG_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
    }

    public void dyn_STRUCT_boot1_DEFINE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output_praise2 : dyn_STRUCT_boot1_DEFINE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output_praise2 : dyn_STRUCT_boot1_DEFINE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
    }

    public void dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output_praise2 : dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output_praise2 : dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
    }

    public void dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output_praise2 : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output_praise2 : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output(byte sysThreadId, Framework obj)" + ".%n");
    }

    public double dyn_REG_get_ServerAssembly_PraiseSet2_STRUCT_Output_value(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= double : Server_Assembly : Output_praise2 : dyn_REG_get_ServerAssembly_PraiseSet2_STRUCT_Output_valueA(byte sysThreadId)" + ".%n");
        return stat_REG_get_ServerAssembly_PraiseSet2_Output_value(sysThreadId);
    }

    public void dyn_REG_set_ServerAssembly_PraiseSet2_STRUCT_Output_value(byte sysThreadId, double newDouble) {
        System.out.printf("thread " + sysThreadId + " :: => double : Server_Assembly : Output_praise2 : dyn_REG_set_ServerAssembly_PraiseSet2_STRUCT_Output_valueA(byte sysThreadId, double newDouble)" + ".%n");
        stat_REG_set_ServerAssembly_PraiseSet2_Output_value(sysThreadId, newDouble);
    }

    // private.
    private static void dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output_value(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output_praise2 : dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output_valueA(byte sysThreadId)" + ".%n");
        output_praise2_value = Double.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output_praise2 : dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_PraiseSet2_Output_valueA(byte sysThreadId)" + ".%n");
    }

    private static void dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output_value(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output_praise2 : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output_valueA(byte sysThreadId)" + ".%n");
        output_praise2_value = 2;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output_praise2 : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_PraiseSet2_Output_valueA(byte sysThreadId)" + ".%n");
    }

    private static double stat_REG_get_ServerAssembly_PraiseSet2_Output_value(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= double : Server_Assembly : Output_praise2 : stat_REG_get_ServerAssembly_PraiseSet2_Output_value(byte sysThreadId)" + ".%n");
        return output_praise2_value;
    }

    private static void stat_REG_set_ServerAssembly_PraiseSet2_Output_value(byte sysThreadId, double newDouble) {
        System.out.printf("thread " + sysThreadId + " :: => double : Server_Assembly : Output_praise2 : stat_REG_set_ServerAssembly_PraiseSet2_Output_value(byte sysThreadId, double newDouble)" + ".%n");
        output_praise2_value = newDouble;
    }
}