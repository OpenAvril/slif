package engine;
public class App
{
    private static Algorithms stat_CLASS_Algorithms;
    private static Data stat_CLASS_Data;
    private static Execute stat_CLASS_Execute;
// public.
    public App(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : App(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : App : App(sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_App(sysThreadId);
        stat_CLASS_boot1_DEFINE_App(sysThreadId);
        stat_CLASS_boot3_INITIALISE_App(sysThreadId, obj);
    }
    public Algorithms dyn_CLASS_get_Algorithms(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : dyn_CLASS_get_Algorithms(sysThreadId)" + ".%n");
        return stat_CLASS_get_Algorithms(sysThreadId);
    }
    public Data dyn_CLASS_get_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : dyn_CLASS_get_Data(sysThreadId)" + ".%n");
        return stat_CLASS_get_Data(sysThreadId);
    }
    public Execute dyn_CLASS_get_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : dyn_CLASS_get_Execute(sysThreadId)" + ".%n");
        return stat_CLASS_get_Execute(sysThreadId);
    }
    public void dyn_REG_boot1_DEFINE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : dyn_REG_boot1_DEFINE_App(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : App : dyn_REG_boot1_DEFINE_App(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : App : dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : dyn_REG_boot3_INITIALISE_App(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : App : dyn_REG_boot3_INITIALISE_App(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot0_DECLAIRE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : stat_CLASS_boot0_DECLAIRE_App(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : App : stat_CLASS_boot0_DECLAIRE_App(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_App(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : stat_CLASS_boot1_DEFINE_App(sysThreadId)" + ".%n");
        boot1_CLASS_DEFINE_Algorithms(sysThreadId);
        boot1_CLASS_DEFINE_Data(sysThreadId);
        boot1_CLASS_DEFINE_Execute(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : App : stat_CLASS_boot1_DEFINE_App(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_App(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : stat_CLASS_boot3_INITIALISE_App(sysThreadId)" + ".%n");
        boot3_CLASS_INITIALISE_Algorithms(sysThreadId);
        boot3_CLASS_INITIALISE_Data(sysThreadId);
        boot3_CLASS_INITIALISE_Execute(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : App : stat_CLASS_boot3_INITIALISE_App(sysThreadId)" + ".%n");
    }
// private.
    private static void boot1_CLASS_DEFINE_Algorithms(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : boot1_CLASS_DEFINE_Algorithms(sysThreadId)" + ".%n");
        stat_CLASS_Algorithms = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : App : boot1_CLASS_DEFINE_Algorithms(sysThreadId)" + ".%n");
    }
    private static void boot1_CLASS_DEFINE_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : boot1_CLASS_DEFINE_Data(sysThreadId)" + ".%n");
        stat_CLASS_Data = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : App : boot1_CLASS_DEFINE_Data(sysThreadId)" + ".%n");
    }
    private static void boot1_CLASS_DEFINE_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : boot1_CLASS_DEFINE_Execute(sysThreadId)" + ".%n");
        stat_CLASS_Execute = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : App : boot1_CLASS_DEFINE_Execute(sysThreadId)" + ".%n");
    }
    private static void boot3_CLASS_INITIALISE_Algorithms(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : boot3_CLASS_INITIALISE_Algorithms(sysThreadId)" + ".%n");
        stat_CLASS_Algorithms = new Algorithms();
        while(stat_CLASS_Algorithms == null) {}
        System.out.printf("thread " + sysThreadId + " :: exiting : App : boot3_CLASS_INITIALISE_Algorithms(sysThreadId)" + ".%n");
    }
    private static void boot3_CLASS_INITIALISE_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : boot3_CLASS_INITIALISE_Data(sysThreadId)" + ".%n");
        stat_CLASS_Data = new Data(sysThreadId);
        while(stat_CLASS_Data == null) {}
        System.out.printf("thread " + sysThreadId + " :: exiting : App : boot3_CLASS_INITIALISE_Data(sysThreadId)" + ".%n");
    }
    private static void boot3_CLASS_INITIALISE_Execute(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : App : boot3_CLASS_INITIALISE_Execute(sysThreadId)" + ".%n");
          stat_CLASS_Execute = new Execute(sysThreadId, obj);
        while(stat_CLASS_Execute == null) {}
        System.out.printf("thread " + sysThreadId + " :: exiting : App : boot3_CLASS_INITIALISE_Execute(sysThreadId)" + ".%n");
    }
    private static Algorithms stat_CLASS_get_Algorithms(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= class : stat_CLASS_get_Algorithms(sysThreadId)" + ".%n");
        return stat_CLASS_Algorithms;
    }
    private static Data stat_CLASS_get_Data(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= class : stat_CLASS_get_Data(sysThreadId)" + ".%n");
        return stat_CLASS_Data;
    }
    private static Execute stat_CLASS_get_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= class : stat_CLASS_get_Execute(sysThreadId)" + ".%n");
        return stat_CLASS_Execute;
    }
}