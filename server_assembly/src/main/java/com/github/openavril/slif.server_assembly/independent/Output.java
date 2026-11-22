package com.github.openavril.slif.server_assembly.independent;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise0;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise1;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise2;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise3;
public class Output {
    private static long stat_REG_Output_paiseId;
    private static Object stat_REG_OutputSubset;
    // public.
    public Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : Output(byte sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Output(sysThreadId);
        stat_CLASS_boot1_DEFINE_Output(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Output(sysThreadId);
        stat_REG_boot0_DECLAIRE_Output(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_Output_paiseId(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Output_paiseId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_OutputSubset(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_ServerAssembly_Output(byte sysThreadId, User_Output objUserOutput) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId, User_Output objUserOutput)" + ".%n");
        stat_REG_boot3_INITIALISE_Output_paiseId(sysThreadId);
        stat_REG_boot3_INITIALISE_OutputSubset(sysThreadId, objUserOutput);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId, User_Output objUserOutput)" + ".%n");
    }
    public long dyn_REG_get_ServerAssembly_Output_praiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : Output_praise0 : dyn_REG_get_ServerAssembly_Output_praiseId(byte sysThreadId)" + ".%n");
        return stat_REG_get_Output_praiseId(sysThreadId);
    }
    public Object dyn_REG_get_ServerAssembly_OutputSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Output_praise0 : dyn_REG_get_ServerAssembly_OutputSubset(byte sysThreadId)" + ".%n");
        return stat_REG_get_OutputSubset(sysThreadId);
    }
    public void dyn_REG_set_ServerAssembly_Output_praiseId(byte sysThreadId, long valuePraiseEventId) {
        System.out.printf("thread " + sysThreadId + " :: => long : Server_Assembly : Output_praise0 : dyn_REG_set_ServerAssembly_Output_praiseId(byte sysThreadId, long valuePraiseEventId)" + ".%n");
        stat_REG_set_Output_praiseId(sysThreadId, valuePraiseEventId);
    }
    public void dyn_REG_set_OutputSubset(byte sysThreadId, Framework obj, long praiseId) {
        User_Output userOutput = obj.dyn_STRUCT_get_User_Output(sysThreadId);
        switch((int) praiseId)
        {
            case 0:
                System.out.printf("thread " + sysThreadId + " :: <= Object> : Server_Assembly : Output_praise0 : dyn_REG_get_Item_On_List_Of_OutputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_OutputSubset(sysThreadId, (Output_praise0)userOutput.dyn_REG_get_Item_On_List_Of_OutputSubsets(sysThreadId, praiseId));
                break;

            case 1:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Output_praise0 : dyn_REG_get_Item_On_List_Of_OutputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_OutputSubset(sysThreadId, (Output_praise1)userOutput.dyn_REG_get_Item_On_List_Of_OutputSubsets(sysThreadId, praiseId));
                break;

            case 2:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Output_praise0 : dyn_REG_get_Item_On_List_Of_OutputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_OutputSubset(sysThreadId, (Output_praise2)userOutput.dyn_REG_get_Item_On_List_Of_OutputSubsets(sysThreadId, praiseId));
                break;

            case 3:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Output_praise0 : dyn_REG_get_Item_On_List_Of_OutputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_OutputSubset(sysThreadId, (Output_praise3)userOutput.dyn_REG_get_Item_On_List_Of_OutputSubsets(sysThreadId, praiseId));
                break;

        }
    }
    // private.
    private static void stat_CLASS_boot0_DECLAIRE_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_Output_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        stat_REG_OutputSubset = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Output_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        stat_REG_Output_paiseId = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_OutputSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
        try {
            stat_REG_OutputSubset = new Object();
        }
        catch (NullPointerException e) {
            System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : dyn_REG_boot1_DEFINE_ServerAssembly_Output(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Output_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : stat_REG_boot3_INITIALISE_Output_paiseId(byte sysThreadId)" + ".%n");
        stat_REG_Output_paiseId = 0;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : stat_REG_boot3_INITIALISE_Output_paiseId(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_OutputSubset(byte sysThreadId, User_Output objUserOutput) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Output : stat_REG_boot3_INITIALISE_OutputSubset(byte sysThreadId, User_Output objUserOutput)" + ".%n");
        stat_REG_OutputSubset = objUserOutput.dyn_REG_get_Item_On_List_Of_OutputSubsets(sysThreadId, 0);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Output : stat_REG_boot3_INITIALISE_OutputSubset(byte sysThreadId, User_Output objUserOutput)" + ".%n");
    }
    private static long stat_REG_get_Output_praiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : Output_praise0 : stat_REG_get_Output_praiseId(byte sysThreadId)" + ".%n");
        return stat_REG_Output_paiseId;
    }
    private static Object stat_REG_get_OutputSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object> : Server_Assembly : Output_praise0 : stat_REG_get_OutputSubset(byte sysThreadId)" + ".%n");
        return stat_REG_OutputSubset;
    }
    public static void stat_REG_set_Output_praiseId(byte sysThreadId, long valuePraiseEventId) {
        System.out.printf("thread " + sysThreadId + " :: => long : Server_Assembly : Output_praise0 : stat_REG_set_Output_praiseId(byte sysThreadId, long valuePraiseEventId)" + ".%n");
        stat_REG_Output_paiseId = valuePraiseEventId;
    }
    private static void stat_REG_set_OutputSubset(byte sysThreadId, Object objSubset) {
        System.out.printf("thread " + sysThreadId + " :: => Object : Server_Assembly : Output_praise0 : stat_REG_set_OutputSubset(byte sysThreadId, Object objSubset)" + ".%n");
        stat_REG_OutputSubset = objSubset;
    }
}