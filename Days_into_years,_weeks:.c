#include<stdio.h>
int main()
{
    int d,y,r,w;
    scanf("%d",&d);
    y=d/365;
    r=d%365;
    w=r/7;
    printf("%d
%d",y,w);
    
}