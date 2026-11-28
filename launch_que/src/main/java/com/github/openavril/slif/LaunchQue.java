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
    }
    public static byte get_coreIdTolaunch(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_coreIdTolaunch(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagSTATEisActive(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagSTATEisActive(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagSTATEofConcurrentCore(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagSTATEofConcurrentCore(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagisIdle(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagisIdle(sysThreadId, handleId, concurrentThreadId);
    }
    public static boolean get_FlagSTATEofThreadToLaunch(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        return IO_LaunchQue.get_FlagSTATEofThreadToLaunch(sysThreadId, handleId, concurrentThreadId);
    }
    public static void reInitialiseHandle(byte sysThreadId, byte handleId, byte concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        IO_LaunchQue.reInitialiseHandle(sysThreadId, handleId, concurrentThreadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
    }
    public static void set_FlagSTATEofConcurrentCore(byte sysThreadId, byte handleId, byte concurrentThreadId, boolean boolValue) {
        IO_LaunchQue.set_FlagSTATEofConcurrentCore(sysThreadId, handleId, concurrentThreadId, boolValue);
    }
    public static void terminateProgaram(byte sysThreadId) {
        IO_LaunchQue.terminateProgaram(sysThreadId);
    }
    public static void threadRequestlaunch(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        IO_LaunchQue.threadRequestlaunch(sysThreadId, handleId, concurrentThreadId);
    }
    public static void threadEnd(byte sysThreadId, byte handleId, byte concurrentThreadId) {
        IO_LaunchQue.threadEnd(sysThreadId, handleId, concurrentThreadId);
    }
}