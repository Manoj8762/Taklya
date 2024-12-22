#include <stdio.h> 
#include <math.h> 
int n, i, j, visited[10], queue[10], front = -1, rear = -1, a[10][10]; 
void bfs(int v) 
{ 
visited[v] = 1; 
printf("%d ", v); 
queue[++rear] = v; 
while (front != rear) 
{ 
v = queue[++front]; 
for (i = 1; i <= n; i++) 
{ 
if (a[v][i] && !visited[i]) 
{ 
printf("%d ", i); 
visited[i] = 1; 
queue[++rear] = i; 
} 
} 
} 
} 
int main() 
{ 
int v; 
printf("Enter the no. of vertices:"); 
scanf("%d", &n); 
printf("Enter the graph in matrix form:\n"); 
for (i = 1; i <= n; i++) 
{ 
for (j = 1; j <= n; j++) 
{ 
scanf("%d", &a[i][j]); 
} 
} 
printf("Enter starting point:"); 
scanf("%d", &v); 
printf("The nodes which are reachable are: "); 
bfs(v); 
printf("\n"); 
return 0; 
} 
