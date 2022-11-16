/*Write a 'C' program to create a singly linked list and count total number of nodes in it and display the list and total number of Nodes.*/


#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    int info;
    struct node *next;
}Node;

Node * createlist(Node *list)
{
    Node *newnode,*temp;
    int i,n;
    printf("\n how mnay elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(Node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("\n enter element");
        scanf("%d",&newnode->info);
        if(list==NULL)
        list=temp=newnode;
        else
        {
            temp->next= newnode;
            temp=newnode;
        }
    }
    return list;
    
}
void display(Node *list)
{
    int i=0;
    Node * temp;
    for(temp=list;temp!=NULL;temp=temp->next)
     {
i++;    
    printf("%d\t",temp->info);
    }
    printf("total nodes are %d", i);
}
int main()
{
   Node * list=NULL,*temp;
   int n,pos;
   list=createlist(list);
   display(list);
}
