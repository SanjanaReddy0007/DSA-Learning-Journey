orting Algorithms
1. Selection Sort
Approach: Iteratively selects the smallest element from the unsorted portion of the list and swaps it with the first unsorted element.
Time Complexity:
Best: O(n²)
Worst: O(n²)
Space Complexity: O(1) (in-place)
Use Case: Simple to implement; useful for small datasets or when memory usage is a constraint.
VISUALISATION:

SelectionsortGIF
2. Bubble Sort
Approach: Repeatedly compares adjacent elements and swaps them if they are in the wrong order, "bubbling" the largest element to its correct position in each pass.
Time Complexity:
Best: O(n) (when the array is already sorted)
Worst: O(n²)
Space Complexity: O(1) (in-place)
Use Case: Educational purposes; rarely used in practice due to inefficiency.
VISUALISATION:

BubblesortGIF
3. Insertion Sort
Approach: Builds the sorted portion of the list one element at a time by inserting elements into their correct position relative to the sorted portion.
Time Complexity:
Best: O(n) (when the array is already sorted)
Worst: O(n²)
Space Complexity: O(1) (in-place)
Use Case: Efficient for small or nearly sorted datasets.
VISUALISATION:

InsertionsortGIF
4. Merge Sort
Approach: Divides the list into two halves, recursively sorts each half, and then merges the sorted halves into a single sorted list.
Time Complexity: O(n log n) (all cases)
Space Complexity: O(n) (requires extra space for merging)
Use Case: Suitable for large datasets; works well with external sorting (e.g., sorting data that doesn’t fit in memory).
VISUALISATION:

MergeSortGIF
5. Quick Sort
Approach: Selects a "pivot" element and partitions the list into two sublists (elements less than the pivot and elements greater than the pivot), then recursively sorts the sublists.
Time Complexity:
Best: O(n log n)
Average: O(n log n)
Worst: O(n²) (occurs when the pivot is poorly chosen)
Space Complexity: O(log n) (in-place, but recursive stack space is needed)
Use Case: Highly efficient for large datasets with good pivot selection.
VISUALISATION:

QuickSortGIF
Comparison Overview
Algorithm	Time Complexity (Best)	Time Complexity (Worst)	Space Complexity
Selection Sort	O(n²)	O(n²)	O(1)
Bubble Sort	O(n)	O(n²)	O(1)
Insertion Sort	O(n)	O(n²)	O(1)
Merge Sort	O(n log n)	O(n log n)	O(n)
Quick Sort	O(n log n)	O(n²)	O(log n)
Submit Feedback
