package libs;
import engine.Global;
public class IO_MutexQue {
    public static void endByUnlock(byte sysThreadId, long handleId, byte ACCESS_ID) {
        try {
            Java_zinc_control_mutex_que.INSTANCE.endByUnlock(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(handleId), Global.stat_CONVERT_Byte_To_ByteArray(ACCESS_ID));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.endByUnlock(byte sysThreadId, byte[] handleId, byte[] bytes_ACCESS_ID)%n");

        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.endByUnlock(byte sysThreadId, byte[] handleId, byte[] bytes_ACCESS_ID)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.endByUnlock(byte sysThreadId, byte[] handleId, byte[] bytes_ACCESS_ID)%n");
        }
    }
    public static long generateHandle(byte sysThreadId) {
        long result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Long(Java_zinc_control_mutex_que.INSTANCE.generateHandle(sysThreadId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.generateHandle(sysThreadId)%n");
            result = Long.MAX_VALUE;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.generateHandle(sysThreadId)%n");
            result = Long.MAX_VALUE;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.generateHandle(sysThreadId)%n");
        }
        return result;
    }
    public static void generateProgram(byte sysThreadId) {
        try {
            Java_zinc_control_mutex_que.INSTANCE.generateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.generateProgram(sysThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.generateProgram(sysThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.generateProgram(sysThreadId)%n");
        }
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        boolean result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Boolean(Java_zinc_control_mutex_que.INSTANCE.isINSTANTIATED(sysThreadId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.isINSTANTIATED(byte sysThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.isINSTANTIATED(byte sysThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.isINSTANTIATED(byte sysThreadId)%n");
        }
        return result;
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        try {
            Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(handleId), Global.stat_CONVERT_Byte_To_ByteArray(MAX_NUMBER_OF_CONCURRENT_TASK_THREADS));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        }
    }
    public static void startByLock(byte sysThreadId, long handleId, byte ACCESS_ID) {
        try {
            Java_zinc_control_mutex_que.INSTANCE.startByLock(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(handleId), Global.stat_CONVERT_Byte_To_ByteArray(ACCESS_ID));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_ACCESS_ID)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_ACCESS_ID)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_ACCESS_ID)%n");
        }
    }
    public static void terminateProgaram(byte sysThreadId) {
        try {
            Java_zinc_control_mutex_que.INSTANCE.terminateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_control_mutex_que.INSTANCE.terminateProgaram(byte sysThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_control_mutex_que.INSTANCE.terminateProgaram(byte sysThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_control_mutex_que.terminateProgaram.generateProgram(byte sysThreadId)%n");
        }
    }
}