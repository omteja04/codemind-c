#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        int j,n,flag=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
        if(n==j*j)
        flag=1;
        }
        if(flag==1)
        printf("True
");
        else
        printf("False
");
        
    }
}