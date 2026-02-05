## Documentation of Random Number Sorting Program in C
## Data Structures Defined

#### Array for Random Numbers

int arr[N];


Stores N randomly generated integers in the range [1,1000].

N is provided by the user at runtime.

#### Array Copy for Sorting

int arrCopy[N];


Holds a copy of the original array.

Sorting algorithms are applied on this array to preserve the original order for display.

#### Counters for Comparisons and Swaps

int comparisons = 0, swaps = 0;


comparisons counts how many times elements are compared in the sorting process.

swaps counts how many times elements are swapped or moved.

## Function Implementation
#### void bubbleSort(int arr[], int n)

Purpose: Sorts the array using Bubble Sort.

Implementation:

Loop through the array multiple times.

Compare adjacent elements; if out of order, swap them.

Increment comparisons and swaps accordingly.

#### void selectionSort(int arr[], int n)

Purpose: Sorts the array using Selection Sort.

Implementation:

Find the minimum element in the unsorted part of the array.

Swap it with the first unsorted element.

Increment comparisons during the search and swaps when exchanging elements.

#### void insertionSort(int arr[], int n)

Purpose: Sorts the array using Insertion Sort.

Implementation:

Build the sorted portion of the array one element at a time.

Move elements greater than the key one position ahead.

Increment comparisons for each check and swaps for each move.

#### void mergeSort(int arr[], int l, int r) & void merge(int arr[], int l, int m, int r)

Purpose: Sorts the array using Merge Sort (Divide and Conquer).

Implementation:

Recursively divide the array into halves until single elements remain.

Merge the halves in sorted order.

Increment comparisons during comparisons in merge and swaps for each element placed in the merged array.

#### void printArray(int arr[], int n)

Purpose: Prints the array elements to the console.

Implementation:

Iterates over the array and prints each element separated by a space.

## Overview of main() Method

Prompt the user to enter N, the number of elements.

Generate N random integers in the range [1,1000] and store them in arr[].

Copy the array to arrCopy[] to preserve the original.

Print the original array using printArray().

Ask the user to select a sorting algorithm:

1 → Bubble Sort

2 → Selection Sort

3 → Insertion Sort

4 → Merge Sort

Reset comparisons and swaps counters to 0.

Call the chosen sorting algorithm on arrCopy[].

Print the sorted array using printArray().

Display the total number of comparisons and swaps performed.

## Sample Output of the Program

Enter number of elements: 10

Original array:

523 12 845 32 678 234 98 457 789 11 

Choose sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort

Sorted array:
11 12 32 98 234 457 523 678 789 845 

Total comparisons: 45

Total swaps: 22

## Conclusion

The program successfully generates a list of random integers and sorts them using the sorting algorithm chosen by the user. It demonstrates the differences in comparisons and swaps for each algorithm, giving insight into their efficiency. Bubble Sort, Selection Sort, and Insertion Sort are simple but less efficient for large datasets, while Merge Sort is faster for larger arrays. The program also emphasizes array manipulation, user input handling, and the use of counters to analyze algorithm performance.

