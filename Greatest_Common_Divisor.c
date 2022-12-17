#include<stdio.h>
int main()
{
    int a,b,l,i,max;
    scanf("%d %d",&a,&b);
    l=(a<b)?b:a;
    for(i=1;i<=l;i++)
    {
        if(a%i==0 && b%i==0)
        {
            max=i;
        }
    }
    printf("%d",max);
}