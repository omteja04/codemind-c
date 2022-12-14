#include<stdio.h>
int main()
{
    int i,n,m,mul=0;
    scanf("%d %d",&m,&n);
    for(i=m;i>=m && i<=n;i++)
    {
        if(i%3==0)
        mul++;
    }
    printf("%d ",mul);
}