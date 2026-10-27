package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
public interface Java_zinc_control_launch_que extends Library {
    Java_zinc_control_launch_que INSTANCE = (Java_zinc_control_launch_que) Native.load("libzinc_control_launch_que", Java_zinc_control_launch_que.class);
    byte[] generateHandle(byte sysThreadId);
    void generateProgram(byte sysThreadId);
    byte[] get_coreIdTolaunch(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
    byte[] get_FlagSTATEisActive(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
    byte[] get_FlagSTATEofConcurrentCore(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
    byte[] get_FlagisIdle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
    byte[] get_FlagSTATEofThreadToLaunch(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
    byte[] isINSTANTIATED(byte sysThreadId);
    void reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
    void set_FlagSTATEofConcurrentCore(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte[] byteBool);
    void terminateProgaram(byte sysThreadId);
    void threadRequestlaunch(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
    void threadEnd(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId);
}