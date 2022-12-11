#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    printf("NORMAL");
    if(n%3==1)
    printf("HUGE");
    if(n%3==2)
    printf("SMALL");
}