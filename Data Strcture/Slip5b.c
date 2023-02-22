/*Write a 'C' program to create linked list with given number in which data part of each node contains individual digit of the number.*/

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
    int i, n, r;
    printf("\n enter number more than one digit");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        newnode = (Node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->info = r;
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
void display(Node *list)
{
    Node *temp, *temp1;
    printf("\n printing list ");
    for (temp = list; temp != NULL; temp = temp->next)
    {
        printf(" %d \t", temp->info);
    }
}
void reverseprint(Node *list)
{
    if (list == NULL)
        return;
    reverseprint(list->next);
    printf("node %d ", list->info);
}
int main()
{
    Node *list = NULL, *temp;
    int n, pos;
    list = createlist(list);
    display(list);
    reverseprint(list);
    return 0;
}