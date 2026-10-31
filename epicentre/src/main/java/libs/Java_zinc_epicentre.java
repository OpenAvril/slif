package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
public interface Java_zinc_epicentre extends Library {
    Java_zinc_epicentre INSTANCE = (Java_zinc_epicentre) Native.load("libzinc_epicentre.a", Java_zinc_epicentre.class);
    byte[] gernerateHandle(byte sysThreadId);
    void generateProgram(byte sysThreadId);
    byte[] get_Output(byte sysThreadId, byte[] handleId, byte[] praiseId);
    boolean get_FLAG_isINITIALISED(byte sysThreadId, byte[] handleId);
    boolean get_FLAG_isINSTANTIATED(byte sysThreadId);
    boolean get_FLAG_isStackLoaded_ServerInputReceive(byte sysThreadId, byte[] handleId);
    boolean get_FLAG_isStackLoaded_ServerOutputSend(byte sysThreadId, byte[] handleId);
    byte[] get_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId);
    void set_InputItemsFor_praise0(byte sysThreadId, byte[] handleId, byte[] praiseId, double value_A, double value_B);
    void set_InputItemsFor_praise1(byte sysThreadId, byte[] handleId, byte[] praiseId, double value_A, double value_B);
    void set_InputItemsFor_praise2(byte sysThreadId, byte[] handleId, byte[] praiseId, double value_A, double value_B);
    void set_InputItemsFor_praise3(byte sysThreadId, byte[] handleId, byte[] praiseId, double value_A, double value_B);
    void set_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId, byte[] praiseId);
    void reInitialiseHandle(byte sysThreadId, byte[] handleId, byte NUMBER_OF_TASK_THREADS);
    void terminateProgram(byte sysThreadId);
}