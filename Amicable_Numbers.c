#include<stdio.h>
int main()
{
    int m,n,f1=0,f2=0,i;
    scanf("%d %d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        f1+=i;
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        f2+=i;
    }
    if(f2==m && f1==n)
    printf("Amicable");
    else
    printf("Not Amicable");
}