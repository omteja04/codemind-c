#include<stdio.h>
int main()
{
    int n,m,sq,d,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        d=sq%10;
        sq/=10;
        sum+=d;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}