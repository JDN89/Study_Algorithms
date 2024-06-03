# AGORITHMS

## Resources:
- [Algorithms, 4th Edition](https://algs4.cs.princeton.edu/home/)
- [Course by the primeAgen](https://frontendmasters.com/courses/algorithms/)
- [grind 75](https://www.techinterviewhandbook.org/grind75)
- [Neetcode](https://neetcode.io/roadmap)

## Goal
As a self-taught developer, I need to master at least the basics of data structures and algorithms. To achieve this, I'll read the "Algorithms" book (written in Java) and watch the corresponding videos from The Primagen course (in JavaScript). Then, I'll implement the algorithms in both C and Rust. Why C and Rust? Because I'm learning these languages and want to explore how Rust enhances and improves upon C.

I might subscribe to leetcode for a month and post the puzzle solutions here.

## Data Structures

- [Big O cheat sheet](https://www.bigocheatsheet.com/)
- [More detailed cheat sheet](https://bigocheatsheet.io/)
- [Help for when you're stuck implementing data structures](https://www.youtube.com/watch?v=VOpjAHCee7c&list=PL9IEJIKnBJjFiudyP6wSXmykrn67Ykqib&ab_channel=JacobSorber)

#### Hashtable
A table with __key-value__ pairs allows us to look up a value based on a given key. We use a hash function to convert a key into a result, which serves as the index for storing the value. This hash function must always produce the same output for the same key, distribute keys widely to minimize collisions, and be fast.

load factor: number of items in table/ #slots. It helps to determine when you have to resize your table.

In case of a collision, we resolve it using open addressing with linear probing (one of the simplest techniques). If a bucket is already occupied, we check the next entry until we find an empty one.

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

## LEETCODE lessons:

#### TWOSUM:

I attempted to solve the two-sum problem in C by using the value of each number as the index in a temporary array, with the index becoming the value in this array. This approach worked until I encountered negative numbers. I was initially reluctant to learn how to implement a hashtable in C, but I've realized that it's essential for overcoming this challange.
I kept the non working solution -> 'negative numbers failure'

resource hashtable in C:
[Crafting interpreters - Chapter 20](https://craftinginterpreters.com/hash-tables.html)
[Jacob Sorber](https://www.youtube.com/watch?v=2Ti5yvumFTU&t=1084s&ab_channel=JacobSorber)


