package engine;
import java.nio.ByteBuffer;
public class Global {
    // public.
    public Global(byte sysThreadId) {
        System.out.printf("entering Global()%n");
        stat_CLASS_boot0_DECLAIRE_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_Global(sysThreadId);
        System.out.printf("exiting Global()%n");
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
}