/*26 B) Write a ‘C’ program to create two singly linked lists and concatenate one list at the
end of another list.*/

#include <stdio.h>
#include <malloc.h>

typedef struct node 
{
  int info;
  struct node * next;
}Node;

Node * createlist(Node * list) 
{
  Node * newnode, * temp;
  int i, n;
  printf("\nHow many elements: ");
  scanf("%d", & n);
  for (i = 1; i <= n; i++) 
  {
    newnode = (Node * ) malloc(sizeof(struct node));
    newnode -> next = NULL;
    printf("\nEnter element: ");
    scanf("%d", & newnode -> info);
    if (list == NULL)
      list = temp = newnode;
    else {
      temp -> next = newnode;
      temp = newnode;
    }
  }
  return list;
}

void concatenate_lists(Node* list1, Node* list2) {
    Node* temp = list1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = list2;
}

int main() {
    Node* list1 = createlist(NULL);
    Node* list2 = createlist(NULL);
    concatenate_lists(list1, list2);
    printf("Concatenated list: ");
    Node* temp = list1;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    return 0;
}

