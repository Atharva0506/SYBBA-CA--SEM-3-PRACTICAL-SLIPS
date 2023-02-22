// Write a ‘C’ program to accept names from the user and sort in alphabetical order
// using bubble sort
// - Accept n name
// - Bubble sort Function
// - Display






#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void bubbleSort(char names[][MAX_SIZE], int n) {
    int i, j;
    char temp[MAX_SIZE];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char names[MAX_SIZE][MAX_SIZE];
    printf("Enter the number of names: ");
    scanf("%d", &n);
    printf("Enter the names: \n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    bubbleSort(names, n);
    printf("Sorted names: \n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
