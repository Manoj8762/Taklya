#include <stdio.h> 
#include <stdbool.h> 
#include <stddef.h> 
#define MAX 10 
void accept_graph(int G[][MAX], int n) { 
int i, j; 
for (i = 0; i < n; i++) { 
for (j = 0; j < n; j++) { 
printf("Edge (V%d,V%d) exists? (Yes=1, No=0):", i, j); 
scanf("%d", &G[i][j]); 
} 
} 
} 
void disp_adj_mat(int G[][MAX], int n) { 
int i, j; 
for (i = 0; i < n; i++) { 
for (j = 0; j < n; j++) { 
printf("%4d", G[i][j]); 
} 
printf("\n"); 
} 
} 
void calc_out_degree(int G[][MAX], int n) { 
int i, j, sum; 
for (i = 0; i < n; i++) { 
sum = 0; 
for (j = 0; j < n; j++) { 
sum += G[i][j]; 
} 
printf("out-deg(V%d)=%d\n", i, sum); 
} 
} 
void calc_in_degree(int G[][MAX], int n) { 
int i, j, sum; 
for (i = 0; i < n; i++) { 
sum = 0; 
for (j = 0; j < n; j++) { 
sum += G[j][i]; 
} 
printf("in-deg(V%d)=%d\n", i, sum); 
} 
} 
int main() { 
int G[MAX][MAX], n; 
printf("Enter no. of vertices:"); 
scanf("%d", &n); 
accept_graph(G, n); 
printf("Adjacency Matrix:\n"); 
disp_adj_mat(G, n); 
printf("Out degree:\n"); 
calc_out_degree(G, n); 
printf("In degree:\n"); 
calc_in_degree(G, n); 
return 0; 
} 
