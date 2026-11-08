package com.github.openavril.slif;
import libs.IO_SysThreadsLog;
public class SysThreadsLog {
    public static void generateProgram(byte sysThreadId) {
        IO_SysThreadsLog.generateProgram(sysThreadId);
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        return IO_SysThreadsLog.isINSTANTIATED(sysThreadId);
    }
    public static void printl(byte sysThreadId, String stringForLogPrint) {
        IO_SysThreadsLog.printl(sysThreadId, stringForLogPrint);
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        IO_SysThreadsLog.reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
    }
    public static void terminateProgram(byte sysThreadId) {
        IO_SysThreadsLog.terminateProgram(sysThreadId);
    }
}