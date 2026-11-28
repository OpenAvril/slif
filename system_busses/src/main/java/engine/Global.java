package engine;
import java.nio.ByteBuffer;
import java.util.LinkedList;

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
    public static StemTicket stat_CONVERT_ByteArray_To_ListOfParameterInByteArray(byte sysThreadId, byte[] byteArray) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_ByteArray_To_ListOfParameterInByteArray(sysThreadId)" + ".%n");
        StemTicket ticket = new StemTicket();
        LinkedList<byte[]> listOfParameters = new LinkedList<byte[]>();
        listOfParameters = (LinkedList<byte[]>) (Object) byteArray;
        ticket.set_BusIdForJunctionPair(sysThreadId, Global.stat_CONVERT_ByteArray_To_Int8(sysThreadId, (byte[])Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, listOfParameters.get(0)));
        ticket.set_Arrival_JunctionId(sysThreadId, Global.stat_CONVERT_ByteArray_To_Int64(sysThreadId, (byte[])Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, listOfParameters.get(1)));
        ticket.set_Arrival_AccessId(sysThreadId, Global.stat_CONVERT_ByteArray_To_Int16(sysThreadId, (byte[])Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, listOfParameters.get(2)));
        ticket.set_Arrival_JunctionId(sysThreadId, Global.stat_CONVERT_ByteArray_To_Int64(sysThreadId, (byte[])Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, listOfParameters.get(3)));
        ticket.set_Arrival_AccessId(sysThreadId, Global.stat_CONVERT_ByteArray_To_Int16(sysThreadId, (byte[])Global.stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId, listOfParameters.get(4)));
        return ticket;
    }
    public static byte[] stat_CONVERT_ByteArray_To_ReverseByteArray(byte sysThreadId, byte[] buffer) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_ByteArray_To_ReverseByteArray(sysThreadId)" + ".%n");
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
    public static byte stat_CONVERT_ByteArray_To_Int8(byte sysThreadId, byte[] byteArray) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_ByteArray_To_Int8(sysThreadId)" + ".%n");
        return byteArray[0];
    }
    public static int stat_CONVERT_ByteArray_To_Int16(byte sysThreadId, byte[] byteArray) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_ByteArray_To_Int16(sysThreadId)" + ".%n");
        return ByteBuffer.wrap(byteArray).getInt();
    }
    public static long stat_CONVERT_ByteArray_To_Int64(byte sysThreadId, byte[] byteArray) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_ByteArray_To_Int64(sysThreadId)" + ".%n");
        return ByteBuffer.wrap(byteArray).getLong();
    }
    public static byte[] stat_CONVERT_Int8_To_ByteArray(byte sysThreadId, byte value) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_Int8_To_ByteArray(sysThreadId)" + ".%n");
        return ByteBuffer.allocate(Byte.BYTES).putLong(value).array();
    }
    public static byte[] stat_CONVERT_Int16_To_ByteArray(byte sysThreadId, int value) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_Int16_To_ByteArray(sysThreadId)" + ".%n");
        return ByteBuffer.allocate(Integer.BYTES).putLong(value).array();
    }
    public static byte[] stat_CONVERT_Int64_To_ByteArray(byte sysThreadId, long value) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_CONVERT_Int64_To_ByteArray(sysThreadId)" + ".%n");
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
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_REG_boot2_SUBSTANTIATE_numberOfCores(sysThreadId)" + ".%n");
        stat_REG_numberOfCores = Integer.MAX_VALUE;
    }
    private static void stat_REG_boot2_SUBSTANTIATE_numberOfPraises(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_REG_boot2_SUBSTANTIATE_numberOfPraises(sysThreadId)" + ".%n");
        stat_REG_numberOfPraises = Integer.MAX_VALUE;
    }
    private static void stat_REG_boot3_INITIALISE_numberOfCores(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_REG_boot3_INITIALISE_numberOfCores(sysThreadId)" + ".%n");
        stat_REG_numberOfCores = 3;
    }
    private static void stat_REG_boot3_INITIALISE_numberOfPraises(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global :     private static void stat_REG_boot3_INITIALISE_numberOfPraises(byte sysThreadId) {\n(sysThreadId)" + ".%n");
        stat_REG_numberOfPraises = 4;
    }
    private static long stat_REG_get_numberOfCores(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_REG_get_numberOfCores(sysThreadId)" + ".%n");
        return stat_REG_numberOfCores;
    }
    private static long stat_REG_get_numberOfPraises(byte sysThreadId) {
        System.out.printf("thread " + sysThreadId + " :: <= boolean : CBOC : Global : stat_REG_get_numberOfPraises(sysThreadId)" + ".%n");
        return stat_REG_numberOfPraises;
    }
}