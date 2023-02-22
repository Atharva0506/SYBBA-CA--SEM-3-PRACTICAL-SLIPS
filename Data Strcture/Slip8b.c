/*Write a 'C' program to accept and sort n elements in ascending order by using insertion sort.*/

#include <math.h>
#include <stdio.h>

// Insertion Sort Function
void insertionSort(int array[], int n)
{
    int i, element, j;
    for (i = 1; i < n; i++)
    {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = element;
    }
}

// Function to print the elements of an array
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}
void main()
{
    int a[20];
    int i, j, n;
    printf("enter how many elements");
    scanf("%d", &n);
    printf("enter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    printArray(a, n);
}
