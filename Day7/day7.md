# Day 07 - DSA Learning

## Topics Covered

### Hashing

Hashing is a technique used to store and retrieve data efficiently.

Purpose:
- Fast Searching
- Fast Insertion
- Fast Deletion

Time Complexity:
- Average Case: O(1)
- Worst Case: O(n)

---

## Hash Functions

A hash function converts input data into a fixed-size index value.

Properties:
- Deterministic
- Fast Computation
- Uniform Distribution

---

## Collision

A collision occurs when two different keys generate the same hash value.

Example:

Key 12 → Index 2
Key 22 → Index 2

Collision Occurred

---

## Collision Resolution Techniques

### 1. Separate Chaining

Concept:
Store multiple elements at the same index using linked lists.

Advantages:
- Easy Implementation
- Dynamic Size

---

### 2. Linear Probing

Concept:
Search for the next empty slot sequentially.

Formula:

(H(key) + i) % TableSize

Advantages:
- Simple Implementation

---

### 3. Quadratic Probing

Concept:
Use quadratic increments while searching.

Formula:

(H(key) + i²) % TableSize

Advantage:
- Reduces clustering

---

### 4. Double Hashing

Concept:
Use a second hash function to find the next position.

Advantage:
- Better distribution
- Reduced clustering

---

## Applications of Hashing

- Hash Maps
- Dictionaries
- Database Indexing
- Caching
- Password Storage

---

# Recursion Problems Solved

## 1. Tower of Hanoi

Concepts:
- Recursion
- Divide and Conquer

Key Learning:
Move disks between rods while maintaining constraints.

---

## 2. Recursive Number Pattern

Concepts:
- Recursive Calls
- Pattern Generation

Key Learning:
Generate sequences using recursive logic.

---

## 3. Cyclic Text Evolution

Concepts:
- String Manipulation
- Recursive Transformation

Key Learning:
Apply transformations repeatedly using recursion.

---

## 4. Book Title Prefix

Concepts:
- String Processing
- Prefix Matching
- Recursion

Key Learning:
Identify and process common prefixes among titles.

---

## Skills Strengthened

- Hashing
- Collision Handling
- Hash Tables
- Recursive Thinking
- Divide and Conquer
- String Processing
- Pattern Generation

---

## Interview Concepts Learned

- Hash Functions
- Collision Resolution
- Chaining
- Linear Probing
- Quadratic Probing
- Double Hashing
- Tower of Hanoi
- Recursive Problem Solving

---

## Practice Summary

Learned complete hashing concepts including collision handling and solved advanced recursion problems involving Tower of Hanoi, string processing, and recursive pattern generation.