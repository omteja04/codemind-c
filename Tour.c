#include<stdio.h>
int main()
{
    int tc,k=1;
    scanf("%d",&tc);
    while(k<=tc)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d
",n*5+m*7);
        k++;
    }
}