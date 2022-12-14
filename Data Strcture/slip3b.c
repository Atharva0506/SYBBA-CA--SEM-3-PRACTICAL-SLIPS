/* Write a ‘C’ program to read the adjacency matrix of directed graph and convert it 
 into adjacency list
*/
#include <stdio.h>
#include <malloc.h>
struct node
{
    int vertex;
    struct node *next;
} *list[10];
void creatematrix(int m[10][10], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            m[i][j] = 0;
            if (i != j)
            {
                printf("\n is edge between %d and %d :", i + 1, j + 1);
                scanf("%d", &m[i][j]);
            }
        }
    }
}
void displaymatrix(int m[10][10], int n)
{
    int i, j;
    printf("\n The adjacency matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
}
void createlist(int m[10][10], int n)
{
    int i, j;
    struct node *temp, *newnode;
    for (i = 0; i < n; i++)
    {
        list[i] = NULL;
        for (j = 0; j < n; j++)
        {
            if (m[i][j] == 1)
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->next = NULL;
                newnode->vertex = j + 1;
                if (list[i] == NULL)
                    list[i] = temp = newnode;
                else
                {
                    temp->next = newnode;
                    temp = newnode;
                }
            }
        }
    }
}
void displaylist(int n)
{
    struct node *temp;
    int i;
    printf("\nThe adjacency list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("\n v %d ->", i + 1);
        temp = list[i];
        while (temp)
        {
            printf("v %d->", temp->vertex);
            temp = temp->next;
        }
        printf("NULL");
    }
}
int main()
{
    int m[10][10], n;
    printf("\n enter the number of vertices:");
    scanf("%d", &n);
    creatematrix(m, n);
    displaymatrix(m, n);
    createlist(m, n);
    displaylist(n);
    return 0;
}