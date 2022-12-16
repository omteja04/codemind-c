#include<stdio.h>
int main()
{
    int n,k,m,km;
    scanf("%d %d %d",&n,&k,&m);
    km=m*k;
    if(n%km==0)
    printf("%d",n/km);
    else
    printf("%d",n/km + 1);
}