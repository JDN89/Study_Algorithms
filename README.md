# AGORITHMS

## Resources:
[Algorithms, 4th Edition](https://algs4.cs.princeton.edu/home/)
[Course by the primeAgen](https://frontendmasters.com/courses/algorithms/)
[grind 75](https://www.techinterviewhandbook.org/grind75)

## Goal
As a self-taught developer, I need to master at least the basics of data structures and algorithms. To achieve this, I'll read the "Algorithms" book (written in Java) and watch the corresponding videos from The Primagen course (in JavaScript). Then, I'll implement the algorithms in both C and Rust. Why C and Rust? Because I'm learning these languages and want to explore how Rust enhances and improves upon C.

I might subscribe to leetcode for a month and post the puzzle solutions here.


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
