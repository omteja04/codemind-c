#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int rc;//redcost
    rc=x*k;
    if(x<y)
    printf("%d",rc+x*(n-k));
    else
    printf("%d",rc+y*(n-k));
}