#include<stdio.h>
int main()
{
    int a,b,l,m;
    scanf("%d %d",&a,&b);
    l=(a>b)?b:a;
    m=l;
    while(1)
    {
    if(l%a==0 && l%b==0)
    {
        printf("%d",l);
        break;
    }
    l+=m;
    }
}