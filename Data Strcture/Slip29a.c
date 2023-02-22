/*A) Write a ‘C’ program to create a Binary tree, traverse it using recursive operations
like inorder, preorder and postorder and display the result of each one separately.*/


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

void preorder(Node * root)
{
    if(root != NULL)
    {
        printf(" %d\t ",root->info);
        preorder(root->left);
        preorder(root->right);
        
    }
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
void inorder(Node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf(" %d\t ",root->info);
        inorder(root->right);
    }
}

int main()
{
    Node * root=NULL;
    root=createbst(root);
    
    printf("\n preorder traversal");
    preorder(root);
    printf("\n inorder traversal");
    inorder(root);
    printf("\n postorder traversal");
    postorder(root);

    return 0;
}


