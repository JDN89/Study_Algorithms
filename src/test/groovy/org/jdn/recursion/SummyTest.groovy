package org.jdn.recursion

import spock.lang.Specification

class SummyTest extends Specification {
    def "test sum"() {
        expect:
        Summy.foo(i) == result
        where:
        i | result
        5      | 15
        4      | 10
        3      | 6

    }
}