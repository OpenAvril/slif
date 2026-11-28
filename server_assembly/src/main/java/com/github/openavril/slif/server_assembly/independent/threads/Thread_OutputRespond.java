package com.github.openavril.slif.server_assembly.independent.threads;
import com.github.openavril.slif.Epicentre;
import com.github.openavril.slif.MutexQue;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.engine.Global;
import com.github.openavril.slif.server_assembly.independent.Output;
import com.github.openavril.slif.server_assembly.independent.praise_sets.*;
import java.util.LinkedList;
public class Thread_OutputRespond {
    public static boolean stat_REG_flag_isNewOutputReady;
    private static Output stat_REG_Buffer_For_Output;
    private static LinkedList<Object> stat_REG_RAW_Buffer_List_of_Objects;
    private static final byte stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond = 1;
    private static final byte stat_CONST_AccessId_MutexOutputSample_ThreadRespond = 0;
// public.
    public Thread_OutputRespond(byte sysThreadId) {
        stat_CLASS_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId);
        stat_CLASS_boot1_DEFINE_Thread_OutputRespond(sysThreadId);
        stat_REG_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId);
    }
    public void dyn_Thread_OutputRespond(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_Thread_OutputRespond(sysThreadId)" + ".%n");
        boolean checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, sysThreadId, true);

            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            checkPass = true;
        }
        checkPass = false;
        boolean temp = true;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
        }
        checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);

                //obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).stat_App_Thread_Respond(sysThreadId, obj, sysThreadId);
            }
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : dyn_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_Thread_OutputRespond(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_REG_boot1_DEFINE_Thread_OutputRespond(sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_Buffer_Output(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : dyn_REG_boot1_DEFINE_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Thread_OutputRespond(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_REG_boot2_SUBSTANTIATE_Thread_OutputRespond(sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Buffer_Output(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_flag_isNewOutputReady(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : dyn_REG_boot2_SUBSTANTIATE_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_Thread_OutputRespond(byte sysThreadId, Framework obj, Output structDEFAULT_Output) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_REG_boot3_INITIALISE_Thread_OutputRespond(sysThreadId)" + ".%n");
        stat_REG_boot3_INITIALISE_Buffer_Output(sysThreadId, structDEFAULT_Output);
        stat_REG_boot3_INITIALISE_flag_isNewOutputReady(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : dyn_REG_boot3_INITIALISE_Thread_OutputRespond(sysThreadId)" + ".%n");    }
    public Output dyn_REG_get_Buffer_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class Output : Thread_OutputRespond : dyn_REG_get_Buffer_Output(sysThreadId)" + ".%n");
        return stat_REG_get_Buffer_Output(sysThreadId);
    }
    public boolean dyn_REG_get_flag_isNewOutputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : Thread_OutputRespond : dyn_REG_get_flag_isNewOutputReady(sysThreadId)" + ".%n");
        return stat_REG_get_flag_isNewOutputReady(sysThreadId);
    }
    public void dyn_REG_set_flag_isNewOutputReady(byte sysThreadId, boolean value) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : Thread_OutputRespond : dyn_REG_set_flag_isNewOutputReady(sysThreadId)" + ".%n");
        stat_REG_set_flag_isNewOutputReady(sysThreadId,value);
    }
// private.
    private void stat_App_Thread_Respond(byte sysThreadId, Framework obj, byte threadId) {
        MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
        if (Epicentre.get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId))) {
            System.out.printf("thread " + sysThreadId + " :: <= CC : Epicentre : get_FLAG_isStackLoaded_ServerOutputSend() = " + true + "%n");//todo SIMULATION
            if (!obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).dyn_REG_get_flag_isNewOutputReady(sysThreadId)) {
                System.out.printf("thread " + sysThreadId + " :: <= CC : Epicentre : get_FLAG_isStackLoaded_ServerOutputSend() = " + false + "%n");//todo SIMULATION
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
                MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId), stat_CONST_AccessId_MutexOutputSample_ThreadRespond);
                stat_REG_Buffer_For_Output = obj.dyn_STRUCT_get_Output(sysThreadId);
                stat_REG_RAW_Buffer_List_of_Objects = new LinkedList<Object>();
                long praiseEventId = Epicentre.get_MetaData_PraiseEventId(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId));
                stat_REG_RAW_Buffer_List_of_Objects.addFirst(Epicentre.get_Output(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId), praiseEventId));
                stat_REG_RAW_Buffer_List_of_Objects = (LinkedList<Object>)stat_REG_RAW_Buffer_List_of_Objects.getFirst();
                stat_REG_Buffer_For_Output.dyn_REG_set_ServerAssembly_Output_praiseId(sysThreadId, (long)stat_REG_RAW_Buffer_List_of_Objects.getFirst());
                stat_REG_Buffer_For_Output.dyn_REG_set_OutputSubset(sysThreadId, obj, stat_REG_Buffer_For_Output.dyn_REG_get_ServerAssembly_Output_praiseId(sysThreadId));
                Output_praise0 subset_of_output_for_praise0 = null;
                Output_praise1 subset_of_output_for_praise1 = null;
                Output_praise2 subset_of_output_for_praise2 = null;
                Output_praise3 subset_of_output_for_praise3 = null;
                int[] thread_Listen_switch = null;
                thread_Listen_switch = new int[2];
                thread_Listen_switch = Global.stat_CONVERT_VALUEofLong_To_VALUEoftwoInts(sysThreadId, stat_REG_Buffer_For_Output.dyn_REG_get_ServerAssembly_Output_praiseId(sysThreadId));
                System.out.printf("thread " + sysThreadId + " :: switch(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                switch (thread_Listen_switch[0]) {
                    case 0:
                        switch (thread_Listen_switch[1]) {
                            case 0:
                                try {
                                    subset_of_output_for_praise0 = (Output_praise0)stat_REG_Buffer_For_Output.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                    subset_of_output_for_praise0.dyn_REG_set_ServerAssembly_PraiseSet0_STRUCT_Output_value(sysThreadId, Global.stat_CONVERT_ByteArray_To_VALUEofDouble(sysThreadId, Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, (byte[])stat_REG_RAW_Buffer_List_of_Objects.get(2))));
                                } catch (NullPointerException e) {
                                    System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                    System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                    System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case 1:
                                try {
                                    subset_of_output_for_praise1 = (Output_praise1)stat_REG_Buffer_For_Output.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                    subset_of_output_for_praise1.dyn_REG_set_ServerAssembly_PraiseSet1_STRUCT_Output_value(sysThreadId, Global.stat_CONVERT_ByteArray_To_VALUEofDouble(sysThreadId, Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, (byte[])stat_REG_RAW_Buffer_List_of_Objects.get(2))));
                                } catch (NullPointerException e) {
                                    System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                    System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                    System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case 2:
                                try {
                                    subset_of_output_for_praise2 = (Output_praise2)stat_REG_Buffer_For_Output.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                    subset_of_output_for_praise2.dyn_REG_set_ServerAssembly_PraiseSet2_STRUCT_Output_value(sysThreadId, Global.stat_CONVERT_ByteArray_To_VALUEofDouble(sysThreadId, Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, (byte[])stat_REG_RAW_Buffer_List_of_Objects.get(2))));
                                } catch (NullPointerException e) {
                                    System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                    System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                    System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case 3:
                                try {
                                    subset_of_output_for_praise3 = (Output_praise3)stat_REG_Buffer_For_Output.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                    subset_of_output_for_praise3.dyn_REG_set_ServerAssembly_PraiseSet3_STRUCT_Output_value(sysThreadId, Global.stat_CONVERT_ByteArray_To_VALUEofDouble(sysThreadId, Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, (byte[])stat_REG_RAW_Buffer_List_of_Objects.get(2))));
                                } catch (NullPointerException e) {
                                    System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                    System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                    System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                break;

                            default:
                                System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    case Integer.MAX_VALUE:
                        switch (thread_Listen_switch[1]) {
                            case 0:
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                break;

                            default:
                                System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    case -1:
                        switch (thread_Listen_switch[1]) {
                            case 0:
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                break;

                            default:
                                System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    case Integer.MIN_VALUE:
                        switch (thread_Listen_switch[1]) {
                            case 0:
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                System.out.printf("thread " + sysThreadId + " :: is primed DEFAULT case(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                                break;

                            default:
                                System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    default:
                        System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch[0] + ", " + thread_Listen_switch[1] + ")" + ".%n");//todo SIMULATION
                        break;
                }
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Buffer_At_Simulation_OutputSamples(sysThreadId), stat_CONST_AccessId_MutexOutputSample_ThreadRespond);
                MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
                obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).dyn_REG_set_flag_isNewOutputReady(sysThreadId, true);
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            } else {
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            }
        }
   }
    private void stat_App_Decode_NetworkingSteam_At_Server_Output_Recieve(byte sysThreadId, Framework obj, Output Output, byte[] buffer) {
  /*
        byte[] temp = new byte[4];
        for (byte index = 0; index < 4; index++) {
            temp[0] = buffer[0];
        }
        Output.dyn_REG_set_Output_praiseId(Global.stat_CONVERT_ByteArray_To_Long(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
        Output.dyn_REG_set_OutputSubset(obj, Global.stat_CONVERT_ByteArray_To_Long(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
        switch ((int) Output.dyn_REG_get_Output_praiseId()) {
            case 0:
                Output_praise0 subset_of_Output_for_praise0 = (Output_praise0) Output.dyn_REG_get_OutputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_Output_for_praise0.dyn_REG_set_Output_praise0_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_Output_for_praise0.dyn_REG_set_Output_praise0_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;

            case 1:
                Output_praise1 subset_of_Output_for_praise1 = (Output_praise1) Output.dyn_REG_get_OutputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_Output_for_praise1.dyn_REG_set_Output_praise1_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_Output_for_praise1.dyn_REG_set_Output_praise1_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;

            case 2:
                Output_praise2 subset_of_Output_for_praise2 = (Output_praise2) Output.dyn_REG_get_OutputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_Output_for_praise2.dyn_REG_set_Output_praise2_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_Output_for_praise2.dyn_REG_set_Output_praise2_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;

            case 3:
                Output_praise3 subset_of_Output_for_praise3 = (Output_praise3) Output.dyn_REG_get_OutputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_Output_for_praise3.dyn_REG_set_Output_praise3_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_Output_for_praise3.dyn_REG_set_Output_praise3_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;
        }

   */
    }
    private void stat_App_Encode_NetworkingSteam_At_Server_Output_Send(byte sysThreadId, Framework obj, Output output, byte[] buffer) {
    /*
        byte[] temp = Global.stat_CONVERT_ByteArray_To_ReverseByteArray(Global.stat_CONVERT_Long_To_ByteArray(output.dyn_REG_get_Output_praiseId()));
        for (byte index = 0; index < 4; index++) {
            buffer[index] = temp[index];
        }
        output.dyn_REG_set_OutputSubset(obj, output.dyn_REG_get_Output_praiseId());
        switch ((int) output.dyn_REG_get_Output_praiseId()) {
            case 0:
                Output_praise0 subset_of_output_for_praise0 = (Output_praise0) output.dyn_REG_get_OutputSubset();
                temp = Global.stat_CONVERT_ByteArray_To_ReverseByteArray(Global.stat_CONVERT_Double_To_ByteArray(subset_of_output_for_praise0.dyn_REG_get_output_praise0_value()));
                for (byte index = 0; index < 4; index++) {
                    buffer[index] = temp[index];
                }
                break;

            case 1:
                Output_praise1 subset_of_output_for_praise1 = (Output_praise1) output.dyn_REG_get_OutputSubset();
                temp = Global.stat_CONVERT_ByteArray_To_ReverseByteArray(Global.stat_CONVERT_Double_To_ByteArray(subset_of_output_for_praise1.dyn_REG_get_output_praise1_value()));
                for (byte index = 0; index < 4; index++) {
                    buffer[index] = temp[index];
                }
                break;

            case 2:
                Output_praise2 subset_of_output_for_praise2 = (Output_praise2) output.dyn_REG_get_OutputSubset();
                temp = Global.stat_CONVERT_ByteArray_To_ReverseByteArray(Global.stat_CONVERT_Double_To_ByteArray(subset_of_output_for_praise2.dyn_REG_get_output_praise2_value()));
                for (byte index = 0; index < 4; index++) {
                    buffer[index] = temp[index];
                }
                break;

            case 3:
                Output_praise3 subset_of_output_for_praise3 = (Output_praise3) output.dyn_REG_get_OutputSubset();
                temp = Global.stat_CONVERT_ByteArray_To_ReverseByteArray(Global.stat_CONVERT_Double_To_ByteArray(subset_of_output_for_praise3.dyn_REG_get_output_praise3_value()));
                for (byte index = 0; index < 4; index++) {
                    buffer[index] = temp[index];
                }
                break;
        }

     */
    }
    private static void stat_CLASS_boot0_DECLAIRE_Thread_OutputRespond(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_CLASS_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_CLASS_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Thread_OutputRespond(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_CLASS_boot1_DEFINE_Thread_OutputRespond(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_CLASS_boot1_DEFINE_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Thread_OutputRespond(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_REG_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_REG_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_Buffer_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_REG_boot1_DEFINE_Buffer_Output(sysThreadId)" + ".%n");
        stat_REG_Buffer_For_Output = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_REG_boot1_DEFINE_Buffer_Output(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Buffer_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_REG_boot2_SUBSTANTIATE_Buffer_Output(sysThreadId)" + ".%n");
        stat_REG_Buffer_For_Output = new Output(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_REG_boot2_SUBSTANTIATE_Buffer_Output(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_flag_isNewOutputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_REG_boot2_SUBSTANTIATE_flag_isNewOutputReady(sysThreadId)" + ".%n");
        stat_REG_flag_isNewOutputReady = true;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_REG_boot2_SUBSTANTIATE_flag_isNewOutputReady(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Buffer_Output(byte sysThreadId, Output structDEFAULT_Output) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_REG_boot3_INITIALISE_Buffer_Output(sysThreadId)" + ".%n");
        stat_REG_Buffer_For_Output = structDEFAULT_Output;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_REG_boot3_INITIALISE_Buffer_Output(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_flag_isNewOutputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : stat_REG_boot3_INITIALISE_flag_isNewOutputReady(sysThreadId)" + ".%n");
        stat_REG_flag_isNewOutputReady = false;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : stat_REG_boot3_INITIALISE_flag_isNewOutputReady(sysThreadId)" + ".%n");
    }
    private static Output stat_REG_get_Buffer_Output(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class Output : Thread_OutputRespond : stat_REG_get_Buffer_Output(sysThreadId)" + ".%n");
        return stat_REG_Buffer_For_Output;
    }
    private static boolean stat_REG_get_flag_isNewOutputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : Thread_OutputRespond :  stat_REG_get_flag_isNewOutputReady(sysThreadId)" + ".%n");
        return stat_REG_flag_isNewOutputReady;
    }
    private static void stat_REG_set_flag_isNewOutputReady(byte sysThreadId, boolean value) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : Thread_OutputRespond :  stat_REG_set_flag_isNewOutputReady(sysThreadId)" + ".%n");
        stat_REG_flag_isNewOutputReady = value;
    }
}