/*Write a C program that accepts the graph as an adjacency matrix and checks if the 
graph is undirected. The matrix for undirected graph is symmetric. Also calculate in 
degree of all vertices
- Read a graph as adjacency Matrix
- Check the matrix is symmetric or not
- Calculate indegree of all vertices
*/

#include<stdio.h>
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
void indegreecal(int m[10][10], int n)
{
    int sumin = 0, v, i;
    for (v = 0; v < n; v++)
    {
        sumin = 0;
        for (i = 0; i < n; i++)
        {
            sumin = sumin + m[i][v];
        }
printf("\n for vertex %d in degree is %d ",v+1,sumin);
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
    indegreecal(m, n);
    return 0;
}