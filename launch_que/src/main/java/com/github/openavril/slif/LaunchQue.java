package com.github.openavril.slif;
import libs.IO_LaunchQue;
public class LaunchQue {
    public LaunchQue() {

    }
    public static long generateHandle(byte sysThreadId) {
        return IO_LaunchQue.generateHandle(sysThreadId);
    }
    public static void generateProgram(byte sysThreadId) {
        IO_LaunchQue.generateProgram(sysThreadId);
        long handleId = Long.MAX_VALUE;
        byte concuurentThreadId = (byte)255;
        boolean boolValue = true;
        byte MAX_NUMBER_OF_THREADS_FOR_ACCESS = (byte)255;
        long tempA0 = IO_LaunchQue.generateHandle(sysThreadId);
        byte tempA1 = IO_LaunchQue.get_coreIdTolaunch(sysThreadId, handleId, concuurentThreadId);
        boolean tempA2 = IO_LaunchQue.get_FlagSTATEisActive(sysThreadId, handleId, concuurentThreadId);
        boolean tempA3 = IO_LaunchQue.get_FlagSTATEofConcurrentCore(sysThreadId, handleId, concuurentThreadId);
        boolean tempA4 = IO_LaunchQue.get_FlagisIdle(sysThreadId, handleId, concuurentThreadId);
        boolean tempA5 = IO_LaunchQue.get_FlagSTATEofThreadToLaunch(sysThreadId, handleId, concuurentThreadId);
        boolean tempA6 =  IO_LaunchQue.isINSTANTIATED(sysThreadId);
        IO_LaunchQue.reInitialiseHandle(sysThreadId, handleId, concuurentThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        IO_LaunchQue.set_FlagSTATEofConcurrentCore(sysThreadId, handleId, concuurentThreadId, boolValue);
        IO_LaunchQue.terminateProgaram(sysThreadId);
        IO_LaunchQue.threadRequestlaunch(sysThreadId, handleId, concuurentThreadId);
        IO_LaunchQue.threadEnd(sysThreadId, handleId, concuurentThreadId);
    }
    public static byte get_coreIdTolaunch(byte sysThreadId, long handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_coreIdTolaunch(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagSTATEisActive(byte sysThreadId, long handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagSTATEisActive(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagSTATEofConcurrentCore(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagisIdle(byte sysThreadId, long handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagisIdle(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagSTATEofThreadToLaunch(byte sysThreadId, long handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagSTATEofThreadToLaunch(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        return IO_LaunchQue.isINSTANTIATED(sysThreadId);
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        IO_LaunchQue.reInitialiseHandle(sysThreadId, handleId, concurrentThreadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
    }
    public static void set_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId, boolean boolValue) {
        IO_LaunchQue.set_FlagSTATEofConcurrentCore(sysThreadId, handleId, concurrentThreadId, boolValue);
    }
    public static void terminateProgaram(byte sysThreadId) {
        IO_LaunchQue.terminateProgaram(sysThreadId);
    }
    public static void threadRequestlaunch(byte sysThreadId, long handleId, byte concurrentThreadId) {
        IO_LaunchQue.threadRequestlaunch(sysThreadId, handleId, concurrentThreadId);
    }
    public static void threadEnd(byte sysThreadId, long handleId, byte concurrentThreadId) {
        IO_LaunchQue.threadEnd(sysThreadId, handleId, concurrentThreadId);
    }
}