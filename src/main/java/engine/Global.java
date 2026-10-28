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
    public void dyn_REG_boot1_DEFINE_Global(byte sysThreadId) {
        System.out.printf("entered dyn_REG_boot1_DEFINE_Global().%n");

        System.out.printf("exiting dyn_REG_boot1_DEFINE_Global().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Global(byte sysThreadId) {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_Global().%n");
        stat_REG_boot2_SUBSTANTIATE_numberOfCores(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_numberOfPraises(sysThreadId);
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_Global().%n");
    }
    public void dyn_REG_boot3_INITIALISE_Global(byte sysThreadId) {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_Global().%n");
        stat_REG_boot3_INITIALISE_numberOfCores(sysThreadId);
        stat_REG_boot3_INITIALISE_numberOfPraises(sysThreadId);
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_Global().%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Global(byte sysThreadId) {
        System.out.printf("entered dyn_REG_boot4_INSTANTIATE_Global().%n");

        System.out.printf("exiting dyn_REG_boot4_INSTANTIATE_Global().%n");
    }
    public static long dyn_REG_get_numberOfCores(byte sysThreadId)
    {
        return stat_REG_get_numberOfCores(sysThreadId);
    }
    public static long dyn_REG_get_numberOfPraises(byte sysThreadId) {
        return stat_REG_get_numberOfPraises(sysThreadId);
    }
    public static byte[] stat_CONVERT_ByteArray_To_ReverseByteArray(byte sysThreadId, byte[] buffer) {
        byte[] temp = new byte[buffer.length];
        for(int indexA = 0; indexA < buffer.length; indexA++) {
            temp[indexA] = Byte.MAX_VALUE;
        }
        int bitArrayLength = buffer.length*8;
        boolean[] bitArray = new boolean[bitArrayLength];
        for (int indexA = 0; indexA < buffer.length; indexA++) {
            for (int indexB = 0; indexB < 8; indexB++) {
                int bitArrayIndex = (indexA*8)+indexB;
                bitArray[bitArrayIndex] = ((buffer[indexA] >>(7 - indexB)) &1) ==1;
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
                int bitArrayIndex = (indexC*8)+indexD;
                if (bitArray[bitArrayIndex]) {
                    temp[indexC] |= (byte) (1 << indexD);
                }
            }
        }
        return temp;
    }
    public static byte[] stat_CONVERT_Boolean_To_ByteArray(byte sysThreadId, boolean bool) {
        return new byte[] { (byte) (bool ? 1 : 0) };
    }
    public static boolean stat_CONVERT_ByteArray_To_Boolean(byte sysThreadId, byte[] bytesBool) {
        boolean temp;
        temp = false;
        if(bytesBool[0] != 0) {
            temp = true;
        }
        return temp;
    }
    public static byte stat_CONVERT_ByteArray_To_Byte(byte sysThreadId, byte[] bytes) {
        return bytes[0];
    }
    public static double stat_CONVERT_ByteArray_To_Double(byte sysThreadId, byte[] byteArray) {
        return ByteBuffer.wrap(byteArray).getDouble();
/*
        double temp = Double.MAX_VALUE;
        if (byteArray.length != 8) {
            throw new IllegalArgumentException("Byte array must have exactly 8 bytes.%n");
        } else {
            boolean[] bits = new boolean[64];
            boolean[] exponent = new boolean[11];
            boolean[] fraction = new boolean[52];
            boolean sign = true;
            int bitsId1 = 0;
            for (int byteId1 = 0; byteId1 < 8; byteId1++) {
                for (int bitId1 = 0; bitId1 < 8; bitId1++) {
                    bitsId1 = ((byteId1 * 8) + bitId1);
                    if (bitsId1 < 63) {
                        bits[bitsId1] = ((byteArray[byteId1] >> bitId1) & 1) == 1;
                    } else {
                        bits[bitsId1] = false;
                    }
                }
            }
            int exponentId2 = 0;
            int fractionId2 = 0;
            int bitsId2 = 0;
            for (int byteId2 = 0; byteId2 < 8; byteId2++) {
                for (int bitId2 = 0; bitId2 < 8; bitId2++) {
                    bitsId2 = ((byteId2*8) + bitId2);
                    if (bitsId2 < 51) {
                        fraction[fractionId2] = bits[63 - bitsId2];
                        fractionId2++;
                    } else if (bitsId2 > 51 && bitsId2 < 63) {
                        exponent[exponentId2] = bits[63 - bitsId2];
                        exponentId2++;
                    } else if (bitsId2 == 63) {
                        sign = false;
                    }
                }
            }
            int exponentId3 = 0;
            int fractionId3 = 0;
            int bitsId3 = 0;
            for (int byteId3 = 0; byteId3 < 8; byteId3++) {
                for (int bitId3 = 0; bitId3 < 8; bitId3++) {
                    bitsId3 = ((byteId3 * 8) + bitId3);
                    if (bitsId3 < 51) {
                        bits[bitsId3] = fraction[fractionId3];
                        fractionId3++;
                    } else if (bitsId3 > 51 && bitsId3 < 63) {
                        bits[bitsId3] = exponent[exponentId3];
                        exponentId3++;
                    } else if (bitsId3 == 63) {
                        bits[bitsId3] = sign;
                    }
                }
            }
            long tempLong = 0L;
            for (int i = 0; i < 64; i++) {
                if (bits[i]) {
                    tempLong |= (1L << i);
                }
            }
            temp = Double.longBitsToDouble(tempLong);
        }
        return temp;
 */
    }
    public static long stat_CONVERT_ByteArray_To_Long(byte sysThreadId, byte[] byteArray) {
        return ByteBuffer.wrap(byteArray).getLong();
    }
    public static byte[] stat_CONVERT_Byte_To_ByteArray(byte sysThreadId, byte byteValue) {
        byte[] result = new byte[1];
        result[0] = byteValue;
        return result;
    }
    public static byte[] stat_CONVERT_Long_To_ByteArray(byte sysThreadId, long value) {
        return ByteBuffer.allocate(Long.BYTES).putLong(value).array();
    }
    public static int[] stat_CONVERT_Long_To_twoInts(byte sysThreadId, long value) {
        int[] result = new int[2];
        if (value > 2305843009213693951L) {
            System.out.printf("ERROR :: praiseId is to large for 2x 32-bit MUX(s), switched by a signed 32-bit integer.%n");
            result[0] = Integer.MIN_VALUE;
            result[1] = Integer.MIN_VALUE;
        } else {
            boolean[] thread_Listen_bits = new boolean[64];
            boolean[] temp = new boolean[64];
            boolean thread_Listen_signNegative = false;
            boolean[] thread_Listen_bitsA = new boolean[32];
            boolean[] thread_Listen_bitsB = new boolean[32];
            int thread_Listen_switch_C = 0;
            int thread_Listen_switch_B = 0;
            for (int indexA = 0; indexA < 64; indexA++) {
                thread_Listen_bits[indexA] = ((value >> indexA) & 1) == 1;
            }
            for (int indexB = 0; indexB < 64; indexB++) {
                temp[indexB] = thread_Listen_bits[63-indexB];
            }
            for (int indexC = 0; indexC < 64; indexC++) {
                if (indexC < 31) {
                    thread_Listen_bits[indexC] = temp[indexC];
                } else if (indexC > 31 && indexC < 63) {
                    thread_Listen_bits[indexC] = temp[indexC];
                } else if(indexC == 31) {
                    thread_Listen_bits[indexC] = thread_Listen_signNegative;
                } else {
                    thread_Listen_bits[indexC] = temp[63];
                }
            }
            for (int indexA = 0; indexA < 32; indexA++) {
                int indexB = 32 + indexA;
                if (indexA == 31) {
                    thread_Listen_bitsA[indexA] = thread_Listen_bits[63];
                    thread_Listen_bitsB[indexA] = thread_Listen_signNegative;
                } else {
                    thread_Listen_bitsA[indexA] = thread_Listen_bits[indexB];
                    thread_Listen_bitsB[indexA] = thread_Listen_bits[indexA+1];
                }
            }
            for (int indexB = 0; indexB < 32; indexB++) {
                thread_Listen_switch_C = (thread_Listen_switch_C << 1) | (thread_Listen_bitsA[indexB] ? 1 : 0);
                thread_Listen_switch_B = (thread_Listen_switch_B << 1) | (thread_Listen_bitsB[indexB] ? 1 : 0);
            }
            result[0] = thread_Listen_switch_B;
            result[1] = thread_Listen_switch_C;
        }
        return result;
    }
    public static byte[] stat_CONVERT_Double_To_ByteArray(byte sysThreadId, double value) {
        return ByteBuffer.allocate(8).putDouble(value).array();
    }
    public static long stat_CONVERT_twoInts_To_Long(byte sysThreadId, int[] value) {
        return 0;
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