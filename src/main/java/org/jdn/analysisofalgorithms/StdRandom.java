package org.jdn.analysisofalgorithms;

import java.util.Random;

public class StdRandom {
    private static Random random = new Random();

    public static int uniform(int low, int high) {
        return random.nextInt(high - low) + low;
    }
}