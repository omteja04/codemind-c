#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i+=2)
        printf("%d x %d = %d
",n,i,n*i);
}