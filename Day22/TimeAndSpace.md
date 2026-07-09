# ⏱️ Time Complexity & 💾 Space Complexity

## 📚 Introduction

Time Complexity and Space Complexity are used to measure the efficiency of an algorithm. They help us compare different solutions and choose the most optimized one.

---

# ⏱️ Time Complexity

## Definition

Time Complexity represents the amount of time an algorithm takes to execute as the input size (N) increases.

It tells us how fast or slow an algorithm grows with larger inputs.

---

## Common Time Complexities

| Complexity | Name | Performance |
|------------|------|-------------|
| O(1) | Constant | Excellent |
| O(log N) | Logarithmic | Very Fast |
| O(N) | Linear | Good |
| O(N log N) | Linearithmic | Efficient |
| O(N²) | Quadratic | Slow |
| O(N³) | Cubic | Very Slow |
| O(2ᴺ) | Exponential | Poor |
| O(N!) | Factorial | Worst |

---

## Examples

### O(1)

Accessing an element in an array.

```cpp
int x = arr[5];
```

---

### O(N)

Traversing an array.

```cpp
for(int i=0;i<n;i++)
    cout<<arr[i];
```

---

### O(N²)

Nested loops.

```cpp
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        // work
    }
}
```

---

### O(log N)

Binary Search divides the search space into half each time.

---

# 💾 Space Complexity

## Definition

Space Complexity represents the amount of extra memory required by an algorithm during execution.

It includes temporary variables, recursion stack, and auxiliary data structures.

---

## Examples

### O(1)

Only a few variables are used.

```cpp
int sum = 0;
```

---

### O(N)

Creating an extra array.

```cpp
vector<int> temp(n);
```

---

### O(N²)

Creating a matrix.

```cpp
vector<vector<int>> matrix(n, vector<int>(n));
```

---

# Auxiliary Space

Auxiliary Space is the extra memory used by an algorithm excluding the input data.

Example:

```cpp
vector<int> temp(n);
```

Auxiliary Space = O(N)

---

# Big-O Notation

Big-O describes the worst-case performance of an algorithm.

Example:

- Linear Search → O(N)
- Binary Search → O(log N)
- Merge Sort → O(N log N)
- Bubble Sort → O(N²)

---

# Why Time Complexity Matters?

- Helps compare different algorithms.
- Improves program performance.
- Reduces execution time.
- Important in coding interviews.
- Essential for solving large input problems.

---

# Why Space Complexity Matters?

- Reduces memory usage.
- Important in memory-constrained systems.
- Helps design optimized algorithms.

---

# Quick Revision

✅ Time Complexity → Measures execution time.

✅ Space Complexity → Measures memory usage.

✅ Big-O → Worst-case complexity.

✅ Best algorithms are both fast and memory efficient.

---

# Key Takeaways

- Time Complexity tells how execution time grows.
- Space Complexity tells how memory usage grows.
- Always try to optimize both whenever possible.
- Choosing the right algorithm is more important than writing more code.