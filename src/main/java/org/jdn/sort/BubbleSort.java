package org.jdn.sort;

// loop over array
// inner loop is j+1
// if i > j+1 swap
public class BubbleSort {
    public static void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            // in this loop we go to arr. length -1 because the las el are in position after the first pass through
            // n-1 n -2 n-3
            // in the j loop we order the elements
            // per i we do the whole j loop and sort the elements
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    var tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }
    }
}