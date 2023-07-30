package org.jdn.sort;

class QNode<T> {
    T value;
    QNode<T> next;

    public QNode(T value) {
        this.value = value;
    }
}

public class Queue<T> {
    private QNode<T> head;
    private QNode<T> tail;
    private int length;

    public Queue() {
        this.head = this.tail = null;
        this.length = 0;
    }

    public void enqueue(T item) {
        QNode<T> node = new QNode<>(item);
        length++;

        if (tail == null) {
            head = tail = node;
            return;
        }

        tail.next = node;
        tail = node;
    }

    public T dequeue() {
        if (head == null) {
            return null;
        }

        length--;
        QNode<T> temp = head;
        head = head.next;

        if (head == null) {
            tail = null;
        }

        return temp.value;
    }

    public T peek() {
        return (head != null) ? head.value : null;
    }

    public int size() {
        return length;
    }
}