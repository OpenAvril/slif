package engine;
import SIMULATION.Simulation;
import independent.threads.*;
import independent.*;

public class Framework
{
    private static App stat_CLASS_App;
    private static Global stat_CLASS_Global;
    private static Algorithm stat_STRUCT_Algorithm;
    private static Thread_InputListen stat_STRUCT_I_Listen;
    private static Input stat_STRUCT_Input;
    private static Thread_OutputRespond stat_STRUCT_O_Respond;
    private static Output stat_STRUCT_Output;
    private static User_Algorithm stat_STRUCT_User_Algorithms;
    private static User_Input stat_STRUCT_User_Inputs;
    private static User_Output stat_STRUCT_User_Outputs;
    private static Simulation SIMULATION;
    // public.
    public Framework(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered CONSTRUCTOR Framework(sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Framework(sysThreadId);
        stat_REG_boot0_DECLAIRE_Framework(sysThreadId);

         System.out.printf("thread " + sysThreadId + "started Global Meta-Data and Settings" + ".%n");
        this.dyn_CLASS_create_Global_and_Settings(sysThreadId);
        this.dyn_CLASS_get_Global(sysThreadId).dyn_REG_boot1_DEFINE_Global(sysThreadId);
        this.dyn_CLASS_get_Global(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Global(sysThreadId);
        this.dyn_CLASS_get_Global(sysThreadId).dyn_REG_boot3_INITIALISE_Global(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done Global Meta-Data and Settings" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT classes - DECLAIRE, DEFINE INITIALISE, Registers - DEFINE, SUBSTANTIATE, INITIALISE" + ".%n");
         System.out.printf("thread " + sysThreadId + "started independent STRUCT User_Input(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_User_Input(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_User_Input(sysThreadId);
        this.dyn_STRUCT_get_User_Input(sysThreadId).dyn_REG_boot1_DEFINE_User_Input(sysThreadId);
        this.dyn_STRUCT_get_User_Input(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_User_Input(sysThreadId);
        this.dyn_STRUCT_get_User_Input(sysThreadId).dyn_REG_boot3_INITIALISE_User_Input(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done independent STRUCT User_Input(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT User_Algorithm(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_User_Algorithm(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_User_Algorithm(sysThreadId);
        this.dyn_STRUCT_get_User_Algorithm(sysThreadId).dyn_REG_boot1_DEFINE_User_Algorithm(sysThreadId);
        this.dyn_STRUCT_get_User_Algorithm(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_User_Algorithm(sysThreadId);
        this.dyn_STRUCT_get_User_Algorithm(sysThreadId).dyn_REG_boot3_INITIALISE_User_Algorithm(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done independent STRUCT User_Algorithm(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT User_Output(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_User_Output(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_User_Output(sysThreadId);
        this.dyn_STRUCT_get_User_Output(sysThreadId).dyn_REG_boot1_DEFINE_User_Output(sysThreadId);
        this.dyn_STRUCT_get_User_Output(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_User_Output(sysThreadId);
        this.dyn_STRUCT_get_User_Output(sysThreadId).dyn_REG_boot3_INITIALISE_User_Output(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done independent STRUCT User_Output(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT Input(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_Input(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_Input(sysThreadId);
        this.dyn_STRUCT_get_Input(sysThreadId).dyn_REG_boot1_DEFINE_Input(sysThreadId);
        this.dyn_STRUCT_get_Input(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Input(sysThreadId);
        this.dyn_STRUCT_get_Input(sysThreadId).dyn_REG_boot3_INITIALISE_Input(sysThreadId, this.dyn_STRUCT_get_User_Input(sysThreadId));
         System.out.printf("thread " + sysThreadId + "done independent STRUCT Input(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT Algorithm(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_Algorithm(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_Algorithm(sysThreadId);
        this.dyn_STRUCT_get_Algorithm(sysThreadId).dyn_REG_boot1_DEFINE_Algorithm(sysThreadId);
        this.dyn_STRUCT_get_Algorithm(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Algorithm(sysThreadId);
        this.dyn_STRUCT_get_Algorithm(sysThreadId).dyn_REG_boot3_INITIALISE_Algorithm(sysThreadId, this.dyn_STRUCT_get_User_Algorithm(sysThreadId));
         System.out.printf("thread " + sysThreadId + "done independent STRUCT Algorithm(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT Output(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_Output(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_Output(sysThreadId);
        this.dyn_STRUCT_get_Output(sysThreadId).dyn_REG_boot1_DEFINE_Output(sysThreadId);
        this.dyn_STRUCT_get_Output(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Output(sysThreadId);
        this.dyn_STRUCT_get_Output(sysThreadId).dyn_REG_boot3_INITIALISE_Output(sysThreadId, this.dyn_STRUCT_get_User_Output(sysThreadId));
         System.out.printf("thread " + sysThreadId + "started independent STRUCT Output(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "started independent STRUCT IO_ListenRespond(sysThreadId)" + ".%n");
        stat_STRUCT_boot1_DEFINE_IO_ListenRespond(sysThreadId);
        stat_STRUCT_boot3_INITIALISE_IO_ListenRespond(sysThreadId);
        this.dyn_STRUCT_get_IO_ListenRespond(sysThreadId).dyn_REG_boot1_DEFINE_IO_ListenRespond(sysThreadId, this);
        this.dyn_STRUCT_get_IO_ListenRespond(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_IO_ListenRespond(sysThreadId, this);
        this.dyn_STRUCT_get_IO_ListenRespond(sysThreadId).dyn_REG_boot3_INITIALISE_IO_ListenRespond(sysThreadId, this, this.dyn_STRUCT_get_Input(sysThreadId), this.dyn_STRUCT_get_Output(sysThreadId));
         System.out.printf("thread " + sysThreadId + "done independent STRUCT IO_ListenRespond(sysThreadId)" + ".%n");
         System.out.printf("thread " + sysThreadId + "done independent STRUCT classes - DECLAIRE, DEFINE INITIALISE, RRegisters - DEFINE, SUBSTANTIATE, INITIALISE" + ".%n");

        stat_CLASS_boot1_DEFINE_SIMULATION(sysThreadId);
        stat_CLASS_boot3_INITIALISE_SIMULATION(sysThreadId, this);
        this.dyn_CLASS_get_SIMULATION(sysThreadId).dyn_REG_boot1_DEFINE__SIMULATION(sysThreadId);
        this.dyn_CLASS_get_SIMULATION(sysThreadId).dyn_REG_boot2_SUBSTANTIATE__SIMULATION(sysThreadId, this.dyn_STRUCT_get_Input(sysThreadId));
        this.dyn_CLASS_get_SIMULATION(sysThreadId).dyn_REG_boot3_INITIALISE__SIMULATION(sysThreadId, this.dyn_STRUCT_get_Input(sysThreadId));

        stat_CLASS_boot1_DEFINE_Framework(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Framework(sysThreadId, this);

         System.out.printf("thread " + sysThreadId + "started ARCHITECTURE generate" + ".%n");
         System.out.printf("thread " + sysThreadId + "started architectured classes - Registers - DEFINE" + ".%n");
        this.dyn_REG_boot1_DEFINE_Framework(sysThreadId, this);
        this.dyn_CLASS_get_App(sysThreadId).dyn_REG_boot1_DEFINE_App(sysThreadId);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Algorithms(sysThreadId).dyn_REG_boot1_DEFINE_Algorithms(this);
        //this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Data(sysThreadId).dyn_CLASS_get_Data(sysThreadId).dyn_REG_boot1_DEFINE_Data(sysThreadId);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_REG_boot1_DEFINE_Execute(sysThreadId);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_boot1_DEFINE_Execute_Control(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done architectured classes -Registers - DEFINE" + ".%n");

         System.out.printf("thread " + sysThreadId + "started architectured classes - Registers - SUBSTANTIATE" + ".%n");
        this.dyn_REG_boot2_SUBSTANTIATE_Framework(sysThreadId, this);
        this.dyn_CLASS_get_App(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Algorithms(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Algorithms(sysThreadId, this);
        //this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Data(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Data(this);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Execute(sysThreadId, this);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_boot2_SUBSTANTIATE_Execute_Control(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done architectured classes -Registers - SUBSTANTIATE" + ".%n");

         System.out.printf("thread " + sysThreadId + "started architectured classes - Registers - INITIALISE" + ".%n");
        this.dyn_REG_boot3_INITIALISE_Framework(sysThreadId, this, this.dyn_STRUCT_get_Input(sysThreadId), this.dyn_STRUCT_get_Output(sysThreadId));
        this.dyn_CLASS_get_App(sysThreadId).dyn_REG_boot3_INITIALISE_App(sysThreadId);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Algorithms(sysThreadId).dyn_REG_boot3_INITIALISE_Algorithms(sysThreadId, this);
        //this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Data(sysThreadId).dyn_REG_boot3_INITIALISE_Data(this);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_REG_boot3_INITIALISE_Execute(sysThreadId, this);
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_boot3_INITIALISE_Execute_Control(sysThreadId);
         System.out.printf("thread " + sysThreadId + "done architectured classes - Registers - INITIALISE" + ".%n");
         System.out.printf("thread " + sysThreadId + "done ARCHITECTURE generate" + ".%n");

         System.out.printf("thread " + sysThreadId + "started PROGRAM - INSTANTIATE" + ".%n");
        this.dyn_REG_boot4_INSTANTIATE_Framework(this);
         System.out.printf("thread " + sysThreadId + "done PROGRAM - INSTANTIATE" + ".%n");

         System.out.printf("thread " + sysThreadId + "%n");
         System.out.printf("thread " + sysThreadId + "        ,     \\      /      ,%n");
         System.out.printf("thread " + sysThreadId + "       / \\    )\\ _ /(     / \\ %n");
         System.out.printf("thread " + sysThreadId + "      /   \\   (_\\  /_)    /   \\ %n");
         System.out.printf("thread " + sysThreadId + "____ / ___\\__ \\@  @/ __/_____\\_____%n");
         System.out.printf("thread " + sysThreadId + "|              |\\../|               |%n");
         System.out.printf("thread " + sysThreadId + "|               \\VV/                |%n");
         System.out.printf("thread " + sysThreadId + "|           Java TestBench.         |%n");
         System.out.printf("thread " + sysThreadId + "|          Open Source MIT.         |%n");
         System.out.printf("thread " + sysThreadId + "|         King Brenton James        |%n");
         System.out.printf("thread " + sysThreadId + "|       Maddocks BEng(CompSys).     |%n");
         System.out.printf("thread " + sysThreadId + "|___________________________________|%n");
         System.out.printf("thread " + sysThreadId + "|    / \\ /        \\\\        \\ /\\    |%n");
         System.out.printf("thread " + sysThreadId + "|  /    V          ))        V   \\  |%n");
         System.out.printf("thread " + sysThreadId + "|/                //               \\|%n");
         System.out.printf("thread " + sysThreadId + "`                 V                 '%n");
         System.out.printf("thread " + sysThreadId + "%n");

         System.out.printf("thread " + sysThreadId + "started PROGRAM - LAUNCH THREADS" + ".%n");
        this.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_APP_Launch_Threads(sysThreadId, this);
         System.out.printf("thread " + sysThreadId + "exiting PROGRAM - LAUNCH THREADS" + ".%n");
         System.out.printf("thread " + sysThreadId + "exiting DESKTOP APPLICATION generate_Program(sysThreadId)" + ".%n");
         System.out.printf("thread " + sysThreadId + "exiting CONSTRUCTOR Framework(sysThreadId)%n");
    }
    public void dyn_CLASS_create_Global_and_Settings(byte sysThreadId) {
        boot1_CLASS_DEFINE_Global(sysThreadId);
        boot3_CLASS_INITIALISE_Global(sysThreadId);
    }
    public App dyn_CLASS_get_App(byte sysThreadId) {
        return stat_CLASS_get_App(sysThreadId);
    }
    public Global dyn_CLASS_get_Global(byte sysThreadId) {
        return stat_CLASS_get_Global(sysThreadId);
    }
    public Simulation dyn_CLASS_get_SIMULATION(byte sysThreadId) {
        return stat_CLASS_get_SIMULATION(sysThreadId);
    }
    public void dyn_REG_boot1_DEFINE_Framework(byte sysThreadId, Framework obj) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot1_DEFINE_Framework(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot1_DEFINE_Framework(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Framework(byte sysThreadId, Framework obj) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot2_SUBSTANTIATE_Framework(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot2_SUBSTANTIATE_Framework(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_Framework(byte sysThreadId, Framework obj, Input structDEFAULT_Input, Output structDEFAULT_Output) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot3_INITIALISE_Framework(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot3_INITIALISE_Framework(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Framework(byte sysThreadId, Framework obj) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot4_INSTANTIATE_Framework(sysThreadId)" + ".%n");
        obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_REG_boot4_INSTANTIATE_Execute(sysThreadId);
         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot4_INSTANTIATE_Framework(sysThreadId)" + ".%n");
    }
    public Algorithm dyn_STRUCT_get_Algorithm(byte sysThreadId) {
        return stat_STRUCT_get_Algorithm(sysThreadId);
    }
    public Input dyn_STRUCT_get_Input(byte sysThreadId) {
        return stat_STRUCT_get_Input(sysThreadId);
    }
    public Output dyn_STRUCT_get_Output(byte sysThreadId) {
        return stat_STRUCT_get_Output(sysThreadId);
    }
    public User_Algorithm dyn_STRUCT_get_User_Algorithm(byte sysThreadId) {
        return stat_STRUCT_get_User_Algorithm(sysThreadId);
    }
    public User_Input dyn_STRUCT_get_User_Input(byte sysThreadId) {
        return stat_STRUCT_get_User_Input(sysThreadId);
    }
    public User_Output dyn_STRUCT_get_User_Output(byte sysThreadId) {
        return stat_STRUCT_get_User_Output(sysThreadId);
    }
    public Thread_InputListen dyn_STRUCT_get_Thread_InputListen(byte sysThreadId) {
        return stat_STRUCT_get_IO_ListenRespond(sysThreadId);
    }
    public Thread_OutputRespond dyn_STRUCT_get_Thread_OutputRespond(byte sysThreadId) {
        return stat_STRUCT_get_IO_ListenRespond(sysThreadId);
    }
    public void dyn_STRUCT_boot0_DECLAIRE(byte sysThreadId)
    {
         System.out.printf("thread " + sysThreadId + "entered stat_STRUCT_boot0_DECLAIRE(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting stat_STRUCT_boot0_DECLAIRE(sysThreadId)" + ".%n");
    }
    // private.
    private static void stat_CLASS_boot0_DECLAIRE_Framework(byte sysThreadId)
    {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot0_DECLAIRE_Framework(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot0_DECLAIRE_Framework(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_App(byte sysThreadId)
    {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot1_DEFINE_App(sysThreadId)" + ".%n");
        stat_CLASS_App = null;
         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot1_DEFINE_App(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Framework(byte sysThreadId)
    {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot1_DEFINE_Framework(sysThreadId)" + ".%n");
        stat_CLASS_boot1_DEFINE_App(sysThreadId);
         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot1_DEFINE_Framework(sysThreadId)" + ".%n");
    }
    private static void boot1_CLASS_DEFINE_Global(byte sysThreadId)
    {
         System.out.printf("thread " + sysThreadId + "entered boot1_CLASS_DEFINE_Global(sysThreadId)" + ".%n");
        stat_CLASS_Global = null;
         System.out.printf("thread " + sysThreadId + "exiting boot1_CLASS_DEFINE_Global(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_App(byte sysThreadId, Framework obj) {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot3_INITIALISE_App(sysThreadId)" + ".%n");
        stat_CLASS_App = new App(obj);
        try {
            stat_CLASS_get_App(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot3_INITIALISE_App(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Framework(byte sysThreadId, Framework obj)  {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot3_INITIALISE_Framework(sysThreadId)" + ".%n");
        stat_CLASS_boot3_INITIALISE_App(obj);
         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot3_INITIALISE_Framework(sysThreadId)" + ".%n");
    }
    private static void boot3_CLASS_INITIALISE_Global(byte sysThreadId)
    {
         System.out.printf("thread " + sysThreadId + "entered boot3_CLASS_INITIALISE_Global(sysThreadId)" + ".%n");
        stat_CLASS_Global = new Global(sysThreadId);
        try {
            stat_CLASS_get_Global(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
         System.out.printf("thread " + sysThreadId + "exiting boot3_CLASS_INITIALISE_Global(sysThreadId)" + ".%n");
    }
    private static App stat_CLASS_get_App(byte sysThreadId)
    {
        return stat_CLASS_App;
    }
    private static void stat_REG_boot0_DECLAIRE_Framework(byte sysThreadId) {
         System.out.printf("thread " + sysThreadId + "entered stat_REG_boot0_DECLAIRE_Framework(sysThreadId)" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting stat_REG_boot0_DECLAIRE_Framework(sysThreadId)" + ".%n");
    }
    private static void stat_STRUCT_boot1_DEFINE_Algorithm(byte sysThreadId)
    {
        stat_STRUCT_Algorithm = null;
    }
    private static void stat_STRUCT_boot1_DEFINE_Input(byte sysThreadId)
    {
        stat_STRUCT_Input = null;
    }
    private static void stat_STRUCT_boot1_DEFINE_Output(byte sysThreadId)
    {
        stat_STRUCT_Output = null;
    }
    private static void stat_STRUCT_boot1_DEFINE_User_Algorithm(byte sysThreadId)
    {
        stat_STRUCT_User_Algorithms = null;
    }
    private static void stat_STRUCT_boot1_DEFINE_User_Input(byte sysThreadId)
    {
        stat_STRUCT_User_Inputs = null;
    }
    private static void stat_STRUCT_boot1_DEFINE_User_Output(byte sysThreadId)
    {
        stat_STRUCT_User_Outputs = null;
    }
    private static void stat_STRUCT_boot1_DEFINE_IO_ListenRespond(byte sysThreadId)
    {
        stat_STRUCT_IO_ListenRespond = null;
    }
    private static void stat_STRUCT_boot3_INITIALISE_Algorithm(byte sysThreadId) {
        stat_STRUCT_Algorithm = new Algorithm(sysThreadId);
        try {
            stat_STRUCT_get_Algorithm(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static void stat_STRUCT_boot3_INITIALISE_Input(byte sysThreadId) {
        stat_STRUCT_Input = new Input(sysThreadId);
        try {
            stat_STRUCT_get_Input(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static void stat_STRUCT_boot3_INITIALISE_Output(byte sysThreadId) {
        stat_STRUCT_Output = new Output(sysThreadId);
        try {
            stat_STRUCT_get_Output(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static void stat_STRUCT_boot3_INITIALISE_User_Algorithm(byte sysThreadId) {
        stat_STRUCT_User_Algorithms = new User_Algorithm(sysThreadId);
        try {
            stat_STRUCT_get_User_Algorithm(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static void stat_STRUCT_boot3_INITIALISE_User_Input(byte sysThreadId) {
        stat_STRUCT_User_Inputs = new User_Input(sysThreadId);
        try {
            stat_STRUCT_get_User_Input(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static void stat_STRUCT_boot3_INITIALISE_User_Output(byte sysThreadId) {
        stat_STRUCT_User_Outputs = new User_Output(sysThreadId);
        try {
            stat_STRUCT_get_User_Output(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static void stat_STRUCT_boot3_INITIALISE_IO_ListenRespond(byte sysThreadId) {
        stat_STRUCT_IO_ListenRespond = new Thread_OutputRespond(sysThreadId);
        try {
            stat_STRUCT_get_IO_ListenRespond(sysThreadId);
        }
        catch (NullPointerException e) {
             System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
    }
    private static Algorithm stat_STRUCT_get_Algorithm(byte sysThreadId)
    {
        return stat_STRUCT_Algorithm;
    }
    private static Input stat_STRUCT_get_Input(byte sysThreadId)
    {
        return stat_STRUCT_Input;
    }
    private static Thread_OutputRespond stat_STRUCT_get_IO_ListenRespond(byte sysThreadId)
    {
        return stat_STRUCT_IO_ListenRespond;
    }
    private static Output stat_STRUCT_get_Output(byte sysThreadId)
    {
        return stat_STRUCT_Output;
    }
    private static User_Input stat_STRUCT_get_User_Input(byte sysThreadId)
    {
        return stat_STRUCT_User_Inputs;
    }
    private static User_Output stat_STRUCT_get_User_Output(byte sysThreadId)
    {
        return stat_STRUCT_User_Outputs;
    }
    private static User_Algorithm stat_STRUCT_get_User_Algorithm(byte sysThreadId)
    {
        return stat_STRUCT_User_Algorithms;
    }
    private static void stat_CLASS_boot1_DEFINE_SIMULATION(byte sysThreadId) {
        SIMULATION = null;
    }
    private static void stat_CLASS_boot3_INITIALISE_SIMULATION(byte sysThreadId, Framework obj) {
        SIMULATION = new Simulation(obj, obj.dyn_STRUCT_get_Input(sysThreadId), obj.dyn_STRUCT_get_Output(sysThreadId));
        while(stat_CLASS_get_SIMULATION(sysThreadId) == null) { }
    }
    private static Global stat_CLASS_get_Global(byte sysThreadId)
    {
        return stat_CLASS_Global;
    }
    private static Simulation stat_CLASS_get_SIMULATION(byte sysThreadId) {
        return SIMULATION;
    }
}