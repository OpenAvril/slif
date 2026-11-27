package com.github.openavril.slif.server_assembly.independent;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise0;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise1;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise2;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise3;
public class Input {
    private static long stat_REG_Input_paiseId;
    private static Object stat_REG_InputSubset;
// public.
    public Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : Input(byte sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Input(sysThreadId);
        stat_CLASS_boot1_DEFINE_Input(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Input(sysThreadId);
        stat_REG_boot0_DECLAIRE_Input(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : Input(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_Input_paiseId(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Input_paiseId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_InputSubset(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_ServerAssembly_Input(byte sysThreadId, User_Input objUserInput) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId, User_Input objUserInput)" + ".%n");
        stat_REG_boot3_INITIALISE_Input_paiseId(sysThreadId);
        stat_REG_boot3_INITIALISE_InputSubset(sysThreadId, objUserInput);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId, User_Input objUserInput)" + ".%n");
    }
    public long dyn_REG_get_ServerAssembly_Input_praiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : Input_praise0 : dyn_REG_get_ServerAssembly_Input_praiseId(byte sysThreadId)" + ".%n");
        return stat_REG_get_Input_praiseId(sysThreadId);
    }
    public Object dyn_REG_get_ServerAssembly_InputSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Input_praise0 : dyn_REG_get_ServerAssembly_InputSubset(byte sysThreadId)" + ".%n");
        return stat_REG_get_InputSubset(sysThreadId);
    }
    public void dyn_REG_set_ServerAssembly_Input_praiseId(byte sysThreadId, long valuePraiseEventId) {
        System.out.printf("thread " + sysThreadId + " :: => long : Server_Assembly : Input_praise0 : dyn_REG_set_ServerAssembly_Input_praiseId(byte sysThreadId, long valuePraiseEventId)" + ".%n");
        stat_REG_set_Input_praiseId(sysThreadId, valuePraiseEventId);
    }
    public void dyn_REG_set_InputSubset(byte sysThreadId, Framework obj, long praiseId) {
        User_Input userInput = obj.dyn_STRUCT_get_User_Input(sysThreadId);
        switch((int) praiseId)
        {
            case 0:
                System.out.printf("thread " + sysThreadId + " :: <= Object> : Server_Assembly : Input_praise0 : dyn_REG_get_Item_On_List_Of_InputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_InputSubset(sysThreadId, (Input_praise0)userInput.dyn_REG_get_Item_On_List_Of_InputSubsets(sysThreadId, praiseId));
                break;

            case 1:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Input_praise0 : dyn_REG_get_Item_On_List_Of_InputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_InputSubset(sysThreadId, (Input_praise1)userInput.dyn_REG_get_Item_On_List_Of_InputSubsets(sysThreadId, praiseId));
                break;

            case 2:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Input_praise0 : dyn_REG_get_Item_On_List_Of_InputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_InputSubset(sysThreadId, (Input_praise2)userInput.dyn_REG_get_Item_On_List_Of_InputSubsets(sysThreadId, praiseId));
                break;

            case 3:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Input_praise0 : dyn_REG_get_Item_On_List_Of_InputSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_InputSubset(sysThreadId, (Input_praise3)userInput.dyn_REG_get_Item_On_List_Of_InputSubsets(sysThreadId, praiseId));
                break;

        }
    }
// private.
    private static void stat_CLASS_boot0_DECLAIRE_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_Input_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        stat_REG_InputSubset = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Input_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        stat_REG_Input_paiseId = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_InputSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
        try {
            stat_REG_InputSubset = new Object();
        }
        catch (NullPointerException e) {
            System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : dyn_REG_boot1_DEFINE_ServerAssembly_Input(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Input_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : stat_REG_boot3_INITIALISE_Input_paiseId(byte sysThreadId)" + ".%n");
        stat_REG_Input_paiseId = 0;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : stat_REG_boot3_INITIALISE_Input_paiseId(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_InputSubset(byte sysThreadId, User_Input objUserInput) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Input : stat_REG_boot3_INITIALISE_InputSubset(byte sysThreadId, User_Input objUserInput)" + ".%n");
        stat_REG_InputSubset = objUserInput.dyn_REG_get_Item_On_List_Of_InputSubsets(sysThreadId, 0);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Input : stat_REG_boot3_INITIALISE_InputSubset(byte sysThreadId, User_Input objUserInput)" + ".%n");
    }
    private static long stat_REG_get_Input_praiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : Input_praise0 : stat_REG_get_Input_praiseId(byte sysThreadId)" + ".%n");
        return stat_REG_Input_paiseId;
    }
    private static Object stat_REG_get_InputSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object> : Server_Assembly : Input_praise0 : stat_REG_get_InputSubset(byte sysThreadId)" + ".%n");
        return stat_REG_InputSubset;
    }
    public static void stat_REG_set_Input_praiseId(byte sysThreadId, long valuePraiseEventId) {
        System.out.printf("thread " + sysThreadId + " :: => long : Server_Assembly : Input_praise0 : stat_REG_set_Input_praiseId(byte sysThreadId, long valuePraiseEventId)" + ".%n");
        stat_REG_Input_paiseId = valuePraiseEventId;
    }
    private static void stat_REG_set_InputSubset(byte sysThreadId, Object objSubset) {
        System.out.printf("thread " + sysThreadId + " :: => Object : Server_Assembly : Input_praise0 : stat_REG_set_InputSubset(byte sysThreadId, Object objSubset)" + ".%n");
        stat_REG_InputSubset = objSubset;
    }
}