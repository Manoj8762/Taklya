#include<stdio.h> 
int w[10],x[10],count=0,d; 
void sum_subset(int cs,int k,int r) 
{ 
int i; 
x[k]=1; 
if(cs+w[k] == d) 
{ 
printf("\n Solution %d: ",++count); 
for(i=0;i<=k;i++) 
if(x[i] == 1) 
printf("%d\t",w[i]); 
} 
else if(cs+w[k]+w[k+1]<=d) 
sum_subset(cs+w[k],k+1,r-w[k]); 
if(cs+r-w[k]>=d && cs+w[k]<=d) 
{ 
x[k]=0; 
sum_subset(cs,k+1,r-w[k]); 
} 
} 
void main() 
{ 
int n,i,sum=0; 
printf("\n Enter number of elements: "); 
scanf("%d",&n); 
printf("\n Enter The Elements in increasing order: "); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&w[i]); 
sum=sum+w[i];
} 
printf("\n Enter sum of subsets: "); 
scanf("%d",&d); 
if(sum<d) 
printf("\n No Solutions"); 
sum_subset(0,0,sum); 
if(count==0) 
printf("\n No Solutions"); 
} 