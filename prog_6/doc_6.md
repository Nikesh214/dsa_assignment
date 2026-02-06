## Program Documentation: Building Min Heap and Max Heap
### Purpose of the Program

This program demonstrates how to build a Min Heap and a Max Heap from an unsorted array using the heapify method.

Min Heap: Parent node is smaller than its children.

Max Heap: Parent node is larger than its children.

### Data Structures Defined

Array

int arr[]


Represents the input unsorted data.

Heap is stored as an array where, for a node at index i:

Left child = 2*i + 1

Right child = 2*i + 2

Heap Arrays

int minHeap[n], maxHeap[n];


Separate arrays are used to build Min Heap and Max Heap from the original array.

### Function Descriptions

#### **swap(int a, int b)

Purpose: Swaps two integer values.

#### minHeapify(int arr[], int n, int i)

Purpose: Ensures subtree rooted at index i satisfies Min Heap property.

#### Logic:

Compare parent with left and right children.

Swap with smallest child if necessary.

Recursively heapify the affected subtree.

#### maxHeapify(int arr[], int n, int i)

Purpose: Ensures subtree rooted at index i satisfies Max Heap property.

#### Logic:

Compare parent with left and right children.

Swap with largest child if necessary.

Recursively heapify the affected subtree.

#### buildMinHeap(int arr[], int n)

Purpose: Builds a Min Heap from the given array.

Logic: Start from last non-leaf node (n/2 - 1) and call minHeapify up to the root.

#### buildMaxHeap(int arr[], int n)

Purpose: Builds a Max Heap from the given array.

Logic: Start from last non-leaf node (n/2 - 1) and call maxHeapify up to the root.

#### printArray(int arr[], int n)

Purpose: Prints all elements of an array in sequence.

## Overview of main() Method

Defines an unsorted array: {4, 10, 3, 5, 1}.

Copies the array into minHeap and maxHeap.

Calls buildMinHeap() to transform the array into a Min Heap.

Calls buildMaxHeap() to transform the array into a Max Heap.

Prints both heaps using printArray().

## Sample Output
Min Heap: 1 4 3 10 5

Max Heap: 10 5 4 3 1

## Conclusion

The program demonstrates:

How to implement Min Heap and Max Heap using arrays.

How to maintain heap properties with the heapify method.

How parent-child relationships can be managed in an array representation of a heap.

This program can be extended for heap sort, priority queues, and other heap-based algorithms.