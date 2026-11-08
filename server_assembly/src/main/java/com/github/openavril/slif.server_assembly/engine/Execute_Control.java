package engine;

public class Execute_Control
{
    private static boolean[][] stat_SIM_REG_FLAG_array_isWaitingOnPraiseReturn;
    private static boolean[][] stat_REG_FLAG_array_isNewDataReadyForInjection;
    private static boolean[][] stat_REG_FLAG_array_isNewDataReadyForExtraction;
    private static boolean[] stat_REG_ptr_Flag_array_ThreadInitialised;
    private static boolean stat_REG_ptr_Flag_isSystemInitialised;
    // public.
    public Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot1_DEFINE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot1_DEFINE_Global(sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Execute_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId);
        stat_REG_boot0_DECLAIRE_Execute_Control(sysThreadId);
    }
    public void app_Terminate_All_Threads(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot1_DEFINE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot1_DEFINE_Global(sysThreadId)" + ".%n");
        for(byte threadId = 0; threadId < Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId); threadId++) {
            stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, threadId, false);
        }
        stat_REG_set_Flag_is_SystemInitialised(sysThreadId, false);
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot2_SUBSTANTIATE_Execute_Control(sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_Flag_isWaitingOnPraiseReturn(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForInjection(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForExtraction(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot2_SUBSTANTIATE_Execute_Control(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot3_INITIALISE_Execute_Control(sysThreadId)" + ".%n");
        stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(sysThreadId);
        stat_REG_boot3_INITIALISE_Flag_isWaitingOnPraiseReturn(sysThreadId);
        stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot3_INITIALISE_Execute_Control(sysThreadId)" + ".%n");
    }
    public boolean dyn_REG_get_Flag_is_SystemInitialised(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)" + ".%n");
        return stat_REG_get_ptr_Flag_is_SystemInitialised(sysThreadId);
    }
    public boolean dyn_REG_get_Flag_isWaitingOnPraiseReturn(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : dyn_REG_get_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
        return stat_REG_get_ptr_Flag_isWaitingOnPraiseReturn(sysThreadId, praiseId);
    }
    public boolean dyn_REG_get_Flag_isNewDataReadyForInjection(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : dyn_REG_get_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
        return stat_REG_get_ptr_Flag_isNewDataReadyForInjection(sysThreadId, praiseId);
    }
    public boolean dyn_REG_get_Flag_isNewDataReadyForExtraction(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : dyn_REG_get_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
        return stat_REG_get_ptr_Flag_isNewDataReadyForExtraction(sysThreadId, praiseId);
    }
    public boolean dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(byte sysThreadId, byte threadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId)" + ".%n");
        return stat_get_ptr_list_Of_flag_ThreadInitialised(sysThreadId, threadId);
    }
    public void dyn_REG_set_Flag_is_SystemInitialised(byte sysThreadId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : dyn_REG_set_Flag_is_SystemInitialised(sysThreadId)" + ".%n");
        stat_REG_set_Flag_is_SystemInitialised(sysThreadId, newFlag);
    }
    public void dyn_REG_set_Flag_isWaitingOnPraiseReturn(byte sysThreadId, long praiseId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : dyn_REG_set_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
        stat_REG_set_Flag_isWaitingOnPraiseReturn(sysThreadId, praiseId, newFlag);
    }
    public void dyn_REG_set_Flag_isNewDataReadyForInjection(byte sysThreadId, long praiseId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : dyn_REG_set_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
        stat_REG_set_Flag_isNewDataReadyForInjection(sysThreadId, praiseId, newFlag);
    }
    public void dyn_REG_set_Flag_isNewDataReadyForExtraction(byte sysThreadId, long praiseId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : dyn_REG_set_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
        stat_REG_set_Flag_isNewDataReadyForExtraction(sysThreadId, praiseId, newFlag);
    }
    public void dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(byte sysThreadId, byte threadId, boolean newBoolValue) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId)" + ".%n");
        stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, threadId, newBoolValue);
    }
    // private.
    private static void stat_CLASS_boot0_DECLAIRE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_CLASS_boot0_DECLAIRE_Execute_Control(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_CLASS_boot0_DECLAIRE_Execute_Control(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Execute_Control(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot0_DECLAIRE_Execute_Control(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot0_DECLAIRE_Execute_Control(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(sysThreadId)" + ".%n");
        stat_REG_ptr_Flag_isSystemInitialised = true;
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Flag_isWaitingOnPraiseReturn(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
        int[] temp = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId));
        stat_SIM_REG_FLAG_array_isWaitingOnPraiseReturn = new boolean[temp[0]+1][temp[1]+1];
        for(int indexA = 0; indexA < temp[0]; indexA++) {
            for (int indexB = 0; indexB < temp[1]; indexB++) {
                stat_SIM_REG_FLAG_array_isWaitingOnPraiseReturn[indexA][indexB] = true;
            }
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForInjection(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
        int[] temp = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId));
        stat_REG_FLAG_array_isNewDataReadyForInjection = new boolean[temp[0]+1][temp[1]+1];
        for(int indexA = 0; indexA < temp[0]; indexA++) {
            for (int indexB = 0; indexB < temp[1]; indexB++) {
                stat_REG_FLAG_array_isNewDataReadyForInjection[indexA][indexB] = true;
            }
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForExtraction(byte sysThreadId)  {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
        int[] temp = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId));
        stat_REG_FLAG_array_isNewDataReadyForExtraction = new boolean[temp[0]+1][temp[1]+1];
        for(int indexA = 0; indexA < temp[0]; indexA++) {
            for (int indexB = 0; indexB < temp[1]; indexB++) {
                stat_REG_FLAG_array_isNewDataReadyForExtraction[indexA][indexB] = true;
            }
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(sysThreadId)" + ".%n");
        stat_REG_ptr_Flag_array_ThreadInitialised = new boolean[3];
        for(byte threadId = 0; threadId < Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId); threadId++) {
            stat_REG_ptr_Flag_array_ThreadInitialised[threadId] = true;
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(sysThreadId)" + ".%n");
        stat_REG_ptr_Flag_isSystemInitialised = false;
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Flag_isWaitingOnPraiseReturn(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
        int[] temp = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId));
        for(int indexA = 0; indexA < temp[0]; indexA++) {
            for (int indexB = 0; indexB < temp[1]; indexB++) {
                stat_SIM_REG_FLAG_array_isWaitingOnPraiseReturn[indexA][indexB] = false;
            }
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Flag_isNewDataReadyForInjection(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
        int[] temp = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId));
        for(int indexA = 0; indexA < temp[0]; indexA++) {
            for (int indexB = 0; indexB < temp[1]; indexB++) {
                stat_REG_FLAG_array_isNewDataReadyForInjection[indexA][indexB] = false;
            }
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Flag_isNewDataReadyForExtraction(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
        int[] temp = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId));
        for(int indexA = 0; indexA < temp[0]; indexA++) {
            for (int indexB = 0; indexB < temp[1]; indexB++) {
                stat_REG_FLAG_array_isNewDataReadyForExtraction[indexA][indexB] = false;
            }
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(sysThreadId)" + ".%n");
        for(byte threadId = 0; threadId < Global.stat_REG_get_NUMBER_OF_THREADS(sysThreadId); threadId++) {
            stat_REG_ptr_Flag_array_ThreadInitialised[threadId] = false;
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(sysThreadId)" + ".%n");
    }
    private static boolean stat_REG_get_ptr_Flag_is_SystemInitialised(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : stat_REG_get_ptr_Flag_is_SystemInitialised(sysThreadId)" + ".%n");
        return stat_REG_ptr_Flag_isSystemInitialised;
    }
    private static boolean stat_REG_get_ptr_Flag_isWaitingOnPraiseReturn(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : stat_REG_get_ptr_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
        int[] switching = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, praiseId);
        return stat_SIM_REG_FLAG_array_isWaitingOnPraiseReturn[switching[0]][switching[1]];
    }
    private static boolean stat_REG_get_ptr_Flag_isNewDataReadyForInjection(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : stat_REG_get_ptr_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
        int[] switching = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, praiseId);
        return stat_REG_FLAG_array_isNewDataReadyForInjection[switching[0]][switching[1]];
    }
    private static boolean stat_REG_get_ptr_Flag_isNewDataReadyForExtraction(byte sysThreadId, long praiseId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : stat_REG_get_ptr_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
        int[] switching = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, praiseId);
        return stat_REG_FLAG_array_isNewDataReadyForExtraction[switching[0]][switching[1]];
    }
    private static boolean stat_get_ptr_list_Of_flag_ThreadInitialised(byte sysThreadId, byte threadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : stat_get_ptr_list_Of_flag_ThreadInitialised(sysThreadId)" + ".%n");
        return stat_REG_ptr_Flag_array_ThreadInitialised[threadId];
    }
    private static void stat_REG_set_Flag_is_SystemInitialised(byte sysThreadId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : stat_REG_set_Flag_is_SystemInitialised(sysThreadId)" + ".%n");
        stat_REG_ptr_Flag_isSystemInitialised = newFlag;
    }
    private static void stat_REG_set_Flag_isWaitingOnPraiseReturn(byte sysThreadId, long praiseId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : stat_REG_set_Flag_isWaitingOnPraiseReturn(sysThreadId)" + ".%n");
        int[] switching = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, praiseId);
        stat_SIM_REG_FLAG_array_isWaitingOnPraiseReturn[switching[0]][switching[1]] = newFlag;
    }
    private static void stat_REG_set_Flag_isNewDataReadyForInjection(byte sysThreadId, long praiseId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : stat_REG_set_Flag_isNewDataReadyForInjection(sysThreadId)" + ".%n");
        int[] switching = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, praiseId);
        stat_REG_FLAG_array_isNewDataReadyForInjection[switching[0]][switching[1]] = newFlag;
    }
    private static void stat_REG_set_Flag_isNewDataReadyForExtraction(byte sysThreadId, long praiseId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : stat_REG_set_Flag_isNewDataReadyForExtraction(sysThreadId)" + ".%n");
        int[] switching = Global.stat_CONVERT_Long_To_twoInts(sysThreadId, praiseId);
        stat_REG_FLAG_array_isNewDataReadyForExtraction[switching[0]][switching[1]] = newFlag;
    }
    private static void stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(byte sysThreadId, byte threadId, boolean newFlag) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId)" + ".%n");
        stat_REG_ptr_Flag_array_ThreadInitialised[threadId] = newFlag;
    }
}
