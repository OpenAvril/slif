package com.github.openavril.slif.server_assembly.SIMULATION;
import com.github.openavril.slif.MutexQue;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.engine.Global;
import com.github.openavril.slif.server_assembly.independent.Input;
import com.github.openavril.slif.server_assembly.independent.Output;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise0;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise1;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise2;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Input_praise3;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise0;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise1;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise2;
import com.github.openavril.slif.server_assembly.independent.praise_sets.Output_praise3;
import java.util.Scanner;
public class Simulation {
    public static Input SIMstat_REG_input_Sample;
    public static Output SIMstat_REG_output_Sample;
    private static boolean[] SIMstat_REG_PraiseStarted;
    private static boolean[] SIMstat_REG_PraiseComplete;
    private static Scanner stat_REG_scanner;
    private static final byte stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen = 3;
    private static final byte stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond = 4;
    private static final byte stat_CONST_AccessId_MutexOutputSample_SIMULATION_ThreadListen = 1;
    private static final byte stat_CONST_AccessId_MutexOutputSample_SIMULATION_ThreadRespond = 1;
    public Simulation(byte sysThreadId, Framework obj, Input DEFAULT_inputSample, Output DEFAULT_outputSample) {
        SIMstat_REG_input_Sample = null;
        SIMstat_REG_input_Sample = DEFAULT_inputSample;
        SIMstat_REG_input_Sample.dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_Input(sysThreadId);
        SIMstat_REG_input_Sample.dyn_REG_boot3_INITIALISE_ServerAssembly_Input(sysThreadId, obj.dyn_STRUCT_get_User_Input(sysThreadId));
        SIMstat_REG_input_Sample = DEFAULT_inputSample;
        SIMstat_REG_output_Sample = null;
        SIMstat_REG_output_Sample = DEFAULT_outputSample;
        SIMstat_REG_output_Sample.dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_Output(sysThreadId);
        SIMstat_REG_output_Sample.dyn_REG_boot3_INITIALISE_ServerAssembly_Output(sysThreadId, obj.dyn_STRUCT_get_User_Output(sysThreadId));
        SIMstat_REG_output_Sample = DEFAULT_outputSample;
        SIMstat_REG_PraiseStarted = null;
        SIMstat_REG_PraiseStarted = new boolean[4];
        SIMstat_REG_PraiseComplete = null;
        SIMstat_REG_PraiseComplete = new boolean[4];
        for(int i=0; i< Global.stat_REG_get_ServerAssembly_NUMBER_OF_PRAISES(sysThreadId); i++) {
            SIMstat_REG_PraiseStarted[i] = true;
            SIMstat_REG_PraiseComplete[i] = true;
        }
        for(int i=0; i< Global.stat_REG_get_ServerAssembly_NUMBER_OF_PRAISES(sysThreadId); i++) {
            SIMstat_REG_PraiseStarted[i] = false;
            SIMstat_REG_PraiseComplete[i] = false;
        }
        stat_REG_scanner = null;
        stat_REG_scanner = new Scanner(System.in);
    }
    public void Thread_Input_Peripheral_Scanner(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_Thread_OutputRespond(sysThreadId)" + ".%n");
        boolean checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, sysThreadId, true);
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
            checkPass = true;
        }
        checkPass = false;
        boolean temp = true;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
        }
        checkPass = false;
        boolean doneOnce2 = false;
        while(!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
            if(obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                System.out.printf("thread " + sysThreadId + " :: SIM : dyn_REG_get_Flag_is_SystemInitialised() => " + true + "" + ".%n");
                if(!obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).dyn_REG_get_flag_isNewInputReady(sysThreadId)) {
                    System.out.printf("thread " + sysThreadId + " :: SIM : dyn_REG_get_flag_isNewInputReady() => " + false + "" + ".%n");
                    MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
                    if(!doneOnce2) {
                        SIMstat_REG_input_Sample = obj.dyn_STRUCT_get_Input(sysThreadId);
                        for(long praiseIdIndex = 0; praiseIdIndex < 4; praiseIdIndex++) {
                            while (obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).dyn_REG_get_flag_isNewInputReady(sysThreadId)) {

                            }
                            SIMstat_REG_input_Sample.dyn_REG_set_ServerAssembly_Input_praiseId(sysThreadId, praiseIdIndex);
                            System.out.printf("thread " + sysThreadId + " :: <= : PraiseEventId: " + SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId) + ".%n");
                            SIMstat_REG_input_Sample.dyn_REG_set_InputSubset(sysThreadId, obj, SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId));
                            Input_praise0 subset_of_SIM_input_for_praise0 = null;
                            Input_praise1 subset_of_SIM_input_for_praise1 = null;
                            Input_praise2 subset_of_SIM_input_for_praise2 = null;
                            Input_praise3 subset_of_SIM_input_for_praise3 = null;
                            int[] thread_Listen_switch_C = null;
                            thread_Listen_switch_C = new int[2];
                            thread_Listen_switch_C = Global.stat_CONVERT_VALUEofLong_To_VALUEoftwoInts(sysThreadId, SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId));
                            System.out.printf("thread " + sysThreadId + " :: <= : switch(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                            switch (thread_Listen_switch_C[0]) {
                                case 0:
                                    switch (thread_Listen_switch_C[1]) {
                                        case 0:
                                            try {
                                                subset_of_SIM_input_for_praise0 = (Input_praise0)SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                            } catch (NullPointerException e) {
                                                 System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                            } catch (NoClassDefFoundError e) {
                                                 System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                            } catch (ClassCastException e) {
                                                 System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                            }
                                            subset_of_SIM_input_for_praise0.dyn_REG_set_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId, 2.2);
                                            subset_of_SIM_input_for_praise0.dyn_REG_set_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId, 3.7);
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_A: " + subset_of_SIM_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueA(sysThreadId) + ".%n");
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_B: " + subset_of_SIM_input_for_praise0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Input_valueB(sysThreadId) + ".%n");
                                            break;

                                        case 1:
                                            try {
                                                subset_of_SIM_input_for_praise1 = (Input_praise1)SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                            } catch (NullPointerException e) {
                                                 System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                            } catch (NoClassDefFoundError e) {
                                                 System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                            } catch (ClassCastException e) {
                                                 System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                            }
                                            subset_of_SIM_input_for_praise1.dyn_REG_set_ServerAssembly_PraiseSet1_STRUCT_Input_valueA(sysThreadId, 2.2);
                                            subset_of_SIM_input_for_praise1.dyn_REG_set_ServerAssembly_PraiseSet1_STRUCT_Input_valueB(sysThreadId, 3.7);
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_A: " + subset_of_SIM_input_for_praise1.dyn_REG_get_ServerAssembly_PraiseSet1_STRUCT_Input_valueA(sysThreadId) + ".%n");
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_B: " + subset_of_SIM_input_for_praise1.dyn_REG_get_ServerAssembly_PraiseSet1_STRUCT_Input_valueB(sysThreadId) + ".%n");
                                            break;

                                        case 2:
                                            try {
                                                subset_of_SIM_input_for_praise2 = (Input_praise2)SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                            } catch (NullPointerException e) {
                                                System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                            } catch (NoClassDefFoundError e) {
                                                System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                            } catch (ClassCastException e) {
                                                System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                            }
                                            subset_of_SIM_input_for_praise2.dyn_REG_set_ServerAssembly_PraiseSet2_STRUCT_Input_valueA(sysThreadId, 2.2);
                                            subset_of_SIM_input_for_praise2.dyn_REG_set_ServerAssembly_PraiseSet2_STRUCT_Input_valueB(sysThreadId, 3.7);
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_A: " + subset_of_SIM_input_for_praise2.dyn_REG_get_ServerAssembly_PraiseSet2_STRUCT_Input_valueA(sysThreadId) + ".%n");
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_B: " + subset_of_SIM_input_for_praise2.dyn_REG_get_ServerAssembly_PraiseSet2_STRUCT_Input_valueB(sysThreadId) + ".%n");
                                            break;

                                        case 3:
                                            try {
                                                subset_of_SIM_input_for_praise3 = (Input_praise3)SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_InputSubset(sysThreadId);
                                            } catch (NullPointerException e) {
                                                System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                            } catch (NoClassDefFoundError e) {
                                                System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                            } catch (ClassCastException e) {
                                                System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                            }
                                            subset_of_SIM_input_for_praise3.dyn_REG_set_ServerAssembly_PraiseSet3_STRUCT_Input_valueA(sysThreadId, 2.2);
                                            subset_of_SIM_input_for_praise3.dyn_REG_set_ServerAssembly_PraiseSet3_STRUCT_Input_valueB(sysThreadId, 3.7);
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_A: " + subset_of_SIM_input_for_praise3.dyn_REG_get_ServerAssembly_PraiseSet3_STRUCT_Input_valueA(sysThreadId) + ".%n");
                                            System.out.printf("thread " + sysThreadId + " :: <= : value_B: " + subset_of_SIM_input_for_praise3.dyn_REG_get_ServerAssembly_PraiseSet3_STRUCT_Input_valueB(sysThreadId) + ".%n");
                                            break;

                                        case Integer.MAX_VALUE:
                                            break;

                                        case -1:
                                            break;

                                        case Integer.MIN_VALUE:
                                            break;

                                        default:
                                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                                            break;
                                    }
                                    break;

                                case Integer.MAX_VALUE:
                                    switch (thread_Listen_switch_C[1]) {
                                        case 0:
                                            break;

                                        case Integer.MAX_VALUE:
                                            break;

                                        case -1:
                                            break;

                                        case Integer.MIN_VALUE:
                                            break;

                                        default:
                                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                                            break;
                                    }
                                    break;

                                case -1:
                                    switch (thread_Listen_switch_C[1]) {
                                        case 0:
                                            break;

                                        case Integer.MAX_VALUE:
                                            break;

                                        case -1:
                                            break;

                                        case Integer.MIN_VALUE:
                                            break;

                                        default:
                                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                                            break;
                                    }
                                    break;

                                case Integer.MIN_VALUE:
                                    switch (thread_Listen_switch_C[1]) {
                                        case 0:
                                            break;

                                        case Integer.MAX_VALUE:
                                            break;

                                        case -1:
                                            break;

                                        case Integer.MIN_VALUE:
                                             System.out.printf("thread " + sysThreadId + " :: is primed DEFAULT case(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                                            break;

                                        default:
                                             System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                                            break;
                                    }
                                    break;

                                default:
                                     System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_C[0] + ", " + thread_Listen_switch_C[1] + ")" + ".%n");
                                    break;
                            }
                            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
                            //obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_isWaitingOnPraiseReturn(_SIMstat_REG_input_Sample.dyn_REG_get_Input_praiseId(), true);
                            SIMstat_REG_PraiseStarted[Math.toIntExact(SIMstat_REG_input_Sample.dyn_REG_get_ServerAssembly_Input_praiseId(sysThreadId))] = true;
                            obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).dyn_REG_set_flag_isNewInputReady(sysThreadId, true);
                            System.out.printf("thread " + sysThreadId + " :: => CC : dyn_REG_set_flag__isNewInputReady(" + true + ".%n");
                            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
                        }
                        if(!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                            checkPass = true;
                        }
                        doneOnce2 = true;
                    }
                } else {
                    if(!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                        checkPass = true;
                    }
                    MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
                }
            } else {
                if(!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                    checkPass = true;
                }
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadListen);
            }
        }
    }
    public void Thread_Output_Draw(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_Thread_OutputRespond(sysThreadId)" + ".%n");
        boolean checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, sysThreadId, true);
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
            checkPass = true;
        }
        checkPass = false;
        boolean temp = true;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
        }
        checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                System.out.printf("thread " + sysThreadId + " :: <= CC : dyn_REG_get_Flag_is_SystemInitialised() = " + true + "%n");//todo SIMULATION
                if (obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).dyn_REG_get_flag_isNewOutputReady(sysThreadId)) {
                    System.out.printf("thread " + sysThreadId + " :: <= CC : dyn_REG_get_flag_isNewOutputReady() = " + true + "%n");//todo SIMULATION
                    MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
                    SIMstat_REG_output_Sample = obj.dyn_STRUCT_get_Output(sysThreadId);
                    SIMstat_REG_output_Sample = obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).dyn_REG_get_Buffer_Output(sysThreadId);
                    System.out.printf("thread " + sysThreadId + " :: <= : PraiseEventId: " + SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_Output_praiseId(sysThreadId) + ".%n");
                    int[] thread_Listen_switch_D = null;
                    thread_Listen_switch_D = new int[2];
                    thread_Listen_switch_D = Global.stat_CONVERT_VALUEofLong_To_VALUEoftwoInts(sysThreadId, SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_Output_praiseId(sysThreadId));
                    Output_praise0 output_subset0 = null;
                    Output_praise1 output_subset1 = null;
                    Output_praise2 output_subset2 = null;
                    Output_praise3 output_subset3 = null;
                    System.out.printf("thread " + sysThreadId + " :: switch(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");//todo SIMULATION
                    switch (thread_Listen_switch_D[0]) {
                        case 0:
                            switch (thread_Listen_switch_D[1]) {
                                case 0:
                                    double result0 = Double.MAX_VALUE;
                                    try {
                                        output_subset0 = (Output_praise0) SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                        result0 = output_subset0.dyn_REG_get_ServerAssembly_PraiseSet0_STRUCT_Output_value(sysThreadId);
                                    } catch (NullPointerException e) {
                                        System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                    } catch (NoClassDefFoundError e) {
                                        System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                    } catch (ClassCastException e) {
                                        System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                    }
                                    System.out.printf("thread " + sysThreadId + " :: <= : output subset0 value: " + result0 + ".%n");
                                    break;

                                case 1:
                                    double result1 = Double.MAX_VALUE;
                                    try {
                                        output_subset1 = (Output_praise1) SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                        result1 = output_subset1.dyn_REG_get_ServerAssembly_PraiseSet1_STRUCT_Output_value(sysThreadId);
                                    } catch (NullPointerException e) {
                                        System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                    } catch (NoClassDefFoundError e) {
                                        System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                    } catch (ClassCastException e) {
                                        System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                    }
                                    System.out.printf("thread " + sysThreadId + " :: <= : output subset1 value: " + result1 + ".%n");
                                    break;

                                case 2:
                                    double result2 = Double.MAX_VALUE;
                                    try {
                                        output_subset2 = (Output_praise2) SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                        result2 = output_subset2.dyn_REG_get_ServerAssembly_PraiseSet2_STRUCT_Output_value(sysThreadId);
                                    } catch (NullPointerException e) {
                                        System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                    } catch (NoClassDefFoundError e) {
                                        System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                    } catch (ClassCastException e) {
                                        System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                    }
                                    System.out.printf("thread " + sysThreadId + " :: <= : output subset2 value: " + result2 + ".%n");
                                    break;

                                case 3:
                                    double result3 = Double.MAX_VALUE;
                                    try {
                                        output_subset3 = (Output_praise3) SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_OutputSubset(sysThreadId);
                                        result3 = output_subset3.dyn_REG_get_ServerAssembly_PraiseSet3_STRUCT_Output_value(sysThreadId);
                                    } catch (NullPointerException e) {
                                        System.out.printf("thread " + sysThreadId + " :: NullPointerException" + ".%n");
                                    } catch (NoClassDefFoundError e) {
                                        System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError" + ".%n");
                                    } catch (ClassCastException e) {
                                        System.out.printf("thread " + sysThreadId + " :: ClassCastException" + ".%n");
                                    }
                                    System.out.printf("thread " + sysThreadId + " :: <= : output subset3 value: " + result3 + ".%n");
                                    break;

                                case Integer.MAX_VALUE:
                                    break;

                                case -1:
                                    break;

                                case Integer.MIN_VALUE:
                                    break;

                                default:
                                    System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");
                                    break;
                            }
                            break;

                        case Integer.MAX_VALUE:
                            switch (thread_Listen_switch_D[1]) {
                                case 0:
                                    break;

                                case Integer.MAX_VALUE:
                                    break;

                                case -1:
                                    break;

                                case Integer.MIN_VALUE:
                                    break;

                                default:
                                    System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");
                                    break;
                            }
                            break;

                        case -1:
                            switch (thread_Listen_switch_D[1]) {
                                case 0:
                                    break;

                                case Integer.MAX_VALUE:
                                    break;

                                case -1:
                                    break;

                                case Integer.MIN_VALUE:
                                    break;

                                default:
                                    System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");
                                    break;
                            }
                            break;

                        case Integer.MIN_VALUE:
                            switch (thread_Listen_switch_D[1]) {
                                case 0:
                                    break;

                                case Integer.MAX_VALUE:
                                    break;

                                case -1:
                                    break;

                                case Integer.MIN_VALUE:
                                    System.out.printf("thread " + sysThreadId + " :: is primed DEFAULT case(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");
                                    break;

                                default:
                                    System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");
                                    break;
                            }
                            break;

                        default:
                            System.out.printf("thread " + sysThreadId + " :: close case(" + thread_Listen_switch_D[0] + ", " + thread_Listen_switch_D[1] + ")" + ".%n");
                            break;
                    }
                    MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
                    obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Flag_isWaitingOnPraiseReturn(sysThreadId, SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_Output_praiseId(sysThreadId), false);
                    SIMstat_REG_PraiseComplete[(int) SIMstat_REG_output_Sample.dyn_REG_get_ServerAssembly_Output_praiseId(sysThreadId)] = true;
                    obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).dyn_REG_set_flag_isNewOutputReady(sysThreadId, false);
                    System.out.printf("thread " + sysThreadId + " :: => CC : dyn_REG_set_flag_isNewOutputReady = " + false + ".%n");
                }
                if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                    checkPass = true;
                }
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
            } else {
                if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                    checkPass = true;
                }
                MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_SIMULATION_ThreadRespond);
            }
        }
    }
    public boolean dyn_REG_get_FLAG_isSimulationComplete(byte sysThreadId) {
        boolean result = true;
        for(int i=0; i < 4; i++) {
            if(!SIMstat_REG_PraiseStarted[i]) {
                result = false;
                break;
            }
            if(!SIMstat_REG_PraiseComplete[i]) {
                result = false;
                break;
            }
        }
        return result;
    }
    public void dyn_REG_boot1_DEFINE__SIMULATION(byte sysThreadId) {
        stat_REG_boot1_DEFINE__SIMULATION(sysThreadId);
    }
    public void dyn_REG_boot2_SUBSTANTIATE__SIMULATION(byte sysThreadId, Input sample) {
        stat_REG_boot2_SUBSTANTIATE__SIMULATION(sysThreadId, sample);
    }
    public void dyn_REG_boot3_INITIALISE__SIMULATION(byte sysThreadId, Input sample) {
        stat_REG_boot3_INITIALISE__SIMULATION(sysThreadId, sample);
    }
    public void stat_REG_boot1_DEFINE__SIMULATION(byte sysThreadId) {
        stat_CLASS_boot1_DEFINE_SIMULATION_stat_REG_input_Sample(sysThreadId);
    }
    private static void stat_CLASS_boot1_DEFINE_SIMULATION_stat_REG_input_Sample(byte sysThreadId) {
        SIMstat_REG_input_Sample = null;
    }
    public void stat_REG_boot2_SUBSTANTIATE__SIMULATION(byte sysThreadId, Input sample) {
        stat_REG_boot2_SUBSTANTIATE__SIMULATION__SIMstat_REG_input_Sample(sysThreadId, sample);
    }
    private static void stat_REG_boot2_SUBSTANTIATE__SIMULATION__SIMstat_REG_input_Sample(byte sysThreadId, Input sample) {
        sample.dyn_REG_boot2_SUBSTANTIATE_ServerAssembly_Input(sysThreadId);
        SIMstat_REG_input_Sample = sample;
    }
    public void stat_REG_boot3_INITIALISE__SIMULATION(byte sysThreadId, Input sample) {
        stat_REG_boot3_INITIALISE__SIMULATION__SIMstat_REG_input_Sample(sample);
    }
    private static void stat_REG_boot3_INITIALISE__SIMULATION__SIMstat_REG_input_Sample(Input sample) {
        SIMstat_REG_input_Sample = sample;
    }
}