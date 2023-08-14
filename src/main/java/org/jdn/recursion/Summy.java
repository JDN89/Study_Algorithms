package org.jdn.recursion;

public class Summy {
    public static int foo(int n) {
        if (n == 1) {
            return 1;
        }
        return n + foo(n - 1);
    }
}