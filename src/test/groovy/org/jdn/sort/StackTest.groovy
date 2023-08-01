package org.jdn.sort

import spock.lang.Specification

class StackTest extends Specification {
   def"test Stack" () {
       given:
       def list = new Stack<int>()
       list.push(5)
       list.push(7)
       list.push(9)
       expect:
       list.pop() == 9
       and:
       list.size() == 2
       list.push(11)
       and:
       list.pop() == 11
       list.pop() == 7
       list.peek() == 5
       list.pop() == 5
       list.pop() equals null
       list.size() equals 0
   }

}