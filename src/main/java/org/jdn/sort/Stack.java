package org.jdn.sort;

class SNode<T> {
    T value;
    SNode<T> previous;

    public SNode(T value) {
        this.value = value;
    }

    public T getValue() {
        return value;
    }

    public SNode<T> getPrevious() {
        return previous;
    }

    public void setPrevious(SNode<T> previous) {
        this.previous = previous;
    }
}

public class Stack<T> {
    private SNode<T> head;
    private int length;

    public Stack() {
        this.head = null;
        this.length = 0;
    }

    public void push(T item) {
        var node = new SNode<>(item);
        this.length++;
//        we take our node and point to the previous head;
        node.setPrevious(head);
//        then we take our head and set it to the new node;
        head = node;
    }

    public T pop() {
        if (head == null) {
            return null;
        }

        var temp = head;
        head = temp.getPrevious();
        length--;
//        This operation also allows the Java garbage collector to free the memory that was allocated for the removed element,
//        as there are no more references to it after pop method
        return temp.getValue();

    }

    public T peek() {
        return this.head.value;
    }

    public int size() {
        return this.length;
    }
}