package org.jdn.search

import spock.lang.Specification

class BinarySearchTest extends Specification {
    def "The index is returned when the needle is present in the haystack"() {
        given:
        int[] foo = [1, 3, 4, 69, 71, 81, 90, 99, 420, 1337, 69420]
        expect:
        BinarySearch.search(foo, target) == result

        where:
        target | result
        69     | 3
        71     | 4
        81     | 5
        90     | 6
        1      | 0
        69420  | 10
    }
}