package libs;
import com.sun.jna.Library;
import com.sun.jna.Native;
public interface Java_zinc_stemisphore extends Library {
    Java_zinc_stemisphore INSTANCE = (Java_zinc_stemisphore) Native.load("libzinc_stemisphore.a", Java_zinc_stemisphore.class);
    byte generateHandle(byte sysThreadId);
    void generateProgram(byte sysThreadId);
    void load(byte sysThreadId, byte handle_Id, StemTicket StemTicket, byte[] bytes_Cargo);
    void reInitialiseHandle(byte sysThreadId, byte handle_Id, byte MAX_NUMBER_OF_JUNCTIONS);
    byte[] unload(byte sysThreadId, byte handle_Id, StemTicket StemTicket);
    void terminateProgram(byte sysThreadId);
}