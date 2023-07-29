package org.jdn.search

import spock.lang.Specification
import spock.lang.Unroll

class TwoCrystalBallsTest extends Specification {
    @Unroll
    def " Given that the ball breaks at floor idx, we return the floor"() {
        given:
        def idx = new Random().nextInt(10000)
        def data = new boolean[10000]

        Arrays.fill(data, idx, data.length, true)
        expect:

        TwoCrystalBalls.twoCrystalBalls(data) == idx
    }

    def "When the ball doesn't break at a certain floor, we return -1"() {
        given:
        def data = new boolean[821]

        expect:
        TwoCrystalBalls.twoCrystalBalls(data) == -1
    }
}