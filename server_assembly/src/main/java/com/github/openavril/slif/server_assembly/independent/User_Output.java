package com.github.openavril.slif.server_assembly.independent;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise0;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise1;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise2;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise3;
import java.util.LinkedList;
public class User_Output {
    private static Output_praise0 stat_CLASS_Subest_praise0;
    private static Output_praise1 stat_CLASS_Subest_praise1;
    private static Output_praise2 stat_CLASS_Subest_praise2;
    private static Output_praise3 stat_CLASS_Subest_praise3;
    private static LinkedList<Object> stat_REG_List_Of_OutputSubsets;
    // public.
    public User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_ServerAssembly_User_Output(sysThreadId);
        stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output(sysThreadId);
        stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output(sysThreadId);
        stat_REG_boot0_DECLAIRE_ServerAssembly_User_Output(sysThreadId);
        dyn_REG_boot1_DEFINE_ServerAssembly_User_Output(sysThreadId);
        dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_User_Output(sysThreadId);
        dyn_REG_boot3_INITIALISE_ServerAssembly_User_Output(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : User_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_REG_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_ServerAssembly_User_Output_List_Of_OutputSubsets(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_REG_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_ServerAssembly_User_Output_List_Of_OutputSubsets(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_REG_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_REG_boot3_INITIALISE_ServerAssembly_User_Output_List_Of_OutputSubsets(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_REG_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_STRUCT_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot2_SUBSTANTIATE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    public Object dyn_REG_get_Item_On_List_Of_OutputSubsets(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Output_praise0 : dyn_REG_get_Item_On_List_Of_OutputSubsets(byte sysThreadId, long praiseI)" + ".%n");
        return stat_REG_get_ServerAssembly_User_Output_List_Of_OutputSubsets(sysThreadId).get(Math.toIntExact(praiseId));
    }
    // private.
    private static void stat_CLASS_boot0_DECLAIRE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise0(sysThreadId);
        stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise1(sysThreadId);
        stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise2(sysThreadId);
        stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise3(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise0(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise0 = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise1(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise1 = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise2(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise2 = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_ServerAssembly_User_Output_Subest_praise3(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise3 = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise0(sysThreadId);
        stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise1(sysThreadId);
        stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise2(sysThreadId);
        stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise3(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise0(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise0 = new Output_praise0();
        while(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise0(sysThreadId) == null) { }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise1(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise1 = new Output_praise1();
        while(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise1(sysThreadId) == null) { }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise2(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise2 = new Output_praise2();
        while(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise2(sysThreadId) == null) { }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_ServerAssembly_User_Output_Subest_praise3(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_CLASS_Subest_praise3 = new Output_praise3();
        while(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise3(sysThreadId) == null) { }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static Output_praise0 stat_CLASS_get_ServerAssembly_User_Output_Subest_praise0(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= CLASS : Server_Assembly : Output_praise0 : stat_CLASS_get_ServerAssembly_User_Output_Subest_praise0(byte sysThreadId)" + ".%n");
        return stat_CLASS_Subest_praise0;
    }
    private static Output_praise1 stat_CLASS_get_ServerAssembly_User_Output_Subest_praise1(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= CLASS : Server_Assembly : Output_praise0 : stat_CLASS_get_ServerAssembly_User_Output_Subest_praise1(byte sysThreadId)" + ".%n");
        return stat_CLASS_Subest_praise1;
    }
    private static Output_praise2 stat_CLASS_get_ServerAssembly_User_Output_Subest_praise2(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= CLASS : Server_Assembly : Output_praise0 : stat_CLASS_get_ServerAssembly_User_Output_Subest_praise2(byte sysThreadId)" + ".%n");
        return stat_CLASS_Subest_praise2;
    }
    private static Output_praise3 stat_CLASS_get_ServerAssembly_User_Output_Subest_praise3(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= CLASS : Server_Assembly : Output_praise0 : stat_CLASS_get_ServerAssembly_User_Output_Subest_praise3(byte sysThreadId)" + ".%n");
        return stat_CLASS_Subest_praise3;
    }
    private static void stat_REG_boot0_DECLAIRE_ServerAssembly_User_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_ServerAssembly_User_Output_List_Of_OutputSubsets(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_REG_List_Of_OutputSubsets = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_ServerAssembly_User_Output_List_Of_OutputSubsets(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_REG_List_Of_OutputSubsets = new LinkedList<Object>();
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_ServerAssembly_User_Output_List_Of_OutputSubsets(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
        stat_REG_List_Of_OutputSubsets.add(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise0(sysThreadId));
        stat_REG_List_Of_OutputSubsets.add(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise1(sysThreadId));
        stat_REG_List_Of_OutputSubsets.add(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise2(sysThreadId));
        stat_REG_List_Of_OutputSubsets.add(stat_CLASS_get_ServerAssembly_User_Output_Subest_praise3(sysThreadId));
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : User_Output : dyn_STRUCT_boot3_INITIALISE_ServerAssembly_User_Output(byte sysThreadId)" + ".%n");
    }
    private static LinkedList<Object> stat_REG_get_ServerAssembly_User_Output_List_Of_OutputSubsets(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= LinkedList<Object> : Server_Assembly : Output_praise0 : stat_REG_get_ServerAssembly_User_Output_List_Of_OutputSubsets(byte sysThreadId)" + ".%n");
        return stat_REG_List_Of_OutputSubsets;
    }
}
