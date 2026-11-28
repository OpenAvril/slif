package com.github.openavril.slif.server_assembly.independent.threads;
import com.github.openavril.slif.Epicentre;
import com.github.openavril.slif.MutexQue;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.engine.Global;
import com.github.openavril.slif.server_assembly.independent.Input;
import com.github.openavril.slif.server_assembly.independent.Output;
import com.github.openavril.slif.server_assembly.independent.praise_sets.*;

import java.util.Scanner;

public class Thread_InputListen {
    public static boolean stat_REG_flag_isNewInputReady;
    private static Input stat_REG_Buffer_For_Input;
    private static final byte stat_CONST_AccessId_MutexQueConditionCode_ThreadListen = 0;
    private static final byte stat_CONST_AccessId_MutexInputSample_ThreadListen = 0;
// public.
    public Thread_InputListen(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : Thread_InputListen(sysThreadId)" + ".%n");
        stat_CLASS_boot0_DECLAIRE_Thread_InputListen(sysThreadId);
        stat_CLASS_boot1_DEFINE_Thread_InputListen(sysThreadId);
        stat_REG_boot0_DECLAIRE_Thread_InputListen(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : Thread_InputListen(sysThreadId)" + ".%n");
    }
    public void dyn_Thread_InputListen(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : dyn_Thread_InputListen(sysThreadId)" + ".%n");
        boolean checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, sysThreadId, true);
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
            checkPass = true;
        }
        checkPass = false;
        boolean temp = true;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
            temp = true;
            for (byte index = 0; index < Global.stat_REG_get_ServerAssembly_NUMBER_OF_THREADS(sysThreadId); index++) {
                if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, index)) {
                    temp = false;
                    break;
                }
            }
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Flag_is_SystemInitialised(sysThreadId, temp);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
        }
        checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
                obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).stat_App_Thread_Listen(sysThreadId, obj, (byte)(0));
            }
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
            if(obj.dyn_CLASS_get_SIMULATION(sysThreadId).dyn_REG_get_FLAG_isSimulationComplete(sysThreadId)) {
                obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Flag_is_SystemInitialised(sysThreadId,false);
            }
            if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
        }
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : dyn_Thread_InputListen(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_Thread_InputListen(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : dyn_REG_boot1_DEFINE_Thread_InputListen(sysThreadId)" + ".%n");
        stat_REG_boot1_DEFINE_Buffer_Input(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : dyn_REG_boot1_DEFINE_Thread_InputListen(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Thread_InputListen(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : dyn_REG_boot2_SUBSTANTIATE_Thread_InputListen(sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Buffer_Input(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_flag_isNewInputReady(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : dyn_REG_boot2_SUBSTANTIATE_Thread_InputListen(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_Thread_InputListen(byte sysThreadId, Framework obj, Input structDEFAULT_Input) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : dyn_REG_boot3_INITIALISE_Thread_InputListen(sysThreadId)" + ".%n");
        stat_REG_boot3_INITIALISE_Buffer_Input(sysThreadId, structDEFAULT_Input);
        stat_REG_boot3_INITIALISE_flag_isNewInputReady(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : dyn_REG_boot3_INITIALISE_Thread_InputListen(sysThreadId)" + ".%n");    }
    public Input dyn_REG_get_Buffer_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class Input : Thread_InputListen : dyn_REG_get_Buffer_Input(sysThreadId)" + ".%n");
        return stat_REG_get_Buffer_Input(sysThreadId);
    }
    public boolean dyn_REG_get_flag_isNewInputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : Thread_InputListen : dyn_REG_get_flag_isNewInputReady(sysThreadId)" + ".%n");
        return stat_REG_get_flag_isNewInputReady(sysThreadId);
    }
    public void dyn_REG_set_flag_isNewInputReady(byte sysThreadId, boolean value) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : Thread_InputListen : dyn_REG_set_flag_isNewInputReady(sysThreadId)" + ".%n");
        stat_REG_set_flag_isNewInputReady(sysThreadId,value);
    }
 // private.
    private void stat_App_Thread_Listen (byte sysThreadId, Framework obj,byte threadId) {
        MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
        if (obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).dyn_REG_get_flag_isNewInputReady(sysThreadId)) {
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
            System.out.printf("thread " + sysThreadId + " :: <= CC : stat_REG_get_flag__isNewInputReady() => " + true + "%n");//todo SIMULATION
            stat_REG_Buffer_For_Input = obj.dyn_STRUCT_get_Input(sysThreadId);
            Input_praise0 subset_of_input_for_praise0 = null;
            Input_praise1 subset_of_input_for_praise1 = null;
            Input_praise2 subset_of_input_for_praise2 = null;
            Input_praise3 subset_of_input_for_praise3 = null;
            //stat_App_Decode_NetworkingSteam_At_Server_Input_Recieve(obj, SIMstat_REG_input_Sample, stat_REG_get_Buffer__Input());//todo SIMULATION undo
            //stat_REG_Buffer_For_Input = SIMstat_REG_input_Sample;//todo SIMULATION
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Buffer_At_Simulation_InputSamples(sysThreadId), stat_CONST_AccessId_MutexInputSample_ThreadListen);
            Epicentre.set_MetaData_PraiseEventId(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId), stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId));
            int[] thread_Listen_switch_A = Global.stat_CONVERT_VALUEofLong_To_VALUEoftwoInts(sysThreadId, stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId));
            System.out.printf("thread " + sysThreadId + " :: switch(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
            switch (thread_Listen_switch_A[0]) {
                case 0:
                    switch (thread_Listen_switch_A[1]) {
                        case 0:
                            try {
                                subset_of_input_for_praise0 = (Input_praise0)stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                Epicentre.set_InputItemsFor_praise0(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId), stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId));
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
                                subset_of_input_for_praise1 = (Input_praise1)stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                Epicentre.set_InputItemsFor_praise1(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId), stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId));
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
                                subset_of_input_for_praise2 = (Input_praise2)stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                Epicentre.set_InputItemsFor_praise2(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId), stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId));
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
                                subset_of_input_for_praise3 = (Input_praise3)stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                Epicentre.set_InputItemsFor_praise3(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_Epicentre(sysThreadId), stat_REG_Buffer_For_Input.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId), subset_of_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId));
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
                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;
                    }
                    break;

                case Integer.MAX_VALUE:
                    switch (thread_Listen_switch_A[1]) {
                        case 0:
                            break;

                        case Integer.MAX_VALUE:
                            break;

                        case -1:
                            break;

                        case Integer.MIN_VALUE:
                            break;

                        default:
                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;
                    }
                    break;

                case -1:
                    switch (thread_Listen_switch_A[1]) {
                        case 0:
                            break;

                        case Integer.MAX_VALUE:
                            break;

                        case -1:
                            break;

                        case Integer.MIN_VALUE:
                            break;

                        default:
                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;
                    }
                    break;

                case Integer.MIN_VALUE:
                    switch (thread_Listen_switch_A[1]) {
                        case 0:
                            break;

                        case Integer.MAX_VALUE:
                            break;

                        case -1:
                            break;

                        case Integer.MIN_VALUE:
                             System.out.printf("thread " + sysThreadId + " :: is primed DEFAULT case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;

                        default:
                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;
                    }
                    break;

                default:
                     System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                    break;
            }
        } else {
            System.out.printf("thread " + sysThreadId + " :: WriteQue : CC : close access @ 0%n");
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadListen);
        }
    }
    private void stat_App_DeCode_NetworkingSteam_At_Server_Input_Receive(byte sysThreadId, Framework obj, Input input, byte[] buffer) {
  /*
        byte[] temp = new byte[4];
        for (byte index = 0; index < 4; index++) {
            temp[0] = buffer[0];
        }
        input.dyn_REG_set_Input_praiseId(Global.stat_CONVERT_ByteArray_To_Long(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
        input.dyn_REG_set_InputSubset(obj, Global.stat_CONVERT_ByteArray_To_Long(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
        switch ((int) input.dyn_REG_get_Input_praiseId()) {
            case 0:
                Input_praise0 subset_of_input_for_praise0 = (Input_praise0) input.dyn_REG_get_InputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_input_for_praise0.dyn_REG_set_input_praise0_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_input_for_praise0.dyn_REG_set_input_praise0_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;

            case 1:
                Input_praise1 subset_of_input_for_praise1 = (Input_praise1) input.dyn_REG_get_InputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_input_for_praise1.dyn_REG_set_input_praise1_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_input_for_praise1.dyn_REG_set_input_praise1_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;

            case 2:
                Input_praise2 subset_of_input_for_praise2 = (Input_praise2) input.dyn_REG_get_InputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_input_for_praise2.dyn_REG_set_input_praise2_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_input_for_praise2.dyn_REG_set_input_praise2_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;

            case 3:
                Input_praise3 subset_of_input_for_praise3 = (Input_praise3) input.dyn_REG_get_InputSubset();
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[4 + index];
                }
                subset_of_input_for_praise3.dyn_REG_set_input_praise3_valueA(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                temp = new byte[4];
                for (byte index = 0; index < 4; index++) {
                    temp[index] = buffer[8 + index];
                }
                subset_of_input_for_praise3.dyn_REG_set_input_praise3_valueB(Global.stat_CONVERT_ByteArray_To_Double(Global.stat_CONVERT_ByteArray_To_ReverseByteArray(temp)));
                break;
        }
    }
    private void stat_App_EnCode_NetworkingSteam_At_Server_Output_Send(byte sysThreadId, Framework obj, Output output, byte[] buffer) {
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
    private static void stat_CLASS_boot0_DECLAIRE_Thread_InputListen(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_CLASS_boot0_DECLAIRE_Thread_InputListen(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_CLASS_boot0_DECLAIRE_Thread_InputListen(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Thread_InputListen(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_CLASS_boot1_DEFINE_Thread_InputListen(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_CLASS_boot1_DEFINE_Thread_InputListen(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Thread_InputListen(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_REG_boot0_DECLAIRE_Thread_InputListen(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_REG_boot0_DECLAIRE_Thread_InputListen(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_Buffer_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_REG_boot1_DEFINE_Buffer_Input(sysThreadId)" + ".%n");
        stat_REG_Buffer_For_Input = null;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_REG_boot1_DEFINE_Buffer_Input(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Buffer_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_REG_boot2_SUBSTANTIATE_Buffer_Input(sysThreadId)" + ".%n");
        stat_REG_Buffer_For_Input = new Input(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_REG_boot2_SUBSTANTIATE_Buffer_Input(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_flag_isNewInputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_REG_boot2_SUBSTANTIATE_flag_isNewInputReady(sysThreadId)" + ".%n");
        stat_REG_flag_isNewInputReady = true;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_REG_boot2_SUBSTANTIATE_flag_isNewInputReady(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_Buffer_Input(byte sysThreadId, Input structDEFAULT_Input) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_REG_boot3_INITIALISE_Buffer_Input(sysThreadId)" + ".%n");
        stat_REG_Buffer_For_Input = structDEFAULT_Input;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_REG_boot3_INITIALISE_Buffer_Input(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_flag_isNewInputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_InputListen : stat_REG_boot3_INITIALISE_flag_isNewInputReady(sysThreadId)" + ".%n");
        stat_REG_flag_isNewInputReady = false;
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_InputListen : stat_REG_boot3_INITIALISE_flag_isNewInputReady(sysThreadId)" + ".%n");
    }
    private static Input stat_REG_get_Buffer_Input(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= Class Input : Thread_InputListen : stat_REG_get_Buffer_Input(sysThreadId)" + ".%n");
        return stat_REG_Buffer_For_Input;
    }
    private static boolean stat_REG_get_flag_isNewInputReady(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : Thread_InputListen :  stat_REG_get_flag_isNewInputReady(sysThreadId)" + ".%n");
        return stat_REG_flag_isNewInputReady;
    }
    private static void stat_REG_set_flag_isNewInputReady(byte sysThreadId, boolean value) {
        System.out.printf("thread " + sysThreadId + " :: => boolean : Thread_InputListen :  stat_REG_set_flag_isNewInputReady(sysThreadId)" + ".%n");
        stat_REG_flag_isNewInputReady = value;
    }
}