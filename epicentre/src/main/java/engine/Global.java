package engine;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.BitSet;
import java.util.FormatFlagsConversionMismatchException;

import static SIMULATION.Simulation._SIM_stat_REG_input_Sample;

public class Global {
    private static long _stat_REG_numberOfCores;
    private static long _stat_REG_numberOfPraises;

    // public.
    public Global() {
        System.out.printf("entering Global()%n");
        stat_CLASS_boot0_DECLAIRE_Global();
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot3_INITIALISE_Global();
        stat_REG_boot0_DECLAIRE_Global();
        System.out.printf("exiting Global()%n");
    }
    public static byte[] stat_CONVERT_ByteArray_To_ReverseByteArray(byte[] buffer) {
        byte[] temp = new byte[buffer.length];
        for (int indexA = 0; indexA < buffer.length; indexA++) {
            temp[indexA] = Byte.MAX_VALUE;
        }
        int bitArrayLength = buffer.length * 8;
        boolean[] bitArray = new boolean[bitArrayLength];
        for (int indexA = 0; indexA < buffer.length; indexA++) {
            for (int indexB = 0; indexB < 8; indexB++) {
                int bitArrayIndex = (indexA * 8) + indexB;
                bitArray[bitArrayIndex] = ((buffer[indexA] >> (7 - indexB)) & 1) == 1;
            }
        }
        int left = 0;
        int right = bitArrayLength - 1;
        while (left < right) {
            boolean tempBoolean = bitArray[left];
            bitArray[left] = bitArray[right];
            bitArray[right] = tempBoolean;
            left++;
            right--;
        }
        for (int indexC = 0; indexC < temp.length; indexC++) {
            for (int indexD = 0; indexD < 8; indexD++) {
                int bitArrayIndex = (indexC * 8) + indexD;
                if (bitArray[bitArrayIndex]) {
                    temp[indexC] |= (byte) (1 << indexD);
                }
            }
        }
        return temp;
    }
    public static boolean stat_CONVERT_ByteArray_To_Boolean(byte[] bytesBool) {
        boolean temp;
        temp = false;
        if (bytesBool[0] != 0) {
            temp = true;
        }
        return temp;
    }
    public static double stat_CONVERT_ByteArray_To_Double(byte[] byteArray) {
        return ByteBuffer.wrap(byteArray).getDouble();
    }
    public static long stat_CONVERT_ByteArray_To_Long(byte[] byteArray) {
        return ByteBuffer.wrap(byteArray).getLong();
    }
    public static byte[] stat_CONVERT_Long_To_ByteArray(long value) {
        return ByteBuffer.allocate(Long.BYTES).putLong(value).array();
    }
    public static byte[] stat_CONVERT_Double_To_ByteArray(double value) {
        return ByteBuffer.allocate(8).putDouble(value).array();
    }
    public static void stat_CLASS_boot0_DECLAIRE_Global() {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Global().%n");

        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Global().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Global() {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Global().%n");

        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Global().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Global() {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Global().%n");

        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Global().%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Global() {
        System.out.printf("entered stat_REG_boot0_DECLAIRE_Global().%n");

        System.out.printf("exiting stat_REG_boot0_DECLAIRE_Global().%n");
    }
// private.
}