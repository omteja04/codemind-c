#include<stdio.h>
int main()
{
    int n,m,i,g,max;
    scanf("%d %d",&n,&m);
    g=(n>m)?n:m;
    for(i=1;i<=g;i++)
    {
        if(n%i==0&&m%i==0)
         max=i;
    }
    printf("%d",max);
}