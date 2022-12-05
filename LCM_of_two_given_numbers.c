#include<stdio.h>
int main()
{
    int a,b,l;
    scanf("%d %d",&a,&b);
    l=(a>b)?b:a;
    while(1)
    {
    if(l%a==0 && l%b==0)
    {
    printf("%d",l);
    break;
    }
    l++;
    }
}