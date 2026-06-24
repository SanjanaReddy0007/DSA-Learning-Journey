# Day 11 - DSA Learning

## Topic Covered

# Divide and Conquer Algorithms

Divide and Conquer is an algorithmic technique that:

1. Divides the problem into smaller subproblems
2. Solves the subproblems recursively
3. Combines the solutions

Algorithms Learned:

- Merge Sort
- Quick Sort

---

# Merge Sort

## Definition

Merge Sort is a stable sorting algorithm that follows the Divide and Conquer approach.

It divides the array into two halves, sorts them recursively, and then merges the sorted halves.

---

## Working Steps

### Step 1

Divide the array into two halves.

Example:

38 27 43 3 9 82 10

↓

38 27 43 3 | 9 82 10

---

### Step 2

Keep dividing until each subarray contains one element.

Example:

38 | 27 | 43 | 3 | 9 | 82 | 10

---

### Step 3

Merge the divided arrays in sorted order.

Example:

38 + 27 → 27 38

43 + 3 → 3 43

9 + 82 → 9 82

---

### Step 4

Continue merging until one sorted array is obtained.

Final Result:

3 9 10 27 38 43 82

---

## Time Complexity

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n log n)

---

## Space Complexity

O(n)

---

## Advantages

- Stable Sorting
- Guaranteed Performance
- Suitable for Large Data

---

## Disadvantages

- Extra Memory Required
- Slower than Quick Sort in some practical cases

---

# Quick Sort

## Definition

Quick Sort is a Divide and Conquer sorting algorithm that selects a pivot element and partitions the array around the pivot.

---

## Pivot

A pivot is the element used to divide the array.

Example:

Array:

10 7 8 9 1 5

Pivot = 5

After Partition:

1 | 5 | 10 7 8 9

---

## Working Steps

### Step 1

Choose Pivot Element.

### Step 2

Place smaller elements to the left of pivot.

### Step 3

Place larger elements to the right of pivot.

### Step 4

Recursively apply Quick Sort on both sides.

---

## Example

Array:

10 80 30 90 40 50 70

Pivot = 70

After Partition:

10 30 40 50 | 70 | 80 90

Recursively sort left and right parts.

Final Result:

10 30 40 50 70 80 90

---

## Time Complexity

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n²)

---

## Space Complexity

O(log n)

---

## Advantages

- Fast in Practice
- In-place Sorting
- Widely Used

---

## Disadvantages

- Worst Case O(n²)
- Not Stable

---

# Merge Sort vs Quick Sort

| Feature | Merge Sort | Quick Sort |
|----------|-----------|------------|
| Technique | Divide & Conquer | Divide & Conquer |
| Stable | Yes | No |
| Worst Case | O(n log n) | O(n²) |
| Space Complexity | O(n) | O(log n) |
| In-place | No | Yes |
| Faster in Practice | No | Yes |

---

# Key Learnings

- Divide and Conquer Technique
- Merge Operation
- Partitioning
- Pivot Selection
- Recursive Sorting
- Complexity Analysis

---

# Interview Questions

### What is the main idea behind Merge Sort?

Divide the array into halves, sort recursively, and merge.

### What is a Pivot in Quick Sort?

The element used to partition the array.

### Which sorting algorithm is stable?

Merge Sort.

### Which sorting algorithm is generally faster in practice?

Quick Sort.

### Time Complexity of Merge Sort?

O(n log n)

### Worst Case of Quick Sort?

O(n²)

---

# Day 11 Summary

Topics Learned:

- Merge Sort
- Quick Sort
- Divide and Conquer
- Partitioning
- Pivot Selection
- Time Complexity Analysis

Skills Improved:

- Recursive Thinking
- Sorting Techniques
- Algorithm Analysis
- Problem Solving