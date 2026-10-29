package libs;
import engine.Global;
public class IO_Epicentre {
    public static long generateHandle(byte sysThreadId) {
        long result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Long(sysThreadId, Java_zinc_epicentre.INSTANCE.gernerateHandle(sysThreadId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.generateHandle(sysThreadId)%n");
            result = Long.MAX_VALUE;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.generateHandle(sysThreadId)%n");
            result = Long.MAX_VALUE;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.generateHandle(sysThreadId)%n");
        }
        return result;
    }
    public static void generateProgram(byte sysThreadId) {
        try {
            Java_zinc_epicentre.INSTANCE.generateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.generateProgram(sysThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.generateProgram(sysThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.generateProgram(sysThreadId)%n");
        }
    }
    public static byte[] get_Output(byte sysThreadId, long handleId, long bytes_praiseId) {
        byte[] result;
        try {
            result = Java_zinc_epicentre.INSTANCE.get_Output(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, bytes_praiseId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.get_Output(byte sysThreadId, byte[] handleId, byte[] bytes_praiseId)%n");
            result = null;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.get_Output(byte sysThreadId, byte[] handleId, byte[] bytes_praiseId)%n");
            result = null;
        } catch (NullPointerException e) {
            result = null;
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.get_Output(byte sysThreadId, byte[] handleId, byte[] bytes_praiseId)%n");
        }
        return result;
    }
    public static boolean get_FLAG_isINITIALISED(byte sysThreadId, long handleId) {
        boolean result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Boolean(sysThreadId, Java_zinc_epicentre.INSTANCE.get_FLAG_isINITIALISED(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.get_FLAG_isINITIALISED(byte sysThreadId, byte[] handleId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isINITIALISED(byte sysThreadId, byte[] handleId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isINITIALISED(byte sysThreadId, byte[] handleId)%n");
        }
        return result;
    }
    public static boolean isINSTANTIATED(byte sysThreadId) {
        boolean result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Boolean(sysThreadId, Java_zinc_epicentre.INSTANCE.get_FLAG_isINSTANTIATED(sysThreadId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.get_FLAG_isINSTANTIATED(byte sysThreadId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isINSTANTIATED(byte sysThreadId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isINSTANTIATED(byte sysThreadId)%n");
        }
        return result;
    }
    public static boolean get_FLAG_isStackLoaded_ServerInputReceive(byte sysThreadId, long handleId) {
        boolean result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Boolean(sysThreadId, Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerInputReceive(byte sysThreadId, byte[] handleId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerInputReceive(byte sysThreadId, byte[] handleId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerInputReceive(byte sysThreadId, byte[] handleId)%n");
        }
        return result;
    }
    public static boolean get_FLAG_isStackLoaded_ServerOutputSend(byte sysThreadId, long handleId) {
        boolean result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Boolean(sysThreadId, Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerOutputSend(byte sysThreadId, byte[] handleId)%n");
            result = true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerOutputSend(byte sysThreadId, byte[] handleId)%n");
            result = true;
        } catch (NullPointerException e) {
            result = true;
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.get_FLAG_isStackLoaded_ServerOutputSend(byte sysThreadId, byte[] handleId)%n");
        }
        return result;
    }
    public static long get_MetaData_PraiseEventId(byte sysThreadId, long handleId) {
        long result;
        try {
            result = Global.stat_CONVERT_ByteArray_To_Long(sysThreadId, Java_zinc_epicentre.INSTANCE.get_MetaData_PraiseEventId(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.get_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId)%n");
            result = Long.MAX_VALUE;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.get_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId)%n");
            result = Long.MAX_VALUE;
        } catch (NullPointerException e) {
            result = Long.MAX_VALUE;
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.get_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId)%n");
        }
        return result;
    }
    public static void set_InputItemsFor_praise0(byte sysThreadId, long handleId, long longPraiseId, double doubleValue_A, double doubleValue_B) {
        try {
            Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise0(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, longPraiseId), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_A), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_B));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise0(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise0(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise0(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        }
    }
    public static void set_InputItemsFor_praise1(byte sysThreadId, long handleId, long longPraiseId, double doubleValue_A, double doubleValue_B) {
        try {
            Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise1(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, longPraiseId), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_A), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_B));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise1(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise1(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise1(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        }
    }
    public static void set_InputItemsFor_praise2(byte sysThreadId, long handleId, long longPraiseId, double doubleValue_A, double doubleValue_B) {
        try {
            Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise2(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, longPraiseId), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_A), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_B));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise2(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise2(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise2(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        }
    }
    public static void set_InputItemsFor_praise3(byte sysThreadId, long handleId, long longPraiseId, double doubleValue_A, double doubleValue_B) {
        try {
            Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise3(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, longPraiseId), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_A), Global.stat_CONVERT_Double_To_ByteArray(sysThreadId, doubleValue_B));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise3(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise3(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.set_InputItemsFor_praise3(byte sysThreadId, byte[] handleId, byte[] longPraiseId, byte[] doubleValue_A, byte[] doubleValue_B)%n");
        }
    }
    public static void set_MetaData_PraiseEventId(byte sysThreadId, long handleId, long longPraiseId) {
        try {
            Java_zinc_epicentre.INSTANCE.set_MetaData_PraiseEventId(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, longPraiseId));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.set_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId, byte[] longPraiseId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.set_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId, byte[] longPraiseId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.set_MetaData_PraiseEventId(byte sysThreadId, byte[] handleId, byte[] longPraiseId)%n");
        }
    }
    public static void reInitialiseHandle(byte sysThreadId, long handleId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        try {
            Java_zinc_epicentre.INSTANCE.reInitialiseHandle(sysThreadId, Global.stat_CONVERT_Long_To_ByteArray(sysThreadId, handleId), MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.INSTANCE.reInitialiseHandle(byte sysThreadId, byte[] handleId, byte[] bytes_concurrentThreadId, byte MAX_NUMBER_OF_CONCURRENT_TASK_THREADS)%n");
        }
    }
    public static void terminateProgram(byte sysThreadId) {
        try {
            Java_zinc_epicentre.INSTANCE.terminateProgram(sysThreadId);
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError : Java_zinc_epicentre.INSTANCE.terminateProgaram(byte sysThreadId)%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException : Java_zinc_epicentre.INSTANCE.terminateProgaram(byte sysThreadId)%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException : Java_zinc_epicentre.terminateProgaram.generateProgram(byte sysThreadId)%n");
        }
    }
}