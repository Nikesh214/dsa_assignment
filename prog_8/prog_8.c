#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparisons = 0, swaps = 0;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            comparisons++;
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            comparisons++;
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            swaps++;
        }
    }
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0) {
            comparisons++;
            if(arr[j] > key) {
                arr[j+1] = arr[j];
                swaps++;
                j--;
            } else break;
        }
        arr[j+1] = key;
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1], R[n2];
    for(int i=0;i<n1;i++) L[i]=arr[l+i];
    for(int i=0;i<n2;i++) R[i]=arr[m+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2) {
        comparisons++;
        if(L[i]<=R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
        swaps++;
    }
    while(i<n1) arr[k++] = L[i++], swaps++;
    while(j<n2) arr[k++] = R[j++], swaps++;
}

void mergeSort(int arr[], int l, int r) {
    if(l<r) {
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}

int main() {
    int N;
    printf("Enter number of elements: ");
    scanf("%d",&N);
    int arr[N];
    srand(time(0));
    for(int i=0;i<N;i++) arr[i]=rand()%1000+1;
    int arrCopy[N];
    for(int i=0;i<N;i++) arrCopy[i]=arr[i];
    printf("Original array:\n");
    printArray(arr,N);
    int choice;
    printf("Choose sorting algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    scanf("%d",&choice);
    comparisons=0; swaps=0;
    switch(choice) {
        case 1: bubbleSort(arrCopy,N); break;
        case 2: selectionSort(arrCopy,N); break;
        case 3: insertionSort(arrCopy,N); break;
        case 4: mergeSort(arrCopy,0,N-1); break;
        default: printf("Invalid choice\n"); return 0;
    }
    printf("Sorted array:\n");
    printArray(arrCopy,N);
    printf("Total comparisons: %d\n", comparisons);
    printf("Total swaps: %d\n", swaps);
    return 0;
}
