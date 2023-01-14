#include<stdio.h>
int main()
{
    int tc,k;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int x,n,ppp;
        scanf("%d %d",&x,&n); //ppp --- points per prblm
        ppp=x/10;
        printf("%d
",ppp*n);
    }
}