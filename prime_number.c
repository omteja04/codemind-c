#include<stdio.h>
int main()
{
    int n,fac=1,d,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
     fac++;
    }
    if(fac==2)
    printf("prime");
    else
    printf("not a prime");
}