#include<stdio.h>
int main()
{
   long long int n,k;
    scanf("%lld",&n);
    if(n%10==0)
    {
        k=n/10;
        printf("%lld",k);
    }
    else if(n<0)
    {
        k=n/10-1;
        printf("%lld",k);
    }
    else
    {
        k=n/10;
        printf("%lld",k);
    }
}