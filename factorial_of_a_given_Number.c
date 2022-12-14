#include<stdio.h>
int main()
{
    int i,n,f=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    f=f*i;
    
    printf("%d ",f);
}