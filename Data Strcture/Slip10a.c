// A) Write a ‘C’ program to read ‘n’ integers and store them in a Binary search tree and
// display the nodes level wise.

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

void displayLevel(struct node *root, int level) {
    if (root == NULL) {
        return;
    }
    if (level == 1) {
        printf("%d ", root->data);
    } else {
        displayLevel(root->left, level - 1);
        displayLevel(root->right, level - 1);
    }
}

void levelOrder(struct node *root) {
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++) {
        displayLevel(root, i);
    }
}

int height(struct node *node) {
    if (node == NULL) {
        return 0;
    }
    int lheight = height(node->left);
    int rheight = height(node->right);
    if (lheight > rheight) {
        return (lheight + 1);
    } else {
        return (rheight + 1);
    }
}

int main() {
    struct node *root = NULL;
    int n, i, data;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertNode(root, data);
    }
    printf("Level Order: ");
    levelOrder(root);
    return 0;
}
