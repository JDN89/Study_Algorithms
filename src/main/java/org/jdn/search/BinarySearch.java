package org.jdn.search;


public class BinarySearch {

}



//public class BinarySearch {
//    public static int search(int[] nums, int target) {
//        int low = 0;
//        // We take length and not length -1  because high is exclusive in our case (less error-prone)
//        // high = middle (because high is exclusive)
//        // low = middle +1, because low is inclusive
//
//// For low <= high, high is considered inclusive (high is part of the range we consider).
//// For low < high, high is considered exclusive (high is not part of the range we consider).
//// Both can be correct, but there will be minor differences in the rest of the code,
//// specifically how high is initialised (high = length-1 versus high = length)
//// and how it's updated (high = mid-1 versus high = mid). <= high,
//// high is considered inclusive (high is part of the range we consider).
//
//        int high = nums.length;
//
//        while (low < high) {
//            int middle = low + (high - low) / 2;
//            if (target == nums[middle]) {
//                return middle;
//            } else if (target < nums[middle]) {
//                high = middle;
//            } else
//                low = middle + 1;
//        }
//        return -1;
//    }
//}