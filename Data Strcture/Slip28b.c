// Write a 'C' program to read n integers and create two lists such that all positive numbers are in one list and negative numbers are in another list.
// Display both the lists.

#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    int info;
    struct node *next;
} Node;
void *createlist(int *p, int n)
{
    Node *newnode, *newnode1, *temp, *list1 = NULL, *list2 = NULL;
    int i, cpos = 0, cneg = 0;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) > 0)
            cpos++;
        else
            cneg++;
    }
    for (i = 0; i < n; i++)
    {
        if (*(p + i) > 0)
        {
            newnode = (Node *)malloc(sizeof(struct node));
            newnode->next = NULL;
            newnode->info = *(p + i);
            if (list1 == NULL)
                list1 = temp = newnode;
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
        }
    }
    for (temp = list1; temp != NULL; temp = temp->next)
    {
        printf("%d\t", temp->info);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (*(p + i) < 0)
        {
            newnode1 = (Node *)malloc(sizeof(struct node));
            newnode1->next = NULL;
            newnode1->info = *(p + i);
            if (list2 == NULL)
                list2 = temp = newnode1;
            else
            {
                temp->next = newnode1;
                temp = newnode1;
            }
        }
    }
    for (temp = list2; temp != NULL; temp = temp->next)
    {
        printf("%d\t", temp->info);
    }
}
int main()
{
    int n, i;
    int *arr;
    printf("enter n ");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter number");
        scanf("%d", arr + i);
    }
    createlist(arr, n);
    return 0;
}