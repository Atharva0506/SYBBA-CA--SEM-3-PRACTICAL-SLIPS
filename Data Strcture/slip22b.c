// Write a 'C' program to count all non-zero elements, odd numbers and even numbers in the singly linked list.

#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    int info;
    struct node *next;
} Node;
Node *createlist(Node *list)
{
    Node *newnode, *temp;
    int i, n;
    printf("\n how mnay elements");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        newnode = (Node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        printf("\n enter element");
        scanf("%d", &newnode->info);
        if (list == NULL)
            list = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return list;
}
void displayall(Node *list)
{
    int i = 0, even = 0, odd = 0, x = 0, z = 0;
    Node *temp;
    for (temp = list; temp != NULL; temp = temp->next)
    {
        if (temp->info > 0)
        {
            x++;
            if (temp->info % 2 == 0)
                even++;
            else
                odd++;
        }
        else
            z++;
        printf("%d\t", temp->info);
    }
    printf("\neven are %d", even);
    printf("\nodd are %d", odd);
    printf("\n non zero %d", x);
    printf("\n zero are %d", z);
}
int main()
{
    Node *list = NULL, *temp;
    int n, pos;
    list = createlist(list);
    displayall(list);
    return 0;
}