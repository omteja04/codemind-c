#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,q,r,s=0;
    scanf("%d",&n);
    d=log10(n)+1;
    q=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s+pow(r,d);
    }
    if(s==q)
    printf("Armstrong Number");
    else
     printf("Not An Armstrong Number");
}