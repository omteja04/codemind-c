#include<stdio.h>
int main()
{
    int n,k,max;
    scanf("%d",&n);
    int arr[n],g,i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    
    max=arr[0];
    for(i=0;i<n;i++)
    if(max<arr[i])
    max=arr[i];
    for(i=0;i<n;i++)
    {
        g=arr[i]+k;
        if(g>=max)
        printf("True ");
        else
        printf("False ");
    }
}