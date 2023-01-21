/*28 A) Write a ‘C’ program to create a Binary Search tree and implements following
functions
- Create Binary Search Tree
- Search a node in binary search tree
- Display a binary search tree (Post order Traversal)*/

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

void postorder(Node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d\t ",root->info);
        
    }
}

Node* searchNode(Node* root, int key) {
    if (root == NULL || root->info == key) {
        return root;
    }
    if (root->info < key) {
        return searchNode(root->right, key);
    }
    return searchNode(root->left, key);
}

int main() {
    Node* root = NULL;
    int key,position;
    
	root = createbst(root);
    
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    
    Node* temp = root;
    while(temp != NULL){
        if(temp->info == key){
            printf("Key found at position %d\n", position+1);
            break;
        }
        else if(temp->info < key)
            temp = temp->right;
        else
            temp = temp->left;
        position++;
    }
    if(temp == NULL)
        printf("Key not found\n");
    
	printf("\n postorder traversal");
    postorder(root);
	
    return 0;
}
