# Day 08 - DSA Learning

## Topic Covered

# Sorting Algorithms

Sorting is the process of arranging data in a specific order, usually ascending or descending.

Importance:

- Faster Searching
- Easier Data Processing
- Efficient Problem Solving
- Foundation for Advanced Algorithms

---

# 1. Bubble Sort

## Concept

Repeatedly compares adjacent elements and swaps them if they are in the wrong order.

### Example

Array:

5 3 8 1

Pass 1:

3 5 1 8

Pass 2:

3 1 5 8

Pass 3:

1 3 5 8

Sorted Array:

1 3 5 8

### Time Complexity

Best Case: O(n)

Average Case: O(n²)

Worst Case: O(n²)

### Space Complexity

O(1)

### Advantages

- Easy to understand
- Easy to implement

### Disadvantages

- Very slow for large datasets

---

# 2. Selection Sort

## Concept

Find the smallest element and place it at the correct position.

### Example

Array:

5 3 8 1

Pass 1:

1 3 8 5

Pass 2:

1 3 8 5

Pass 3:

1 3 5 8

Sorted Array:

1 3 5 8

### Time Complexity

Best Case: O(n²)

Average Case: O(n²)

Worst Case: O(n²)

### Space Complexity

O(1)

### Advantages

- Simple implementation
- Fewer swaps

### Disadvantages

- Inefficient for large data

---

# 3. Insertion Sort

## Concept

Builds the sorted array one element at a time.

### Example

Array:

5 3 8 1

Pass 1:

3 5 8 1

Pass 2:

3 5 8 1

Pass 3:

1 3 5 8

Sorted Array:

1 3 5 8

### Time Complexity

Best Case: O(n)

Average Case: O(n²)

Worst Case: O(n²)

### Space Complexity

O(1)

### Advantages

- Efficient for small datasets
- Adaptive sorting

### Disadvantages

- Slow for large datasets

---

# 4. Merge Sort

## Concept

Uses Divide and Conquer technique.

Steps:

1. Divide array into two halves
2. Recursively sort both halves
3. Merge sorted halves

### Example

Array:

5 3 8 1

Divide:

[5 3] [8 1]

Further Divide:

[5] [3] [8] [1]

Merge:

[3 5] [1 8]

Final Merge:

[1 3 5 8]

### Time Complexity

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n log n)

### Space Complexity

O(n)

### Advantages

- Stable sorting
- Efficient for large datasets

### Disadvantages

- Requires extra memory

---

# Comparison Table

| Algorithm      | Best Case | Average Case | Worst Case | Space |
|---------------|-----------|--------------|------------|--------|
| Bubble Sort   | O(n)      | O(n²)        | O(n²)      | O(1) |
| Selection Sort| O(n²)     | O(n²)        | O(n²)      | O(1) |
| Insertion Sort| O(n)      | O(n²)        | O(n²)      | O(1) |
| Merge Sort    | O(n log n)| O(n log n)   | O(n log n) | O(n) |

---

# Key Learnings

- Introduction to Sorting
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Divide and Conquer Technique
- Time Complexity Analysis
- Space Complexity Analysis

---

# Interview Questions

### What is Sorting?

Arranging data in ascending or descending order.

### Which sorting algorithm uses Divide and Conquer?

Merge Sort.

### Which sorting algorithm is stable?

Bubble Sort, Insertion Sort, Merge Sort.

### Which sorting algorithm is best for small datasets?

Insertion Sort.

### Time Complexity of Merge Sort?

O(n log n)

---

# Day 08 Summary

Topics Learned:

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort

Skills Improved:

- Sorting Techniques
- Complexity Analysis
- Divide and Conquer
- Problem Solving