package com.github.openavril.slif.server_assembly.independent.threads;
import com.github.openavril.slif.MutexQue;
import com.github.openavril.slif.server_assembly.engine.Framework;
import com.github.openavril.slif.server_assembly.engine.Global;
import com.github.openavril.slif.server_assembly.independent.Input;
import com.github.openavril.slif.server_assembly.independent.Output;
import com.github.openavril.slif.server_assembly.independent.praise_sets.*;
public class Thread_InputListen {
    private static Input stat_REG_Buffer_For_Input;
    public static boolean stat_REG_flag_isNewInputReady;
// public.
    public Thread_InputListen(byte sysThreadId) {
        stat_CLASS_boot0_DECLAIRE_IO_ListenRespond(sysThreadId);
        stat_CLASS_boot1_DEFINE_IO_ListenRespond(sysThreadId);
        stat_REG_boot0_DECLAIRE_IO_ListenRespond(sysThreadId);
    }
    public void dyn_Thread_InputListen(byte sysThreadId, Framework obj, byte ACCESS_ID) {
        System.out.printf("thread " + sysThreadId + "thread " + sysThreadId + " :: entered APP :: threads : Thread_InputListen :  :: dyn_App_Thread_IO(byte sysThreadId, Framework obj, byte concurrentThreadId)" + ".%n");
        boolean checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(sysThreadId, ACCESS_ID, true);
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
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
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
            obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_set_Flag_is_SystemInitialised(sysThreadId, temp);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                checkPass = true;
            }
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
        }
        checkPass = false;
        while (!checkPass) {
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
            if (obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_CLASS_get_Execute_Control(sysThreadId).dyn_REG_get_Flag_is_SystemInitialised(sysThreadId)) {
                MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
                obj.dyn_STRUCT_get_Thread_InputListen(sysThreadId).stat_App_Thread_Listen(sysThreadId, obj, (byte)(0));
            }
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: <= CC : dyn_REG_get_Flag_is_SystemInitialised() = " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + "%n");//todo SIMULATION
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
            if(obj.dyn_CLASS_get_SIMULATION().dyn_REG_get_FLAG_isSimulationComplete()) {//TODO SIMULATION EXIT
                obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_is_SystemInitialised(false);//TODO SIMULATION EXIT
            }//TODO SIMULATION EXIT
            if (!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                 System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: dyn_REG_get_Flag_is_SystemInitialised() => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + "" + ".%n");
                checkPass = true;
            }
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: <= CC : dyn_REG_get_Flag_is_SystemInitialised() = " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + "%n");//todo SIMULATION
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
        }
        obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().app_Terminate_All_Threads(obj);
    }
    public void dyn_REG_boot1_DEFINE_IO_ListenRespond(byte sysThreadId, Framework obj) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot1_DEFINE_IO_ListenRespond()" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot1_DEFINE_IO_ListenRespond()" + ".%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_IO_ListenRespond(byte sysThreadId, Framework obj) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot2_SUBSTANTIATE_IO_ListenRespond()" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_Buffer_Input(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_flag_isNewInputReady(sysThreadId);
         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot2_SUBSTANTIATE_IO_ListenRespond()" + ".%n");
    }
    public void dyn_REG_boot3_INITIALISE_IO_ListenRespond(byte sysThreadId, Framework obj, Input structDEFAULT_Input, Output structDEFAULT_Output) {
         System.out.printf("thread " + sysThreadId + "entered dyn_REG_boot3_INITIALISE_IO_ListenRespond()" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting dyn_REG_boot3_INITIALISE_IO_ListenRespond()" + ".%n");
    }
    public Input dyn_REG_get_Buffer_Input(byte sysThreadId) {
        return stat_REG_get_Buffer_Input(sysThreadId);
    }
    public boolean dyn_REG_get_flag_isNewInputReady(byte sysThreadId) {
        return stat_REG_get_flag_isNewInputReady(sysThreadId);
    }
    public void dyn_REG_set_flag_isNewInputReady(byte sysThreadId, boolean value) {
        stat_REG_set_flag_isNewInputReady(sysThreadId,value);
    }
 // private.
    private void stat_App_Thread_Listen (byte sysThreadId, Framework obj,byte threadId) {
        /*
        MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
         System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : open access @ 0%n");//todo SIMULATION
        //WriteQue_SimulationIO.app_FUNCT_write_Start(0);//todo SIMULATION
        // System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : SIM : open access @ 0%n");//todo SIMULATION
        if (obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewInputReady()) {
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: <= CC : stat_REG_get_flag__isNewInputReady() => " + obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewInputReady() + "%n");//todo SIMULATION
            //stat_REG_Buffer_For_Input = obj.dyn_STRUCT_get_Input();
            //stat_App_Decode_NetworkingSteam_At_Server_Input_Recieve(obj, SIMstat_REG_input_Sample, stat_REG_get_Buffer__Input());//todo SIMULATION undo
            stat_REG_Buffer_For_Input = SIMstat_REG_input_Sample;//todo SIMULATION
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0" + ".%n");//todo SIMULATION
            OpenEpiCentre.CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerInputReceive_Injection__write_Start();
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : STACK - ServerInputReceive : open access @ 0 (Injection)%n");//todo SIMULATION
            OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_MetaData_PraiseEventId(stat_REG_Buffer_For_Input.dyn_REG_get_Input_praiseId());
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: => LIB : OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_MetaData_PraiseEventId( " + stat_REG_Buffer_For_Input.dyn_REG_get_Input_praiseId() + " )" + ".%n");//todo SIMULATION
            OpenEpiCentre.CLIBConcurrentServerIO__app_FUNCT_select_set_Intput_Subset(stat_REG_Buffer_For_Input.dyn_REG_get_Input_praiseId());
            Input_praise0 subset_of_input_for_praise0 = null;
            Input_praise1 subset_of_input_for_praise1 = null;
            Input_praise2 subset_of_input_for_praise2 = null;
            Input_praise3 subset_of_input_for_praise3 = null;
            int[] thread_Listen_switch_A = null;
            thread_Listen_switch_A = new int[2];
            thread_Listen_switch_A = Global.stat_CONVERT_Long_To_twoInts(stat_REG_Buffer_For_Input.dyn_REG_get_Input_praiseId());
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: switch(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
            switch (thread_Listen_switch_A[0]) {
                case 0:
                    switch (thread_Listen_switch_A[1]) {
                        case 0:
                            try {
                                subset_of_input_for_praise0 = (Input_praise0)stat_REG_Buffer_For_Input.dyn_REG_get_InputSubset();
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_A(subset_of_input_for_praise0.dyn_REG_get_input_praise0_valueA());
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_B(subset_of_input_for_praise0.dyn_REG_get_input_praise0_valueB());
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
                                subset_of_input_for_praise1 = (Input_praise1) stat_REG_Buffer_For_Input.dyn_REG_get_InputSubset();
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_A(subset_of_input_for_praise1.dyn_REG_get_input_praise1_valueA());
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_B(subset_of_input_for_praise1.dyn_REG_get_input_praise1_valueB());
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
                                subset_of_input_for_praise2 = (Input_praise2) stat_REG_Buffer_For_Input.dyn_REG_get_InputSubset();
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_A(subset_of_input_for_praise2.dyn_REG_get_input_praise2_valueA());
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_B(subset_of_input_for_praise2.dyn_REG_get_input_praise2_valueB());
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
                                subset_of_input_for_praise3 = (Input_praise3) stat_REG_Buffer_For_Input.dyn_REG_get_InputSubset();
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_A(subset_of_input_for_praise3.dyn_REG_get_input_praise3_valueA());
                                OpenEpiCentre.CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_B(subset_of_input_for_praise3.dyn_REG_get_input_praise3_valueB());
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
                             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
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
                             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
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
                             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
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
                             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: is primed DEFAULT case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;

                        default:
                             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                            break;
                    }
                    break;

                default:
                     System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: close case(" + thread_Listen_switch_A[0] + ", " + thread_Listen_switch_A[1] + ")" + ".%n");//todo SIMULATION
                    break;
            }
            OpenEpiCentre.CLIBConcurrentServerIO__app_FUNCT_flip_Input_DoubleBuffer();
            OpenEpiCentre.CLIBConcurrentServerIO__app_FUNCT_push_To_STACK_Of_Input();
            MutexQue.startByLock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : open access @ 0%n");
            obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewInputReady(false);
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: => CC : stat_REG_get_flag__isNewInputReady(" + obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewInputReady() + ")%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0%n");
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - IN <=%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - IN <=%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - IN <=%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - IN <=%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - IN <=%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: IO - IN <=%n");//todo SIMULATION
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : STACK - ServerInputReceive : close access @ 0 (Injection)%n");//todo SIMULATION
            OpenEpiCentre.CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerInputReceive_Injection__write_End();
        } else {
             System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : CC : close access @ 0%n");
            MutexQue.endByUnlock(sysThreadId, obj.dyn_CLASS_get_App(sysThreadId).dyn_CLASS_get_Execute(sysThreadId).dyn_get_PgmHandle_MutexQue_For_Epicentre_ConditionCode(sysThreadId), ACCESS_ID);
        }
        // System.out.printf("thread " + sysThreadId + "thread " + threadId + " :: WriteQue : SIM : close access @ 0%n");//todo SIMULATION
        //WriteQue_SimulationIO.app_FUNCT_write_End(0);//todo SIMULATION

         */
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
    private static void stat_CLASS_boot0_DECLAIRE_IO_ListenRespond(byte sysThreadId) {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot0_DECLAIRE_IO_ListenRespond()" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot0_DECLAIRE_IO_ListenRespond()" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_IO_ListenRespond(byte sysThreadId) {
         System.out.printf("thread " + sysThreadId + "entered stat_CLASS_boot1_DEFINE_IO_ListenRespond()" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting stat_CLASS_boot1_DEFINE_IO_ListenRespond()" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_IO_ListenRespond(byte sysThreadId) {
         System.out.printf("thread " + sysThreadId + "entered stat_REG_boot0_DECLAIRE_IO_ListenRespond()" + ".%n");

         System.out.printf("thread " + sysThreadId + "exiting stat_REG_boot0_DECLAIRE_IO_ListenRespond()" + ".%n");
    }
    private static void stat_REG_boot1_DEFINE_Buffer_Input(byte sysThreadId) {
         System.out.printf("thread " + sysThreadId + "entered stat_REG_boot1_DEFINE_Buffer__Input()" + ".%n");
        stat_REG_Buffer_For_Input = null;
         System.out.printf("thread " + sysThreadId + "exiting stat_REG_boot1_DEFINE_Buffer__Input()" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Buffer_Input(byte sysThreadId) {
        stat_REG_Buffer_For_Input = new Input(sysThreadId);
    }
    private static void stat_REG_boot2_SUBSTANTIATE_flag_isNewInputReady(byte sysThreadId) {
        stat_REG_flag_isNewInputReady = true;
    }
    private static void stat_REG_boot3_INITIALISE_Buffer_Input(byte sysThreadId, Input structDEFAULT_Input) {
        stat_REG_Buffer_For_Input = structDEFAULT_Input;
    }
    private static void stat_REG_boot3_INITIALISE_flag_isNewInputReady(byte sysThreadId) {
        stat_REG_flag_isNewInputReady = false;
    }
    private static Input stat_REG_get_Buffer_Input(byte sysThreadId) {
        return stat_REG_Buffer_For_Input;
    }
    private static boolean stat_REG_get_flag_isNewInputReady(byte sysThreadId) {
        return stat_REG_flag_isNewInputReady;
    }
    private static void stat_REG_set_flag_isNewInputReady(byte sysThreadId, boolean value) {
        stat_REG_flag_isNewInputReady = value;
    }
}