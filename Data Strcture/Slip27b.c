// Write a 'C' program to create Doubly Link list and display it.

#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    struct node *prev, *next;
    int info;
} NODE;
NODE *createlist(NODE *list)
{
    NODE *newnode, *temp;
    int i, n;
    printf("\nHow many elements :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        newnode = (NODE *)malloc(sizeof(struct node));
        newnode->prev = newnode->next = NULL;
        printf("\nEnter the element");
        scanf("%d", &newnode->info);
        if (list == NULL)
            list = temp = newnode;
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    return list;
}
void display(NODE *list)
{
    NODE *temp;
    for (temp = list; temp != NULL; temp = temp->next)
         printf("%d\t", temp->info);
        //  DON'T write this 2comment lines just For info"
        // printf("\'%x\'\t%d\t\'%x\'\n",temp->prev, temp->info,temp->next);" For better understanding run(refer OUTPUT) this you will know the pointer address of NODE for Doubly Link
}
int main()
{
    NODE *list = NULL, *temp;
    int n, pos;
    list = createlist(list);
    display(list);
}

/* output:Dont writ this just for info
Enter the element1
Prev Node address   DATA part  Next Node address
'0'                    25      '7b651480'
'7b651460'             12      '7b6514a0'
'7b651480'             1       '0' 
*/