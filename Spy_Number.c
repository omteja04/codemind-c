#include<stdio.h>
int main()
{
    int n,s=0,p=1;
    scanf("%d",&n);
    while(n)
    {
        s+=n%10;
        p*=n%10;
        n/=10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}