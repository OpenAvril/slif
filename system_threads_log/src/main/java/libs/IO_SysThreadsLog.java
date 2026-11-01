package libs;
import engine.Global;
public class IO_SysThreadsLog {
    public static void generateProgram(byte sysThreadId) {
        try {
            Java_zinc_control_sys_threads_log.INSTANCE.generateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException%n");
        }
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        boolean result;
        try {
            result = Java_zinc_control_sys_threads_log.INSTANCE.isINSTANTIATED(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException%n");
            result = true;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException%n");
        }
        return result;
    }
    public static void printl(byte sysThreadId, String stringForLogPrint) {
        try {
            Java_zinc_control_sys_threads_log.INSTANCE.printl(sysThreadId, stringForLogPrint);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException%n");
        }
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        try {
            Java_zinc_control_sys_threads_log.INSTANCE.reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException%n");
        }
    }
    public static void terminateProgram(byte sysThreadId) {
        try {
            Java_zinc_control_sys_threads_log.INSTANCE.terminateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException%n");
        }
    }
}