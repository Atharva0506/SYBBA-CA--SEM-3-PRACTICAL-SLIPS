// Write menu driven program using ‘C’ for Binary Search Tree. The menu includes
// - Create a Binary Search Tree
// - Display
// - Search the element in Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(struct node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
        return;
    }
    if (data < (*root)->data) {
        insert(&((*root)->left), data);
    } else {
        insert(&((*root)->right), data);
    }
}

void display(struct node* root) {
    if (root != NULL) {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
    }
}

int search(struct node* root, int data) {
    if (root == NULL) {
        return 0;
    }
    if (root->data == data) {
        return 1;
    }
    if (root->data > data) {
        return search(root->left, data);
    }
    return search(root->right, data);
}

int main() {
    int choice, data;
    while (1) {
        printf("1. Create a Binary Search Tree\n");
        printf("2. Display\n");
        printf("3. Search the element in Binary Search Tree\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                insert(&root, data);
                break;
            case 2:
                display(root);
                break;
            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &data);
                if (search(root, data)) {
                    printf("Element found\n");
                } else {
                    printf("Element not found\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
