package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
public interface Java_zinc_control_mutex_que extends Library {
    Java_zinc_control_mutex_que INSTANCE = (Java_zinc_control_mutex_que) Native.load("libzinc_control_mutex_que", Java_zinc_control_mutex_que.class);
    void endByUnlock(byte sysThreadId, byte[] handleId, byte ACCESS_ID);
    byte[] generateHandle(byte sysThreadId);
    void generateProgram(byte sysThreadId);
    byte[] isINSTANTIATED(byte sysThreadId);
    void reInitialiseHandle(byte sysThreadId, byte[] handleId, byte MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    void startByLock(byte sysThreadId, byte[] handleId, byte ACCESS_ID);
    void terminateProgram(byte sysThreadId);
}