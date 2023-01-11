#include<stdio.h>
int main()
{
    int n,k=-1,i;
    scanf("%d",&n);
    printf("0 ");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        else
        {
            k+=1;
        printf("%d ",k);
        }
    }
    
}