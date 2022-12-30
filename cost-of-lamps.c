#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int cost;
    cost=x*k+y*(n-k);
    printf("%d",cost);
}