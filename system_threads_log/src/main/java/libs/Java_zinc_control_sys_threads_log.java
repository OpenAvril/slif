package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
public interface Java_zinc_control_sys_threads_log extends Library {
    Java_zinc_control_sys_threads_log INSTANCE = (Java_zinc_control_sys_threads_log) Native.load("libzinc_control_sys_threads_log", Java_zinc_control_sys_threads_log.class);
    void generateProgram(byte sysThreadId);
    boolean isINSTANTIATED(byte sysThreadId);
    void printl(byte sysThreadId, String stringForLogPrint);
    void reInitialiseHandle(byte sysThreadId, long handleId, byte MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
    void terminateProgram(byte sysThreadId);
}