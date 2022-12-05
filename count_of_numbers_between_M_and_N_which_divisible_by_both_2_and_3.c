#include<stdio.h>
int main()
{
    int m,n,i,mul=0;
    scanf("%d %d",&m,&n);
    for(i=m;i>=m&&i<=n;i++)
    {
        if(i%6==0)
        mul++;
    }
    printf("%d",mul);
}