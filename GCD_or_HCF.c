#include<stdio.h>
int main()
{
    int m,n,g,i,max;
    scanf("%d %d",&m,&n);
    g=m>n?m:n;
    for(i=1;i<=g;i++)
    {
        if(m%i==0 && n%i==0)
        max=i;
    }
    printf("%d",max);
}