package com.github.openavril.slif.server_assembly.engine;
import com.github.openavril.slif.server_assembly.independent.threads.*;
import com.github.openavril.slif.Epicentre.*;
import com.github.openavril.slif.LaunchQue.*;
import com.github.openavril.slif.MutexQue.*;
public class Execute {
    private static Execute_Control stat_CLASS_Execute_Control;
    private static Thread[] stat_REG_List_Of_Threads;
    private static byte stat_PGM_HandleId_slif_Epicentre;
    private static long stat_PGM_HandleId_slif_MutexQue_For_slif_Epicentre_ConditionCode;
    private static long stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_InputSamples;
    private static long stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples;
// public.
    public Execute(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : Execute(sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Execute(sysThreadId, obj);
        stat_REG_boot0_DECLAIRE_Execute(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : Execute(sysThreadId)" + ".%n");
    }
    public void dyn_APP_Launch_Threads(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : dyn_APP_Launch_Threads(sysThreadId)" + ".%n");
        stat_APP_Launch_Threads(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : dyn_APP_Launch_Threads(sysThreadId)" + ".%n");
    }
    public Execute_Control dyn_CLASS_get_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : dyn_CLASS_get_Execute_Control(sysThreadId)" + ".%n");
        return stat_CLASS_get_Execute_Control(sysThreadId);
    }
    public byte dyn_get_PgmHandle_Epicentre(byte sysThreadId) {
        return stat_PGM_HandleId_slif_Epicentre;
    }
    public long dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(byte sysThreadId) {
        return stat_PGM_HandleId_slif_MutexQue_For_slif_Epicentre_ConditionCode;
    }
    public long dyn_get_PgmHandle_MutexQue_For_Buffer_At_Simulation_InputSamples (byte sysThreadId) {
        return stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_InputSamples;
    }
    public long dyn_get_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(byte sysThreadId) {
        return stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples;
    }
    public void dyn_REG_boot1_DEFINE_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : dyn_REG_boot1_DEFINE_Execute(sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_List_Of_Threads(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : dyn_REG_boot1_DEFINE_Execute(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Execute(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : dyn_REG_boot2_SUBSTANTIATE_Execute(sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : dyn_REG_boot2_SUBSTANTIATE_Execute(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_Execute(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : dyn_REG_boot3_INITIALISE_Execute(sysThreadId)" + ".%n");
        stat_REG_boot3_INITIALISE_List_Of_Threads(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : dyn_REG_boot3_INITIALISE_Execute(sysThreadId)" + ".%n");
    }
    static private void stat_CLASS_boot0_DECLAIRE_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_CLASS_boot0_DECLAIRE_Execute(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_CLASS_boot0_DECLAIRE_Execute(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_CLASS_boot1_DEFINE_Execute(sysThreadId)" + ".%n");
        stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId);
        stat_PGM_boot1_DEFFINE_PGMs(sysThreadId);
        stat_PGM_boot1_DEFINE_PgmHandle_Epicentre(sysThreadId);
        stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId);
        stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId);
        stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_CLASS_boot1_DEFINE_Execute(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Execute(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_CLASS_boot3_INITIALISE_Execute(sysThreadId)" + ".%n");
        stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId);
        stat_PGM_boot3_INITIALISE_PGM_slif_MutexQue_For_slif_Epicentre_ConditionCode(sysThreadId);
        stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId);
        stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId);
        stat_PGM_boot3_INITIALISE_PGM_slif_Epicentre(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_CLASS_boot3_INITIALISE_Execute(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Execute(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_REG_boot0_DECLAIRE_Execute(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_REG_boot0_DECLAIRE_Execute(sysThreadId)" + ".%n");
    }
// private.
    private static void stat_APP_Launch_Threads(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_APP_Launch_Threads(sysThreadId)" + ".%n");
        for (int threadId = 0; threadId < stat_REG_List_Of_Threads.length; threadId++) {
            stat_REG_List_Of_Threads[threadId].start();
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_APP_Launch_Threads(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId)" + ".%n");
        stat_CLASS_Execute_Control = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId)" + ".%n");
        stat_CLASS_Execute_Control = new Execute_Control(sysThreadId);
        while(stat_CLASS_Execute_Control == null) {}
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId)" + ".%n");
    }
    private static Execute_Control stat_CLASS_get_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class : stat_CLASS_get_Execute_Control(sysThreadId)" + ".%n");
        return stat_CLASS_Execute_Control;
    }
    private static void stat_REG_boot1_DEFINE_List_Of_Threads(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_REG_boot1_DEFINE_List_Of_Threads(sysThreadId)" + ".%n");
        stat_REG_List_Of_Threads = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_REG_boot1_DEFINE_List_Of_Threads(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(sysThreadId)" + ".%n");
        try {
            stat_REG_List_Of_Threads = new Thread[Math.toIntExact(Global.stat_REG_get_ServerAssembly_NUMBER_OF_THREADS(sysThreadId))];
        }
        catch (NullPointerException e) {
            System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
            throw new RuntimeException("NullPointerException.%n", e);
        }
        for (int threadId = 0; threadId < stat_REG_List_Of_Threads.length; threadId++) {
            stat_REG_List_Of_Threads[threadId] = null;
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_List_Of_Threads(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_REG_boot3_INITIALISE_List_Of_Threads(sysThreadId)" + ".%n");
        stat_REG_List_Of_Threads[0] = new Thread(() -> {
            obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).dyn_Thread_InputListen(sysThreadId, obj, (byte)0);
        });
        stat_REG_List_Of_Threads[1] = new Thread(() -> {
            obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).dyn_Thread_OutputRespond(sysThreadId, obj, (byte)1);
        });
        //todo remove SIM
        stat_REG_List_Of_Threads[2] = new Thread(() -> {
            obj.dyn_CLASS_get_SIMULATION(sysThreadId).Thread_Input_Peripheral_Scanner(sysThreadId, obj, (byte)2);
        });
        stat_REG_List_Of_Threads[3] = new Thread(() -> {
            obj.dyn_CLASS_get_SIMULATION(sysThreadId).Thread_Output_Draw(sysThreadId, obj, (byte)3);
        });
        //todo networking
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_REG_boot3_INITIALISE_List_Of_Threads(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot1_DEFFINE_PGMs(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot1_DEFFINE_PGMs(sysThreadId)" + ".%n");
        MutexQue.generateProgram(sysThreadId);
        LaunchQue.generateProgram(sysThreadId);
        Epicentre.generateProgram(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot1_DEFFINE_PGMs(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot1_DEFINE_PgmHandle_Epicentre(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot1_DEFINE_PgmHandle_slif_Epicentre(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_Epicentre = Byte.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot1_DEFINE_PgmHandle_slif_Epicentre(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Epicentre_ConditionCode(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot1_DEFINE_PgmHandle_slif_MutexQue_For_slif_Epicentre_ConditionCode(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_MutexQue_For_slif_Epicentre_ConditionCode = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot1_DEFINE_PgmHandle_slif_MutexQue_For_slif_Epicentre_ConditionCode(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_InputSamples (byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_InputSamples = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot1_DEFINE_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot3_INITIALISE_PGM_slif_Epicentre(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot3_INITIALISE_PGM_slif_Epicentre(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_Epicentre = Epicentre.gernerateHandle(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot3_INITIALISE_PGM_slif_Epicentre(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot3_INITIALISE_PGM_slif_MutexQue_For_slif_Epicentre_ConditionCode(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot3_INITIALISE_PGM_slif_MutexQue_For_slif_Epicentre_ConditionCode(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_MutexQue_For_slif_Epicentre_ConditionCode = MutexQue.generateHandle(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot3_INITIALISE_PGM_slif_MutexQue_For_slif_Epicentre_ConditionCode(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_InputSamples(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_InputSamples = MutexQue.generateHandle(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId)" + ".%n");
    }
    private static void stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Execute : stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId)" + ".%n");
        stat_PGM_HandleId_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples = MutexQue.generateHandle(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Execute : stat_PGM_boot3_INITIALISE_slif_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId)" + ".%n");
    }
}
