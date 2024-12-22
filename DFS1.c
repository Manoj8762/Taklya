#include <stdio.h> 
int graph[20][20] = {0}; 
int visited[20] = {0}; 
void DFS(int graph[][20], int visited[], int vertices, int start) 
{ 
printf("%d ", start); 
visited[start] = 1; 
for (int i = 0; i<vertices; i++) 
{ 
if (graph[start][i]==1 && !visited[i]) 
{ 
DFS(graph, visited, vertices, i); 
} 
} 
} 
int main() 
{ 
int vertices, edges; 
printf("Enter the number of vertices: "); 
scanf("%d", &vertices); 
printf("Enter the number of edges: "); 
scanf("%d", & edges); 
for (int i = 0; i < edges; i++) 
{ 
int start, end; 
printf("Enter edge %d (start end): ", i+1); 
scanf("%d %d", &start, &end); 
graph[start][end] = 1; 
} 
int startVertex; 
printf("Enter the starting vertex for DFS traversal: "); 
scanf("%d", &startVertex); 
printf("DFS Traversal Order: "); 
DFS(graph, visited, vertices, startVertex); 
return 0; 
} 