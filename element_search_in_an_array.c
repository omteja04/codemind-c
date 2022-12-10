#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}