package org.jdn.sort

import spock.lang.Specification

class QueueTest extends Specification {
    def"test queue" () {
        given:
        def list = new Queue<int>()
        list.enqueue(4);
        list.enqueue(6)
        list.enqueue( 8)
        expect:
        list.dequeue() == 4
        and:
        list.size() == 2
        and:
        list.enqueue(11)
        and:
        list.dequeue() == 6
        list.dequeue() == 8
        list.dequeue() == 11
        list.dequeue() == null
        list.size() == 0
        and:
        list.enqueue(69)
        list.peek() == 69
        list.size() ==1
    }
}