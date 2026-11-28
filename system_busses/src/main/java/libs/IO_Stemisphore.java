package libs;
import engine.Global;
public class IO_Stemisphore {
    public static byte generateHandle(byte sysThreadId) {
        byte result;
        try {
            result = Java_zinc_stemisphore.INSTANCE.generateHandle(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : generateHandle(sysThreadId);.%n");
            result = Byte.MAX_VALUE;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : generateHandle(sysThreadId);.%n");
            result = Byte.MAX_VALUE;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : NoClassDefFoundError : IO_Stemisphore : generateHandle(sysThreadId);.%n");
        }
        return result;
    }
    public static void generateProgram(byte sysThreadId) {
        try {
            Java_zinc_stemisphore.INSTANCE.generateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : generateProgram(byte sysThreadId).%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : generateProgram(byte sysThreadId).%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : NoClassDefFoundError : IO_Stemisphore : generateProgram(sysThreadId);.%n");
        }
    }
    public static void load(byte sysThreadId, byte handleId, byte[] StemTicket, byte[] bytes_Cargo) {
        try {
            Java_zinc_stemisphore.INSTANCE.load(sysThreadId, handleId, Global.stat_CONVERT_ByteArray_To_ListOfParameterInByteArray(sysThreadId, StemTicket), bytes_Cargo);
        } catch (NoClassDefFoundError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : load(byte sysThreadId, byte handleId, StemTicket StemTicket, byte[] bytes_Cargo).%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : load(byte sysThreadId, byte handleId, StemTicket StemTicket, byte[] bytes_Cargo).%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : NoClassDefFoundError : IO_Stemisphore : load(sysThreadId, byte handleId, StemTicket StemTicket, byte[] bytes_Cargo);.%n");
        }
    }
    public static void reInitialiseHandle(byte sysThreadId, byte handleId, byte MAX_NUMBER_OF_JUNCTIONS) {
        try {
            Java_zinc_stemisphore.INSTANCE.reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_JUNCTIONS);
        } catch (NoClassDefFoundError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : reInitialiseHandle(byte sysThreadId, byte handleId, byte MAX_NUMBER_OF_JUNCTIONS).%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : reInitialiseHandle(byte sysThreadId, byte handleId, byte MAX_NUMBER_OF_JUNCTIONS).%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : NoClassDefFoundError : IO_Stemisphore : reInitialiseHandle(sysThreadId, byte handleId, byte MAX_NUMBER_OF_JUNCTIONS);.%n");
        }
    }
    public static byte[] unload(byte sysThreadId, byte handleId, byte[] StemTicket) {
        try {
            Java_zinc_stemisphore.INSTANCE.unload(sysThreadId, handleId, Global.stat_CONVERT_ByteArray_To_ListOfParameterInByteArray(sysThreadId, StemTicket));
        } catch (NoClassDefFoundError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : unload(byte sysThreadId, byte handleId, StemTicket StemTicket).%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : unload(byte sysThreadId, byte handleId, StemTicket StemTicket).%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : NoClassDefFoundError : IO_Stemisphore : unload(sysThreadId, byte handleId, StemTicket StemTicket);.%n");
        }
    }
    public static void terminateProgram(byte sysThreadId) {
        try {
            Java_zinc_stemisphore.INSTANCE.terminateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : terminateProgram(byte sysThreadId).%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("thread " + sysThreadId + " :: NoClassDefFoundError : IO_Stemisphore : terminateProgram(byte sysThreadId).%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : NoClassDefFoundError : IO_Stemisphore : terminateProgram(sysThreadId);.%n");
        }
    }
}