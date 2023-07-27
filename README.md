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

## ANALYSIS OF ALGORITHMS

## Sorting

### Elementary sorts