package com.github.openavril.slif.server_assembly.Main;
import com.github.openavril.slif.server_assembly.engine.Framework;
import java.io.IOException;
public class Main
{
    private static Framework stat_PGM_ServerAssembly = null;
// public.
    public static void main(String[] args) throws IOException {
        System.out.printf("thread " + 0 + "entered first member function, main()" + ".%n");
        stat_PGM_ServerAssembly = new Framework((byte) 0);
        System.out.printf("thread " + 0 + "==========%n");
        System.out.printf("thread " + 0 + "declaration" + ".%n");
        System.out.printf("thread " + 0 + "definition" + ".%n");
        System.out.printf("thread " + 0 + "substantiation" + ".%n");
        System.out.printf("thread " + 0 + "initialisation" + ".%n");
        System.out.printf("thread " + 0 + "instantiation" + ".%n");
        System.out.printf("thread " + 0 + "running" + ".%n");
        System.out.printf("thread " + 0 + "==========%n");
        System.out.printf("thread " + 0 + "SIMULATION%n");

    }
}