package engine;
import java.nio.ByteBuffer;
public class Global
{
    private static byte stat_REG_NUMBER_OF_THREADS;
    private static long stat_REG_NUMBER_OF_PRAISES;
    // public.
    public Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + "entering Global()%n");
        stat_CLASS_boot0_DECLAIRE_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_Global(sysThreadId);
        System.out.printf("thread " + sysThreadId + "exiting Global()%n");
    }
    public static void dyn_REG_boot1_DEFINE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot1_DEFINE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot1_DEFINE_Global(sysThreadId)" + ".%n");
    }
    public static void dyn_REG_boot2_SUBSTANTIATE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot2_SUBSTANTIATE_Global(sysThreadId)" + ".%n");
        stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_PRAISES(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot2_SUBSTANTIATE_Global(sysThreadId)" + ".%n");
    }
    public static void dyn_REG_boot3_INITIALISE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot3_INITIALISE_Global(sysThreadId)" + ".%n");
        stat_REG_boot3_INITIALISE_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot3_INITIALISE_NUMBER_OF_PRAISES(sysThreadId);
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot3_INITIALISE_Global(sysThreadId)" + ".%n");
    }
    public static void dyn_REG_boot4_INSTANTIATE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : dyn_REG_boot4_INSTANTIATE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : dyn_REG_boot4_INSTANTIATE_Global(sysThreadId)" + ".%n");
    }
    public static byte stat_REG_get_NUMBER_OF_THREADS(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= byte : dyn_REG_get_numberOfCores(sysThreadId)" + ".%n");
        return pr_stat_REG_get_NUMBER_OF_THREADS(sysThreadId);
    }
    public static long stat_REG_get_NUMBER_OF_PRAISES(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : stat_REG_get_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
        return pr_stat_REG_get_NUMBER_OF_PRAISES(sysThreadId);
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
        System.out.printf("thread " + sysThreadId + " :: <= byte[] : stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId)" + ".%n");
        return temp;
    }
    public static byte[] stat_CONVERT_Boolean_To_ByteArray(byte sysThreadId, boolean bool) {
        System.out.printf("thread " + sysThreadId + " :: <= byte[] : stat_CONVERT_Boolean_To_ByteArray(sysThreadId)" + ".%n");
        return new byte[] { (byte) (bool ? 1 : 0) };
    }
    public static boolean stat_CONVERT_ByteArray_To_Boolean(byte sysThreadId, byte[] bytesBool) {
        boolean temp;
        temp = false;
        if(bytesBool[0] != 0) {
            temp = true;
        }
        System.out.printf("thread " + sysThreadId + " :: <= boolean : stat_CONVERT_ByteArray_To_Boolean(sysThreadId)" + ".%n");
        return temp;
    }
    public static double stat_CONVERT_ByteArray_To_Double(byte sysThreadId, byte[] byteArray) {
        System.out.printf("thread " + sysThreadId + " :: <= double : stat_CONVERT_ByteArray_To_Double(sysThreadId)" + ".%n");
        return ByteBuffer.wrap(byteArray).getDouble();
    }
    public static long stat_CONVERT_ByteArray_To_Long(byte sysThreadId, byte[] byteArray) {
        System.out.printf("thread " + sysThreadId + " :: <= long : stat_CONVERT_ByteArray_To_Long(sysThreadId)" + ".%n");
        return ByteBuffer.wrap(byteArray).getLong();
    }
    public static byte[] stat_CONVERT_Long_To_ByteArray(byte sysThreadId, long value) {
        System.out.printf("thread " + sysThreadId + " :: <= byte[] : stat_CONVERT_Long_To_ByteArray(sysThreadId)" + ".%n");
        return ByteBuffer.allocate(Long.BYTES).putLong(value).array();
    }
    public static int[] stat_CONVERT_Long_To_twoInts(byte sysThreadId, long value) {
        int[] result = new int[2];
        if (value > 2305843009213693951L) {
             System.out.printf("thread " + sysThreadId + "ERROR :: praiseId is to large for 2x 32-bit MUX && 31-bit MUX" + ".%n");
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
        System.out.printf("thread " + sysThreadId + " :: <= int[] : stat_CONVERT_Long_To_twoInts(sysThreadId)" + ".%n");
        return result;
    }
    public static byte[] stat_CONVERT_Double_To_ByteArray(byte sysThreadId, double value) {
        System.out.printf("thread " + sysThreadId + " :: <= byte[] : stat_CONVERT_Double_To_ByteArray(sysThreadId)" + ".%n");
        return ByteBuffer.allocate(8).putDouble(value).array();
    }
    public static long stat_CONVERT_twoInts_To_Long(byte sysThreadId, int[] value) {
        System.out.printf("thread " + sysThreadId + " :: <= long : stat_CONVERT_twoInts_To_Long(sysThreadId)" + ".%n");
        //todo
        return 0;
    }
    public static void stat_CLASS_boot0_DECLAIRE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_CLASS_boot0_DECLAIRE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_CLASS_boot0_DECLAIRE_Global(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_CLASS_boot1_DEFINE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_CLASS_boot1_DEFINE_Global(sysThreadId)" + ".%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_CLASS_boot3_INITIALISE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_CLASS_boot3_INITIALISE_Global(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Global(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot0_DECLAIRE_Global(sysThreadId)" + ".%n");
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot0_DECLAIRE_Global(sysThreadId)" + ".%n");
    }
    // private.
    private static void stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_THREADS(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_THREADS(sysThreadId)" + ".%n");
        stat_REG_NUMBER_OF_THREADS = Byte.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_THREADS(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_PRAISES(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
        stat_REG_NUMBER_OF_PRAISES = Long.MAX_VALUE;
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot2_SUBSTANTIATE_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_NUMBER_OF_THREADS(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_NUMBER_OF_THREADS(sysThreadId)" + ".%n");
        stat_REG_NUMBER_OF_THREADS = 3;
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_NUMBER_OF_THREADS(sysThreadId)" + ".%n");
    }
    private static void stat_REG_boot3_INITIALISE_NUMBER_OF_PRAISES(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: entered : Global : stat_REG_boot3_INITIALISE_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
        stat_REG_NUMBER_OF_PRAISES = 4;
        System.out.printf("thread " + sysThreadId + " :: exiting : Global : stat_REG_boot3_INITIALISE_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
    }
    private static byte pr_stat_REG_get_NUMBER_OF_THREADS(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= byte : pr_stat_REG_get_NUMBER_OF_THREADS(sysThreadId)" + ".%n");
        return stat_REG_NUMBER_OF_THREADS;
    }
    private static long pr_stat_REG_get_NUMBER_OF_PRAISES(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= long : pr_stat_REG_get_NUMBER_OF_PRAISES(sysThreadId)" + ".%n");
        return stat_REG_NUMBER_OF_PRAISES;
    }
}