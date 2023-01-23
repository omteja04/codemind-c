#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,p,s=0,m;
    scanf("%d",&n);
    m=n;
    while(n)
    {
        d=log10(n)+1;
        r=n%10;
        n/=10;
        p=pow(r,d);
        s+=p;
    }
    if(s==m)
    printf("True");
    else
    printf("False");
}