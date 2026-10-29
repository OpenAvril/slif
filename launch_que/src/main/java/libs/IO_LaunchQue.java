package libs;
import engine.Global;
public class IO_LaunchQue {
    public static long generateHandle(byte sysThreadId) {
        long result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Long(sysThreadId, Java_zinc_control_launch_que.INSTANCE.generateHandle(sysThreadId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.generateHandle(sysThreadId)%n");
            result = Long.MAX_VALUE;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.generateHandle(sysThreadId)%n");
            result = Long.MAX_VALUE;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.generateHandle(sysThreadId)%n");
        }
        return result;
    }
    public static void generateProgram(byte sysThreadId) {
        try {
            Java_zinc_control_launch_que.INSTANCE.generateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.generateProgram(sysThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.generateProgram(sysThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.generateProgram(sysThreadId)%n");
        }
    }
    public static byte get_coreIdTolaunch(byte sysThreadId, long handleId, byte concurrentThreadId) {
        byte result;
        try {
            result = Java_zinc_control_launch_que.INSTANCE.get_coreIdTolaunch(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.get_coreIdTolaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = Byte.MAX_VALUE;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_coreIdTolaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = Byte.MAX_VALUE;
        } catch (NullPointerException e) {
             throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_coreIdTolaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
        return result;
    }
    public static boolean get_FlagSTATEisActive(byte sysThreadId, long handleId, byte concurrentThreadId) {
        boolean result;
        try {
            result = Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEisActive(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEisActive(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEisActive(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEisActive(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
        return result;
    }
    public static boolean get_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId) {
        boolean result;
        try {
            result = Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofConcurrentCore(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
        return result;
    }
    public static boolean get_FlagisIdle(byte sysThreadId, long handleId, byte concurrentThreadId) {
        boolean result;
        try {
            result = Java_zinc_control_launch_que.INSTANCE.get_FlagisIdle(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.get_FlagisIdle(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagisIdle(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagisIdle(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
        return result;
    }
    public static boolean get_FlagSTATEofThreadToLaunch(byte sysThreadId, long handleId, byte concurrentThreadId) {
        boolean result;
        try {
            result = Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofThreadToLaunch(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofThreadToLaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofThreadToLaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.get_FlagSTATEofThreadToLaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
        return result;
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        boolean result;
        try {
            result = Java_zinc_control_launch_que.INSTANCE.isINSTANTIATED(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.isINSTANTIATED(byte sysThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.isINSTANTIATED(byte sysThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.isINSTANTIATED(byte sysThreadId)%n");
        }
        return result;
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        try {
            Java_zinc_control_launch_que.INSTANCE.reInitialiseHandle(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.reInitialiseHandle(byte sysThreadId, long handleId, byte concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.reInitialiseHandle(byte sysThreadId, long handleId, byte concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.reInitialiseHandle(byte sysThreadId, long handleId, byte concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        }
    }
    public static void set_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId, boolean boolValue) {
        try {
            Java_zinc_control_launch_que.INSTANCE.set_FlagSTATEofConcurrentCore(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId, boolValue);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.set_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId, byte[] byteBool)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.set_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId, byte[] byteBool)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.set_FlagSTATEofConcurrentCore(byte sysThreadId, long handleId, byte concurrentThreadId, byte[] byteBool)%n");
        }
    }
    public static void terminateProgaram(byte sysThreadId) {
        try {
            Java_zinc_control_launch_que.INSTANCE.terminateProgaram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.terminateProgaram(byte sysThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.terminateProgaram(byte sysThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.terminateProgaram.generateProgram(byte sysThreadId)%n");
        }
    }
    public static void threadRequestlaunch(byte sysThreadId, long handleId, byte concurrentThreadId) {
        try {
            Java_zinc_control_launch_que.INSTANCE.threadRequestlaunch(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.threadRequestlaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.threadRequestlaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.threadRequestlaunch(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
    }
    public static void threadEnd(byte sysThreadId, long handleId, byte concurrentThreadId) {
        try {
            Java_zinc_control_launch_que.INSTANCE.threadEnd(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), concurrentThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_launch_que.INSTANCE.threadEnd(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_launch_que.INSTANCE.threadEnd(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_launch_que.INSTANCE.threadEnd(byte sysThreadId, long handleId, byte concurrentThreadId)%n");
        }
    }
}