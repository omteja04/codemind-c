#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d",&m);
    h=m/60;
    m=m%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}