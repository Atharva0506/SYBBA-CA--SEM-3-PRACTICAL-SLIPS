// A) Write menu driven program using ‘C’ for Binary Search Tree. The menu includes
// - Create a Binary Search Tree
// - Insert element in a Binary Search Tree
// - Display


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *insertNode(struct node *root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void main() {
    struct node *root = NULL;
    int choice, data;
    while (1) {
        printf("Menu:\n");
        printf("1. Create a Binary Search Tree\n");
        printf("2. Insert element in a Binary Search Tree\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                root = NULL;
                printf("Binary Search Tree created\n");
                break;
            case 2:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;
            case 3:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
