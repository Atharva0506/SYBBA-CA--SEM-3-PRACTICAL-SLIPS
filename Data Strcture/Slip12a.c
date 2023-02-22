// Write a C program that accepts the graph as an adjacency matrix and checks if the
// graph is undirected. The matrix for undirected graph is symmetric. Also calculate in
// degree of all vertices
// - Read a graph as adjacency Matrix
// - Check the matrix is symmetric or not
// - Calculate indegree of all vertices


#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int graph[MAX][MAX], V;

bool isUndirected() {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] != graph[j][i]) {
                return false;
            }
        }
    }
    return true;
}

void inDegree() {
    int inDegree[V];
    for (int i = 0; i < V; i++) {
        inDegree[i] = 0;
    }
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[j][i]) {
                inDegree[i]++;
            }
        }
    }
    for (int i = 0; i < V; i++) {
        printf("In-degree of vertex %d: %d\n", i, inDegree[i]);
    }
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    if (isUndirected()) {
        printf("The graph is undirected.\n");
    } else {
        printf("The graph is directed.\n");
    }
    inDegree();
    return 0;
}
