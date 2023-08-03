# AGORITHMS

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
- array

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
-  `NODE` :
  - Item item
  - Node<item> next // reference to the next node in the sequence
  - Inserting in beginning and end is easy -> removing is harder because you don't have a ref to the previous node
    - so you have to traverse the list to find the previous node and link that to the next one
  - inserting in the middle is also harder -> because you have to traverse the list in order to find the place where you want to insert it
    - same issue with a doubly-linked list O(n)