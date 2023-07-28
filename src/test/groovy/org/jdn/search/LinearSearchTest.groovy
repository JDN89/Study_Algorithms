package org.jdn.search

import spock.lang.Specification

class LinearSearchTest extends Specification {

   def "when needle is present in the arr, the index is returned" () {
       given:
       int[] arr = [2, 3, 4, 5, 6, 7, 10]
       int target = 10
       when:
       def result = LinearSearch.search(arr, target)
       then:
       result == 6
   }

    def "when needle is not present in the array, -1 is returned" () {
        given:
        int[] arr = [2, 3, 4, 5, 6, 7, 10]
        int target = 14
        when:
        def result = LinearSearch.search(arr, target)
        then:
        result == -1
    }
}