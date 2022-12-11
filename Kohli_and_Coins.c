#include<stdio.h>
int main()
{
    int fr,tr,t;
    scanf("%d",&t);
    if(t%10==5 || t%10==0)
    {
        if(t%10==0)
        printf("%d",t/10);
        else if(t%10==5)
        printf("%d",(t/10)+1);
    }
    else
    printf("-1");
}