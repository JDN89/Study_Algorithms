package org.jdn.sort

import spock.lang.Specification

class BubbleSortTest extends Specification {

    def"given an unordered array, sort the array" () {
        given:
        int[] arr = [9, 3, 7, 4, 69, 420, 42]
        when:
        BubbleSort.bubbleSort(arr)
        then:
        arr == [3, 4, 7, 9, 42, 69, 420]


    }
}