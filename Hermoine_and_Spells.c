#include<stdio.h>
int main()
{
    int a,b,c,p=0;
    scanf("%d %d %d",&a,&b,&c);
    if(b<a && c<a)
    {
        if(b<c)
        printf("%d",a+c);
        else
        printf("%d",a+b);
    }
    else if(b>a && c<b)
    {
        if(a<c)
        printf("%d",b+c);
        else
        printf("%d",a+b);
    }
    else if(c>a && c>b)
    {
        if(a<b)
        printf("%d",b+c);
        else
        printf("%d",a+c);
    }
    
}