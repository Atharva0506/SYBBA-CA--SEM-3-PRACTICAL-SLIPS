/*17 B) Write a ‘C’ program to accept the names of cities and store them in array. 
Accept the city name from user and use linear search algorithm to check whether the city is
present in array or not.
*/
#include<stdio.h>

void main() {
    char cities[100][100], city[100];
    int n, i;

    printf("Enter the number of cities you want to store in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter the name of city %d: ", i+1);
        scanf("%s", cities[i]);
    }

    printf("\nEnter the name of the city you want to search: ");
    scanf("%s", city);

    for(i = 0; i < n; i++) {
        if(strcmp(cities[i], city) == 0) {
            printf("\nCity %s found at position %d.\n", city, i+1);
            break;
        }
    }

    if(i == n) {
        printf("\nCity %s not found in the array.\n", city);
    }
}


