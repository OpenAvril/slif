package OpenCFSD_Java_Assembly;
//import com.github.openavril.slif;
import engine.Framework;
import java.io.IOException;

public class Main
{
    private static Framework stat_PGM_ServerAssembly = null;
    // public.
    public static void main(String[] args) throws IOException {
         System.out.printf("thread " + sysThreadId + "entered first member function, main()" + ".%n");
        //stat_PGM_ServerAssembly = ServerAssembly.dyn_App_Generate_Program();
         System.out.printf("thread " + sysThreadId + "==========%n");
         System.out.printf("thread " + sysThreadId + "declaration" + ".%n");
         System.out.printf("thread " + sysThreadId + "definition" + ".%n");
         System.out.printf("thread " + sysThreadId + "substantiation" + ".%n");
         System.out.printf("thread " + sysThreadId + "initialisation" + ".%n");
         System.out.printf("thread " + sysThreadId + "instantiation" + ".%n");
         System.out.printf("thread " + sysThreadId + "running" + ".%n");
         System.out.printf("thread " + sysThreadId + "==========%n");
         System.out.printf("thread " + sysThreadId + "SIMULATION%n");

    }
}