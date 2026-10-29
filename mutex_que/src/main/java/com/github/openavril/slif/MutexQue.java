package com.github.openavril.slif;
import libs.IO_MutexQue;
public class MutexQue {
    public MutexQue() {

    }
    public static void endByUnlock(byte sysThreadId, long handleId, byte ACCESS_ID) {
        IO_MutexQue.endByUnlock(sysThreadId, handleId, ACCESS_ID);
    }
    public static long generateHandle(byte sysThreadId) {
        return IO_MutexQue.generateHandle(sysThreadId);
    }
    public static void generateProgram(byte sysThreadId) {
        IO_MutexQue.generateProgram(sysThreadId);
        long handleId = Long.MAX_VALUE;
        byte bytes_AccessId = (byte)255;
        byte MAX_NUMBER_OF_THREADS_FOR_ACCESS = (byte)255;
        IO_MutexQue.endByUnlock(sysThreadId, handleId, bytes_AccessId);
        long tempA0 = IO_MutexQue.generateHandle(sysThreadId);
        boolean tempA1 = IO_MutexQue.isINSTANTIATED(sysThreadId);
        IO_MutexQue.reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        IO_MutexQue.startByLock(sysThreadId, handleId, bytes_AccessId);
        IO_MutexQue.terminateProgram(sysThreadId);
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        return IO_MutexQue.isINSTANTIATED(sysThreadId);
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        IO_MutexQue.reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
    }
    public static void startByLock(byte sysThreadId, long handleId, byte ACCESS_ID) {
        IO_MutexQue.startByLock(sysThreadId, handleId, ACCESS_ID);
    }
    public static void terminateProgram(byte sysThreadId) {
        IO_MutexQue.terminateProgram(sysThreadId);
    }
}