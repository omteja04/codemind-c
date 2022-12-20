#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,k,d,m;
    scanf("%d",&n);
    m=n;
    while(n)
    {
        d=log10(n)+1;
        k=n%10;
        sum=sum+pow(k,d);
        n=n/10;
    }
    if(m==sum)
    printf("True");
    else
    printf("False");
}