package org.jdn.search;

//This code is implementing a well-known problem related to a building of certain height
// (represented as an array breaks in the code) and two crystal balls.
// You are trying to find the highest floor from which you can drop a ball without it breaking.
// It's assumed that if a ball breaks when dropped from a certain floor,
// it will also break when dropped from any floor above it.
public class TwoCrystalBalls {
    public static int twoCrystalBalls(boolean[] breaks) {
        // Determine the size of the interval.
        // The optimal size is the square root of the total number of floors.
        var jumpAmount = Math.floor(Math.sqrt(breaks.length));

        // This loop is trying to find the interval where the floor could be.
        // It starts from the floor equal to jumpAmount and continues in steps of jumpAmount.
        // Once it finds a floor where the ball breaks, it stops.
        var i = jumpAmount;
        for (; i < breaks.length; i += jumpAmount) {
            if (breaks[(int) i]) {
                break;
            }
        }

        // Go back to the beginning of the current interval.
        // This is the floor from which we will start the linear search.
        i -= jumpAmount;

        // This loop is doing a linear search in the determined interval.
        // It starts from the beginning of the interval and continues floor by floor.
        // Once it finds a floor where the ball breaks, it returns this floor as the result.
        // we look from j = 0 to jump amount which is sqrt off the arr length
        for (int j = 0; j < jumpAmount && i < breaks.length; ++j, ++i) {
            // we start looking at floor i and do a linear search from here
            if (breaks[(int) i]) {
                return (int) i;
            }
        }

        // If no floor is found where the ball breaks, it returns -1.
        return -1;
    }
}