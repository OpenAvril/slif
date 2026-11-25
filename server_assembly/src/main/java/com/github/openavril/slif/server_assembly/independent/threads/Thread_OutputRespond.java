package com.github.openavril.slif.server_assembly.independent.threads;
import com.github.openavril.slif.MutexQue;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.engine.Global;
import com.github.openavril.slif.server_assembly.independent.Output;
import com.github.openavril.slif.server_assembly.independent.praise_sets.*;
public class Thread_OutputRespond {
    public static boolean stat_REG_flag_isNewOutputReady;
    private static Output stat_REG_Buffer_For_Output;
    private static final byte stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond = 1;
    private static final byte stat_CONST_AccessId_MutexOutputSample_ThreadRespond = 0;
// public.
    public Thread_OutputRespond(byte sysThreadId) {
        stat_CLASS_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId);
        stat_CLASS_boot1_DEFINE_Thread_OutputRespond(sysThreadId);
        stat_REG_boot0_DECLAIRE_Thread_OutputRespond(sysThreadId);
    }
    public void dyn_Thread_OutputRespond(byte sysThreadId, Framework obj, byte threadId) {
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
            temp = true;
            for (byte index = 0; index < 3; index++) {
                if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, index)) {
                    temp = false;
                }
            }
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Flag_is_SystemInitialised(sysThreadId, temp);
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
                obj.dyn_STRUCT_get_Thread_OutputRespond(sysThreadId).stat_App_Thread_Listen(sysThreadId, obj, sysThreadId);
            }
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
            if(obj.dyn_CLASS_get_SIMULATION(sysThreadId).dyn_REG_get_FLAG_isSimulationComplete(sysThreadId)) {//TODO SIMULATION EXIT
                obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Flag_is_SystemInitialised(sysThreadId,false);//TODO SIMULATION EXIT
            }//TODO SIMULATION EXIT
            if (!obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), stat_CONST_AccessId_MutexQueConditionCode_ThreadRespond);
        }
        obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).app_Terminate_All_Threads(sysThreadId, obj);
        System.out.printf("thread " + sysThreadId + " :: exiting : Thread_OutputRespond : dyn_Thread_OutputRespond(sysThreadId)" + ".%n");
    }
    public void dyn_REG_boot1_DEFINE_Thread_OutputRespond(byte sysThreadId, Framework obj) {
        System.out.printf("thread " + sysThreadId + " :: entered : Thread_OutputRespond : dyn_REG_boot1_DEFINE_Thread_OutputRespond(sysThreadId)" + ".%n");
        dyn_REG_boot1_DEFINE_Thread_OutputRespond(sysThreadId, obj);
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
        WriteQue_ConditionCode.app_FUNCT_write_Start(0);
         System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : open access @ 0%n");//todo SIMULATION
        //WriteQue_SimulationIO.app_FUNCT_write_Start(0);//todo SIMULATION
        // System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : SIM : open access @ 0%n");//todo SIMULATION
        if (OpenEpiCentre.CLIBConcurrentServerIO__dyn_REG_get_flag_isStackLoaded_ServerOutputSend()) {
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: <= CC : CLIBConcurrentServerIO__dyn_REG_get_flag_isStackLoaded_ServerOutputSend() = " + OpenEpiCentre.CLIBConcurrentServerIO__dyn_REG_get_flag_isStackLoaded_ServerOutputSend() + "%n");//todo SIMULATION
            if (!obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewOutputReady()) {
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: <= CC : dyn_REG_get_flag__isNewOutputReady() => " + obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewOutputReady() + "%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0%n");//todo SIMULATION
                WriteQue_ConditionCode.app_FUNCT_write_End(0);
                OpenEpiCentre.CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction__write_Start();
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : STACK - ServerOutputSend : open access @ 0 (Extraction)%n");//todo SIMULATION
                stat_REG_Buffer_For_Ouput = obj.dyn_STRUCT_get_Output();
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                OpenEpiCentre.CLIBConcurrentServerIO__app_FUNCT_pop_From_Stack_Of_Output();
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: <= OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_MetaData_PraiseEventId() = " + OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_MetaData_PraiseEventId() + "" + ".%n");//todo SIMULATION
                stat_REG_Buffer_For_Ouput.dyn_REG_set_Output_praiseId(OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_MetaData_PraiseEventId());
                stat_REG_Buffer_For_Ouput.dyn_REG_set_OutputSubset(obj, stat_REG_Buffer_For_Ouput.dyn_REG_get_Output_praiseId());
                Output_praise0 subset_of_output_for_praise0 = null;
                Output_praise1 subset_of_output_for_praise1 = null;
                Output_praise2 subset_of_output_for_praise2 = null;
                Output_praise3 subset_of_output_for_praise3 = null;
                int[] thread_Listen_switch_B = null;
                thread_Listen_switch_B = new int[2];
                thread_Listen_switch_B = Global.stat_CONVERT_Long_To_twoInts(stat_REG_Buffer_For_Ouput.dyn_REG_get_Output_praiseId());
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: switch(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                switch (thread_Listen_switch_B[0]) {
                    case 0:
                        switch (thread_Listen_switch_B[1]) {
                            case 0:
                                try {
                                    subset_of_output_for_praise0 = (Output_praise0) stat_REG_Buffer_For_Ouput.dyn_REG_get_OutputSubset();
                                    subset_of_output_for_praise0.dyn_REG_set_output_praise0_value(OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise0_Value());
                                } catch (NullPointerException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case 1:
                                try {
                                    subset_of_output_for_praise1 = (Output_praise1) stat_REG_Buffer_For_Ouput.dyn_REG_get_OutputSubset();
                                    subset_of_output_for_praise1.dyn_REG_set_output_praise1_value(OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise1_Value());
                                } catch (NullPointerException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case 2:
                                try {
                                    subset_of_output_for_praise2 = (Output_praise2) stat_REG_Buffer_For_Ouput.dyn_REG_get_OutputSubset();
                                    subset_of_output_for_praise2.dyn_REG_set_output_praise2_value(OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise2_Value());
                                } catch (NullPointerException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case 3:
                                try {
                                    subset_of_output_for_praise3 = (Output_praise3) stat_REG_Buffer_For_Ouput.dyn_REG_get_OutputSubset();
                                    subset_of_output_for_praise3.dyn_REG_set_output_praise3_value(OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise3_Value());
                                } catch (NullPointerException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NullPointerException" + ".%n");
                                } catch (NoClassDefFoundError e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: NoClassDefFoundError" + ".%n");
                                } catch (ClassCastException e) {
                                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: ClassCastException" + ".%n");
                                }
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                break;

                            default:
                                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    case Integer.MAX_VALUE:
                        switch (thread_Listen_switch_B[1]) {
                            case 0:
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                break;

                            default:
                                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    case -1:
                        switch (thread_Listen_switch_B[1]) {
                            case 0:
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                break;

                            default:
                                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    case Integer.MIN_VALUE:
                        switch (thread_Listen_switch_B[1]) {
                            case 0:
                                break;

                            case Integer.MAX_VALUE:
                                break;

                            case -1:
                                break;

                            case Integer.MIN_VALUE:
                                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: is primed DEFAULT case(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                                break;

                            default:
                                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                                break;
                        }
                        break;

                    default:
                         System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_B[0] + ", " + thread_Listen_switch_B[1] + ")" + ".%n");//todo SIMULATION
                        break;
                }
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - OUT =>%n");//todo SIMULATION
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : STACK - ServerOutputSend : close access @ 0 (Extraction)%n");//todo SIMULATION
                OpenEpiCentre.CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction__write_End();
                WriteQue_ConditionCode.app_FUNCT_write_Start(0);
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : open access @ 0%n");//todo SIMULATION
                obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(true);
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0%n");//todo SIMULATION
                WriteQue_ConditionCode.app_FUNCT_write_End(0);
                //stat_App_Encode_NetworkingSteam_At_Server_Output_Send(obj, SIMstat_REG_output_Sample, stat_REG_get_Buffer__Ouput());//todo SIMULATION
            } else {
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0%n");//todo SIMULATION
                WriteQue_ConditionCode.app_FUNCT_write_End(0);
            }
        } else {
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0%n");//todo SIMULATION
            WriteQue_ConditionCode.app_FUNCT_write_End(0);
        }
        // System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : SIM : close access @ 0%n");//todo SIMULATION
        //WriteQue_SimulationIO.app_FUNCT_write_End(0);//todo SIMULATION
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