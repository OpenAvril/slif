package engine;
import java.nio.ByteBuffer;
public class Global {
    private static long stat_REG_numberOfCores;
    private static long stat_REG_numberOfPraises;
    // public.
    public Global(byte sysThreadId) {
        System.out.printf("entering Global()%n");
        stat_CLASS_boot0_DECLAIRE_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_Global(sysThreadId);
        System.out.printf("exiting Global()%n");
    }
    public static boolean stat_CONVERT_ByteArray_To_Boolean(byte sysThreadId, byte[] bytesBool) {
        boolean temp;
        temp = false;
        if(bytesBool[0] != 0) {
            temp = true;
        }
        return temp;
    }
    public static long stat_CONVERT_ByteArray_To_Long(byte sysThreadId, byte[] byteArray) {
        return ByteBuffer.wrap(byteArray).getLong();
    }
    public static byte[] stat_CONVERT_Long_To_ByteArray(byte sysThreadId, long value) {
        return ByteBuffer.allocate(Long.BYTES).putLong(value).array();
    }
    public static void stat_CLASS_boot0_DECLAIRE_Global(byte sysThreadId) {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Global().%n");

        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Global().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Global(byte sysThreadId) {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Global().%n");

        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Global().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Global(byte sysThreadId) {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Global().%n");

        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Global().%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Global(byte sysThreadId) {
        System.out.printf("entered stat_REG_boot0_DECLAIRE_Global().%n");

        System.out.printf("exiting stat_REG_boot0_DECLAIRE_Global().%n");
    }
    // private.
    private static void stat_REG_boot2_SUBSTANTIATE_numberOfCores(byte sysThreadId) {
        stat_REG_numberOfCores = Integer.MAX_VALUE;
    }
    private static void stat_REG_boot2_SUBSTANTIATE_numberOfPraises(byte sysThreadId) {
        stat_REG_numberOfPraises = Integer.MAX_VALUE;
    }
    private static void stat_REG_boot3_INITIALISE_numberOfCores(byte sysThreadId)
    {
        stat_REG_numberOfCores = 3;
    }
    private static void stat_REG_boot3_INITIALISE_numberOfPraises(byte sysThreadId)
    {
        stat_REG_numberOfPraises = 4;
    }
    private static long stat_REG_get_numberOfCores(byte sysThreadId)
    {
        return stat_REG_numberOfCores;
    }
    private static long stat_REG_get_numberOfPraises(byte sysThreadId)
    {
        return stat_REG_numberOfPraises;
    }
}