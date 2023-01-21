//18 A) Write a ‘C’ program to read ‘n’ integers and store them in a binary Search tree
//structure and count the following and display it.
//- Number of nodes
//- Degree of tree
//- Leaf nodes

#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* left;
    struct node* right;
};

typedef struct node Node;

Node* createbst(Node* root) {
    Node* newnode, *temp;
    int num, n, i;

    printf("Enter how many nodes to be added: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        newnode = (Node*)malloc(sizeof(struct node));
        newnode->left = newnode->right = NULL;
        printf("Enter element: ");
        scanf("%d", &newnode->info);

        if (root == NULL) {
            root = newnode;
        } else {
            temp = root;
            while (temp != NULL) {
                if (newnode->info < temp->info) {
                    if (temp->left == NULL) {
                        temp->left = newnode;
                        break;
                    } else {
                        temp = temp->left;
                    }
                } else {
                    if (temp->right == NULL) {
                        temp->right = newnode;
                        break;
                    } else {
                        temp = temp->right;
                    }
                }
            }
        }
    }
    return root;
}

int countNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeafNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int maxDegree(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftDegree = maxDegree(root->left);
    int rightDegree = maxDegree(root->right);
    return 1 + (leftDegree > rightDegree ? leftDegree : rightDegree);
}


int main() {
    Node* root = NULL;
    root = createbst(root);
    int numNodes = countNodes(root);
    int numLeafNodes = countLeafNodes(root);
    int degree = maxDegree(root);
    printf("Number of nodes: %d\n", numNodes);
    printf("Degree of tree: %d\n", degree);
    printf("Number of leaf nodes: %d\n", numLeafNodes);
    return 0;
}

