
#include<stdio.h>
#include<math.h>

void interest(int p,int r,int t)
{
    double ci;
    ci=p*pow((1+r/100.0),t);
    printf("%.2lf",ci);
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    interest(p,r,t);
}
