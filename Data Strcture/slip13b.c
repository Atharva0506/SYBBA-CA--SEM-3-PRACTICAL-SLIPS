//Write a 'C' program to create doubly link list and display nodes having odd value


#include <stdio.h>

typedef struct node
{

struct node *prev, *next;
int info;
}NODE;

NODE* createlist (NODE * list)
{

NODE *newnode, *temp;



int i,n;
printf("\nHow many elements :");

scanf("%d", &n);

for (i=1;i<=n;i++)
{
newnode=(NODE *)malloc(sizeof(struct node));
 newnode-> prev = newnode->next = NULL;
 printf("\nEnter the element"); 
scanf("%d", &newnode->info);

if (list==NULL)
 list=temp=newnode;

else
{

temp->next=newnode;

newnode-> prev = temp;

temp=newnode;

}

}


return list;

}

void display(NODE *list)
{
    NODE * temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
    if(temp->info % 2  !=  0)
        printf("%d\t",temp->info);
    }
    
}
int main()
{
   NODE * list=NULL,*temp;
   int n,pos;
   list=createlist(list);
   display(list);
}
