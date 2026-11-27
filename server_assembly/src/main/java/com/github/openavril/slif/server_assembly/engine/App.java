package com.github.openavril.slif.server_assembly.engine;
public class App
{
    private static Data stat_CLASS_Data;
    private static Execute stat_CLASS_Execute;
// public.
    public App(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : App(byte sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_App(sysThreadId);
        stat_CLASS_boot1_DEFINE_App(sysThreadId);
        stat_CLASS_boot3_INITIALISE_App(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : App(byte sysThreadId)" + ".%n");
    }
    public Data dyn_CLASS_get_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : Server_Assembly : App : dyn_CLASS_get_Data(sysThreadId)" + ".%n");
        return stat_CLASS_get_Data(sysThreadId);
    }
    public Execute dyn_CLASS_get_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : Server_Assembly : App : dyn_CLASS_get_Execute(sysThreadId)" + ".%n");
        return stat_CLASS_get_Execute(sysThreadId);
    }
    public void dyn_REG_boot1_DEFINE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : dyn_REG_boot1_DEFINE_App(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : dyn_REG_boot1_DEFINE_App(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : dyn_REG_boot2_SUBSTANTIATE_App(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : dyn_REG_boot2_SUBSTANTIATE_App(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : dyn_REG_boot3_INITIALISE_App(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : dyn_REG_boot3_INITIALISE_App(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot0_DECLAIRE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : stat_CLASS_boot0_DECLAIRE_App(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : stat_CLASS_boot0_DECLAIRE_App(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : stat_CLASS_boot1_DEFINE_App(byte sysThreadId)" + ".%n");
        boot1_CLASS_DEFINE_Data(sysThreadId);
        boot1_CLASS_DEFINE_Execute(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : stat_CLASS_boot1_DEFINE_App(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_App(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : stat_CLASS_boot3_INITIALISE_App(byte sysThreadId)" + ".%n");
        boot3_CLASS_INITIALISE_Data(sysThreadId);
        boot3_CLASS_INITIALISE_Execute(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : stat_CLASS_boot3_INITIALISE_App(byte sysThreadId)" + ".%n");
    }
// private.
    private static void boot1_CLASS_DEFINE_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : boot1_CLASS_DEFINE_Data(byte sysThreadId)" + ".%n");
        stat_CLASS_Data = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : boot1_CLASS_DEFINE_Data(byte sysThreadId)" + ".%n");
    }
    private static void boot1_CLASS_DEFINE_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : boot1_CLASS_DEFINE_Execute(byte sysThreadId)" + ".%n");
        stat_CLASS_Execute = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : boot1_CLASS_DEFINE_Execute(byte sysThreadId)" + ".%n");
    }
    private static void boot3_CLASS_INITIALISE_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : boot3_CLASS_INITIALISE_Data(byte sysThreadId)" + ".%n");
        stat_CLASS_Data = new Data(sysThreadId);
        while(stat_CLASS_Data == null) {}
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : Aboot3_CLASS_INITIALISE_Datapp(byte sysThreadId)" + ".%n");
    }
    private static void boot3_CLASS_INITIALISE_Execute(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : App : boot3_CLASS_INITIALISE_Execute(byte sysThreadId)" + ".%n");
        stat_CLASS_Execute = new Execute(sysThreadId, obj);
        while(stat_CLASS_Execute == null) {}
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : App : boot3_CLASS_INITIALISE_Execute(byte sysThreadId)" + ".%n");

    }
    private static Data stat_CLASS_get_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : App : stat_CLASS_get_Data(sysThreadId)" + ".%n");
        return stat_CLASS_Data;
    }
    private static Execute stat_CLASS_get_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : Server_Assembly : App : pr_stat_Rstat_CLASS_get_ExecuteEG_get_ServerAssembly_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
        return stat_CLASS_Execute;
    }
}