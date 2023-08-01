package org.jdn.sort;

class QNode<T> {
    T value;
    QNode<T> next;

    public QNode(T value) {
        this.value = value;
    }
}

public class Queue<T> {
    // head,tail, length
    //ctor
//    enque
//dequeue
    //peek
    private QNode<T> head;
    private QNode<T> tail;
    private int length;

    public Queue() {
        this.head = null;
        this.tail = null;
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
        var temp = head;
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

//enqueue: [tail] <- [] <- [] <- [head] dequeue

//class QNode<T> {
//    T value;
//    QNode<T> next;
//
//    public QNode(T value) {
//        this.value = value;
//    }
//}
//
//public class Queue<T> {
//    private QNode<T> head;
//    private QNode<T> tail;
//    private int length;
//
//    public Queue() {
//        this.head = this.tail = null;
//        this.length = 0;
//    }
//
//    public void enqueue(T item) {
//        QNode<T> node = new QNode<>(item);
//        length++;
//
//        if (tail == null) {
//            head = tail = node;
//            return;
//        }

// //tail.next = node; : If the queue is not empty, the next field of the current tail node is set to the new node. This links the last node of the queue to the new node.
// //         tail = node; : Then, the tail reference is updated to the new node. Now, the new node becomes the last node in the queue.
//        tail.next = node;
//        tail = node;
//    }
//
//    public T dequeue() {
//        if (head == null) {
//            return null;
//        }
//
//        length--;
//        QNode<T> temp = head;
//        head = head.next;
//
//        if (head == null) {
//            tail = null;
//        }
//
//        return temp.value;
//    }
//
//    public T peek() {
//        return (head != null) ? head.value : null;
//    }
//
//    public int size() {
//        return length;
//    }
//}