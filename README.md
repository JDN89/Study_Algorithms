# AGORITHMS

## Resources:
[Algorithms, 4th Edition](https://algs4.cs.princeton.edu/home/)
[Course by the primeAgen](https://frontendmasters.com/courses/algorithms/)
[grind 75](https://www.techinterviewhandbook.org/grind75)

## Goal
As a self-taught developer, I need to master at least the basics of data structures and algorithms. To achieve this, I'll read the "Algorithms" book (written in Java) and watch the corresponding videos from The Primagen course (in JavaScript). Then, I'll implement the algorithms in both C and Rust. Why C and Rust? Because I'm learning these languages and want to explore how Rust enhances and improves upon C.

I might subscribe to leetcode for a month and post the puzzle solutions here.

## Data Structures

| Data Structure       | Read         | Write        | Update       | Delete       |
|----------------------|--------------|--------------|--------------|--------------|
| Array                | O(1)         | O(1)         | O(1)         | O(N)         |
| Dynamic Array (e.g., Vector in C++)| O(1) (amortized)| O(1) (amortized)| O(1) (amortized)| O(N) |
| Singly Linked List   | O(N)         | O(1)         | O(N)         | O(N)         |
| Doubly Linked List   | O(N)         | O(1)         | O(N)         | O(N)         |
| Hash Table           | O(1) (average)| O(1) (average)| O(1) (average)| O(1) (average) |
| Binary Search Tree   | O(log N)     | O(log N)     | O(log N)     | O(log N)     |
| AVL Tree             | O(log N)     | O(log N)     | O(log N)     | O(log N)     |
| Red-Black Tree       | O(log N)     | O(log N)     | O(log N)     | O(log N)     |
| B-Tree               | O(log N)     | O(log N)     | O(log N)     | O(log N)     |
| Skip List            | O(log N)     | O(log N)     | O(log N)     | O(log N)     |
| Queue (Array-based)  | O(1)         | O(1)         | O(1)         | O(N)         |
| Queue (Linked List)  | O(N)         | O(1)         | O(N)         | O(N)         |
| Stack (Array-based)  | O(1)         | O(1)         | O(1)         | O(N)         |
| Stack (Linked List)  | O(N)         | O(1)         | O(N)         | O(N)         |
| Priority Queue (Binary Heap) | O(1) | O(log N)    | O(log N)     | O(log N)

| Data Structure | Advantages                                                                                       |
|----------------|--------------------------------------------------------------------------------------------------|
| Array          | - **Fast Random Access**: Elements can be accessed directly by index.                            |
|                | - **Cache Locality**: Contiguous memory storage enhances cache performance.                       |
|                | - **Efficient Index-based Operations**: Suitable for algorithms like binary search or sorting.   |
|                | - **Fixed-size Collections**: Ideal for scenarios with a known and fixed number of elements.      |
|                | - **Simple Implementation**: Arrays are straightforward to implement and widely supported.       |
| Linked List    | - **Dynamic Size**: Can easily grow or shrink without needing to preallocate memory.               |
|                | - **Efficient Insertions and Deletions**: Adding or removing elements is fast, especially in the middle of the list. |
|                | - **Memory Efficiency with Variable Length Elements**: Each element can have a different size, reducing memory wastage. |
|                | - **Ordered Data with Frequent Modifications**: Preserves the order of elements with ease.        |
|                | - **No Random Access Requirement**: Ideal for sequential traversal or when index-based access is not needed. |
| Hash Table     | - **Fast Lookups by Key**: Provides constant-time access to elements based on a unique key.       |
|                | - **Efficient Insertions and Deletions**: Average-case time complexity for basic operations is O(1). |
|                | - **Suitable for Unordered Collections**: Does not impose any particular order on the elements.   |
|                | - **Dynamic Dataset with Unknown Size**: Can handle dynamic growth and shrinkage efficiently.      |
|                | - **Effective Collision Handling**: Hash tables handle collisions effectively with various collision resolution techniques. |
| Stack          | - **LIFO (Last-In, First-Out) Principle**: Useful for managing function calls, expression evaluation, and undo mechanisms. |
|                | - **Simple Operations**: Only two fundamental operations (push and pop) are required, making them easy to use and understand. |
|                | - **Memory Efficiency**: Typically implemented using arrays or linked lists with minimal memory overhead. |
|                | - **Dynamic Size**: Can grow or shrink as needed, making them suitable for a variety of applications. |
| Queue          | - **FIFO (First-In, First-Out) Principle**: Useful for managing tasks, scheduling, and resource sharing. |
|                | - **Simple Operations**: Fundamental operations (enqueue and dequeue) are straightforward and efficient. |
|                | - **Memory Efficiency**: Can be implemented using arrays or linked lists with minimal memory overhead. |
|                | - **Dynamic Size**: Can grow or shrink as needed, accommodating varying numbers of elements. |


## Basics

- How many steps does it take to execute a program. How will an algorithm performance change as the data increases?
- We drop al constants
- Worst is case is usually the way we measure,
- loop -> linear O(n)
- halving -> O(logN)

## SEARCH

- if you half the input at each step, its likely O(logN) or O(NlogN)
    - Binary search
        - `low` is always inclusive, `High` is always exclusive -> n+1
- Binary search is O(logN)

## SORTING

- bubble sort O(N^2)

### doubly linkedList

- getting head or tail and removing and inserting these positions is constant time
- inserting or deleting in the middle is slow -> you have to traverse the linked-list to get to the right node
- no continuous chunk of memory like an array, so no indexes
- instead you have references that point to the next and previous node
- use a linked list when it's not necessary to TRAVERSE it

### QUEUE: FIFO

- enqueue
- dequeue
- peek (check what's head)

### Stack LIFO
- 

## ARRAYS

- Linked List is hard for traversing but easy for removing and inserting at beginning and end
  -Linked List: When you require frequent insertions and deletions, and these are more important than random access.
- `Random acces` array list
    - no remove from the front -> array list is n time operation
- Getting sucks on a `linked list` -> O(N)

## ARRAYLIST vs LINKEDLIST

- pushing and poping is more or less the same enquei

## Abstract DATA Type

- Assigning one reference to another is known as aliasing
- default no args constructor initializes instance variables to it's default values
    - primitive numeric values -> 0
    - boolean -> false
    - reference types -> null
- == -> Reference equality
- .equals -> value equality

## Bags, Queues and Stacks

- Queue FIFO
- Stack LIFO
- Linkedlist consits of nodes
- `NODE` :
- Item item
- Node<item> next // reference to the next node in the sequence
- Inserting in beginning and end is easy -> removing is harder because you don't have a ref to the previous node
    - so you have to traverse the list to find the previous node and link that to the next one
- inserting in the middle is also harder -> because you have to traverse the list in order to find the place where you
  want to insert it
    - same issue with a doubly-linked list O(n)

## RECURSION

-recursion is a function that keeps calling itself until it reaches the base case
- if you know your 'base case' recursion is simple

### Visualise summy
function has a return address where it returns it return value

  |return address| rtrn value| args|
  |--------------|-----------|-----|
  |foo(5)        | 5 + 10 | 5 |
  |foo(4)        | 4 + 6 | 4 |
  |foo(3)        | 3 + 3 | 3 |
  |foo(2)        | 2 + 1 | 2 |
  |foo(1)        | 1 | 1 |

### STEPS
- pre: n + 1
- recurse: call itself
- post: f.e. call log(n)
  - 1,2,3,4,5 logged in this order because it's done post!
