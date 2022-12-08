#include<stdio.h>
void hrmin(int s)
{
    int h,m;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}
int main()
{
    int h,m,s;
    scanf("%d",&s);
    hrmin(s);
}