// Write a ‘C’ program to sort randomly generated array elements using Insertion sort
// method. (Use Random Function)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[SIZE];
    int i;
    srand(time(0)); // initialize random seed
    printf("Original array: ");
    for (i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // generate random number between 0 and 99
        printf("%d ", arr[i]);
    }
    insertionSort(arr, SIZE);
    printf("\nSorted array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
