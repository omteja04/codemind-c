#include<stdio.h>
int main()
{
    int n,i=0,j=1,c,k;
    scanf("%d",&n);
    printf("%d %d ",i,j);
    for(c=3;c<=n;c++)
    {
    k=i+j;
    i=j;
    j=k;
    printf("%d ",k);
    }
    
}