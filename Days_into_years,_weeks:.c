#include<stdio.h>
void yrweek(int d)
{
    int y,w;
y=d/365;
d=d%365;
w=d/7;

    printf("%d
%d",y,w);
}
int main()
{
    int y,d,w;
    scanf("%d",&d);
    yrweek(d);
}
