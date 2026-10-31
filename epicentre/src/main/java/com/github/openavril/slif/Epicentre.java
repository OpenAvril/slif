package com.github.openavril.slif;
import engine.Global;
import libs.IO_Epicentre;

import java.nio.DoubleBuffer;

public class Epicentre {
    public static long gernerateHandle(byte sysThreadId) {
       return IO_Epicentre.generateHandle(sysThreadId);
    }
    public static void generateProgram(byte sysThreadId) {
        IO_Epicentre.generateProgram(sysThreadId);
        long handleId = Long.MAX_VALUE;
        long praiseId = Long.MAX_VALUE;
        double value_A = Double.MAX_VALUE;
        double value_B = Double.MAX_VALUE;
        byte NUMBER_OF_TASK_THREADS = (byte)255;
        long tampaA0 = IO_Epicentre.generateHandle(sysThreadId);
        byte[] tampaA1 = IO_Epicentre.get_Output(sysThreadId, handleId, praiseId);
        boolean tampaA2 = IO_Epicentre.get_FLAG_isINITIALISED(sysThreadId, handleId);
        boolean tampaA4 = IO_Epicentre.get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId, handleId);
        boolean tampaA5 = IO_Epicentre.get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId, handleId);
        long tampaA6 = IO_Epicentre.get_MetaData_PraiseEventId(sysThreadId, handleId);
        IO_Epicentre.set_InputItemsFor_praise0(sysThreadId, handleId, praiseId, value_A, value_B);
        IO_Epicentre.set_InputItemsFor_praise1(sysThreadId, handleId, praiseId, value_A, value_B);
        IO_Epicentre.set_InputItemsFor_praise2(sysThreadId, handleId, praiseId, value_A, value_B);
        IO_Epicentre.set_InputItemsFor_praise3(sysThreadId, handleId, praiseId, value_A, value_B);
        IO_Epicentre.set_MetaData_PraiseEventId(sysThreadId, handleId, praiseId);
        IO_Epicentre.reInitialiseHandle(sysThreadId, handleId, NUMBER_OF_TASK_THREADS);
        IO_Epicentre.terminateProgram(sysThreadId);
    }
    public static byte[] get_Output(byte sysThreadId, long handleId, long praiseId) {
        return IO_Epicentre.get_Output(sysThreadId, handleId, praiseId);
    }
    public static boolean get_FLAG_isINITIALISED(byte sysThreadId, long handleId) {
        return IO_Epicentre.get_FLAG_isINITIALISED(sysThreadId, handleId);
    }
    public static boolean get_FLAG_isStackLoaded_ServerInputReceive(byte sysThreadId, long handleId) {
        return IO_Epicentre.get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId, handleId);
    }
    public static boolean get_FLAG_isStackLoaded_ServerOutputSend(byte sysThreadId, long handleId) {
        return IO_Epicentre.get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId, handleId);
    }
    public static long get_MetaData_PraiseEventId(byte sysThreadId, long handleId) {
        return IO_Epicentre.get_MetaData_PraiseEventId(sysThreadId, handleId);
    }
    public static void set_InputItemsFor_praise0(byte sysThreadId, long handleId, long praiseId, double value_A, double value_B) {
        IO_Epicentre.set_InputItemsFor_praise0(sysThreadId, handleId, praiseId, value_A, value_B);
    }
    public static void set_InputItemsFor_praise1(byte sysThreadId, long handleId, long praiseId, double value_A, double value_B) {
        IO_Epicentre.set_InputItemsFor_praise1(sysThreadId, handleId, praiseId, value_A, value_B);
    }
    public static void set_InputItemsFor_praise2(byte sysThreadId, long handleId, long praiseId, double value_A, double value_B) {
        IO_Epicentre.set_InputItemsFor_praise2(sysThreadId, handleId, praiseId, value_A, value_B);
    }
    public static void set_InputItemsFor_praise3(byte sysThreadId, long handleId, long praiseId, double value_A, double value_B) {
        IO_Epicentre.set_InputItemsFor_praise3(sysThreadId, handleId, praiseId, value_A, value_B);
    }
    public static void set_MetaData_PraiseEventId(byte sysThreadId, long handleId, long praiseId) {
        IO_Epicentre.set_MetaData_PraiseEventId(sysThreadId, handleId, praiseId);
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte NUMBER_OF_TASK_THREADS) {
        IO_Epicentre.reInitialiseHandle(sysThreadId, handleId, NUMBER_OF_TASK_THREADS);
    }
    public static void terminateProgram(byte sysThreadId) {
        IO_Epicentre.terminateProgram(sysThreadId);
    }
}