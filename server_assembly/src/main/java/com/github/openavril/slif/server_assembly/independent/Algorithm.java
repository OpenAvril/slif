package com.github.openavril.slif.server_assembly.independent;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Algorithm_praise0;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Algorithm_praise1;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Algorithm_praise2;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Algorithm_praise3;
public class Algorithm {
    private static long stat_REG_Algorithm_paiseId;
    private static Object stat_REG_AlgorithmSubset;
    // public.
    public Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : Algorithm(byte sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Algorithm(sysThreadId);
        stat_CLASS_boot1_DEFINE_Algorithm(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Algorithm(sysThreadId);
        stat_REG_boot0_DECLAIRE_Algorithm(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : Algorithm(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_Algorithm_paiseId(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Algorithm_paiseId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_AlgorithmSubset(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_ServerAssembly_Algorithm(byte sysThreadId, User_Algorithm objUserAlgorithm) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId, User_Algorithm objUserAlgorithm)" + ".%n");
        stat_REG_boot3_INITIALISE_Algorithm_paiseId(sysThreadId);
        stat_REG_boot3_INITIALISE_AlgorithmSubset(sysThreadId, objUserAlgorithm);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId, User_Algorithm objUserAlgorithm)" + ".%n");
    }
    public long dyn_REG_get_ServerAssembly_Algorithm_praiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : Algorithm_praise0 : dyn_REG_get_ServerAssembly_Algorithm_praiseId(byte sysThreadId)" + ".%n");
        return stat_REG_get_Algorithm_praiseId(sysThreadId);
    }
    public Object dyn_REG_get_ServerAssembly_AlgorithmSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Algorithm_praise0 : dyn_REG_get_ServerAssembly_AlgorithmSubset(byte sysThreadId)" + ".%n");
        return stat_REG_get_AlgorithmSubset(sysThreadId);
    }
    public void dyn_REG_set_ServerAssembly_Algorithm_praiseId(byte sysThreadId, long valuePraiseEventId) {
        System.out.printf("thread " + sysThreadId + " :: => long : Server_Assembly : Algorithm_praise0 : dyn_REG_set_ServerAssembly_Algorithm_praiseId(byte sysThreadId, long valuePraiseEventId)" + ".%n");
        stat_REG_set_Algorithm_praiseId(sysThreadId, valuePraiseEventId);
    }
    public void dyn_REG_set_AlgorithmSubset(byte sysThreadId, Framework obj, long praiseId) {
        User_Algorithm userAlgorithm = obj.dyn_STRUCT_get_User_Algorithm(sysThreadId);
        switch((int) praiseId)
        {
            case 0:
                System.out.printf("thread " + sysThreadId + " :: <= Object> : Server_Assembly : Algorithm_praise0 : dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_AlgorithmSubset(sysThreadId, (Algorithm_praise0)userAlgorithm.dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(sysThreadId, praiseId));
                break;

            case 1:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Algorithm_praise0 : dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_AlgorithmSubset(sysThreadId, (Algorithm_praise1)userAlgorithm.dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(sysThreadId, praiseId));
                break;

            case 2:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Algorithm_praise0 : dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_AlgorithmSubset(sysThreadId, (Algorithm_praise2)userAlgorithm.dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(sysThreadId, praiseId));
                break;

            case 3:
                System.out.printf("thread " + sysThreadId + " :: <= Object : Server_Assembly : Algorithm_praise0 : dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(byte sysThreadId)" + ".%n");
                stat_REG_set_AlgorithmSubset(sysThreadId, (Algorithm_praise3)userAlgorithm.dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(sysThreadId, praiseId));
                break;

        }
    }
    // private.
    private static void stat_CLASS_boot0_DECLAIRE_Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Algorithm(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_Algorithm_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        stat_REG_AlgorithmSubset = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Algorithm_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        stat_REG_Algorithm_paiseId = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_AlgorithmSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
        try {
            stat_REG_AlgorithmSubset = new Object();
        }
        catch (NullPointerException e) {
            System.out.printf("thread " + sysThreadId + "NullPointerException" + ".%n");
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : dyn_REG_boot1_DEFINE_ServerAssembly_Algorithm(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Algorithm_paiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : stat_REG_boot3_INITIALISE_Algorithm_paiseId(byte sysThreadId)" + ".%n");
        stat_REG_Algorithm_paiseId = 0;
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : stat_REG_boot3_INITIALISE_Algorithm_paiseId(byte sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_AlgorithmSubset(byte sysThreadId, User_Algorithm objUserAlgorithm) {
        System.out.printf("thread " + sysThreadId + " :: entered : Server_Assembly : Algorithm : stat_REG_boot3_INITIALISE_AlgorithmSubset(byte sysThreadId, User_Algorithm objUserAlgorithm)" + ".%n");
        stat_REG_AlgorithmSubset = objUserAlgorithm.dyn_REG_get_Item_On_List_Of_AlgorithmSubsets(sysThreadId, 0);
        System.out.printf("thread " + sysThreadId + " :: exiting : Server_Assembly : Algorithm : stat_REG_boot3_INITIALISE_AlgorithmSubset(byte sysThreadId, User_Algorithm objUserAlgorithm)" + ".%n");
    }
    private static long stat_REG_get_Algorithm_praiseId(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : Server_Assembly : Algorithm_praise0 : stat_REG_get_Algorithm_praiseId(byte sysThreadId)" + ".%n");
        return stat_REG_Algorithm_paiseId;
    }
    private static Object stat_REG_get_AlgorithmSubset(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Object> : Server_Assembly : Algorithm_praise0 : stat_REG_get_AlgorithmSubset(byte sysThreadId)" + ".%n");
        return stat_REG_AlgorithmSubset;
    }
    public static void stat_REG_set_Algorithm_praiseId(byte sysThreadId, long valuePraiseEventId) {
        System.out.printf("thread " + sysThreadId + " :: => long : Server_Assembly : Algorithm_praise0 : stat_REG_set_Algorithm_praiseId(byte sysThreadId, long valuePraiseEventId)" + ".%n");
        stat_REG_Algorithm_paiseId = valuePraiseEventId;
    }
    private static void stat_REG_set_AlgorithmSubset(byte sysThreadId, Object objSubset) {
        System.out.printf("thread " + sysThreadId + " :: => Object : Server_Assembly : Algorithm_praise0 : stat_REG_set_AlgorithmSubset(byte sysThreadId, Object objSubset)" + ".%n");
        stat_REG_AlgorithmSubset = objSubset;
    }
}