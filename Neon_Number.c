#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int sq=n*n;
    while(sq)
    {
        s+=sq%10;
        sq/=10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}