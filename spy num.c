#include<stdio.h>
int main()
{
    int n,d,p=1,s=0;
    scanf("%d",&n);
    for(;n>0;)
    {
        d=n%10;
        n=n/10;
        p=p*d;
        s=s+d;
    }
    if(p==s)
    printf("Spy Number");
    else 
    printf("Not Spy Number");
}