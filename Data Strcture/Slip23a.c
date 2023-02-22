/*A) Write a menu driven program using ‘C’ for singly linked list-
- To create linked list.
- To display linked list
- To insert node at last position of linked list.
- To delete node from specific position of linked list.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node* next;
} Node;

Node* head = NULL;

void createList() {
    Node* newnode, *temp;
    int i, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        newnode = (Node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        printf("\nEnter element: ");
        scanf("%d", &newnode->info);
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void displayList() {
    Node* temp;
    temp = head;
    if (temp == NULL) {
        printf("\nList is empty");
    } else {
        printf("\nElements in the list: ");
        while (temp != NULL) {
            printf("%d ", temp->info);
            temp = temp->next;
        }
    }
}

void insertNode() {
    Node* newnode, *temp;
    int data;
    newnode = (Node*)malloc(sizeof(struct node));
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &data);
    newnode->info = data;
    newnode->next = NULL;
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    printf("\nElement inserted successfully!");
}

void deleteNode() {
    Node* temp, *prev;
    int pos, i;
    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d", &pos);
    temp = head;
    if (pos == 1) {
        head = temp->next;
        free(temp);
        printf("\nElement deleted successfully!");
    } else {
        for (i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
        printf("\nElement deleted successfully!");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:");
        printf("\n1. Create List");
        printf("\n2. Display List");
        printf("\n3. Insert Node at Last");
        printf("\n4. Delete Node");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                createList();
				break;
			case 2:
				displayList();
				break;
			case 3:
				insertNode();
				break;
			case 4:
				deleteNode();
				break;
			case 5:
				exit(0);
				break;
				default:
				printf("\nInvalid choice!");
		}
	}
return 0;
}
