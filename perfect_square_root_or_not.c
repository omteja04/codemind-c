#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        flag=1;
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}