package org.jdn.sort;

import java.util.Optional;

public class Node<T> {
    T value;
    Optional<QNode<T>> next;

    public Node(T value) {
        this.value = value;
    }

    public T getValue() {
        return value;
    }

    public void setValue(T value) {
        this.value = value;
    }

    public Optional<QNode<T>> getNext() {
        return next;
    }

    public void setNext(Optional<QNode<T>> next) {
        this.next = next;
    }
}