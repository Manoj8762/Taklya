#include <stdio.h> 
void createAdjMatrix(int N, int Adj[][N + 1], int arr[][2], int M) 
{ 
for (int i = 1; i < N + 1; i++) 
{ 
for (int j = 1; j < N + 1; j++) 
{ 
Adj[i][j] = 0; 
} 
} 
for (int i = 0; i < M; i++) 
{ 
int x = arr[i][0]; 
int y = arr[i][1]; 
Adj[x][y] = 1; 
Adj[y][x] = 1; 
} 
} 
void printAdjMatrix(int N, int Adj[][N + 1]) 
{ 
for (int i = 1; i < N + 1; i++) 
{ 
for (int j = 1; j < N + 1; j++) 
{ 
printf("%d ", Adj[i][j]); 
} 
printf("\n"); 
} 
} 
int main() 
{ 
int N, M; 
printf("Enter the number of vertices: "); 
scanf("%d", &N); 
printf("Enter the number of edges: "); 
scanf("%d", &M); 
int arr[M][2]; 
printf("Enter edges (vertex pairs):\n"); 
for (int i = 0; i < M; i++) 
{ 
scanf("%d %d", &arr[i][0], &arr[i][1]); 
} 
 
int Adj[N + 1][N + 1]; 
createAdjMatrix(N, Adj, arr, M); 
printf("\nAdjacency Matrix:\n"); 
printAdjMatrix(N, Adj); 
 
return 0; 
} 