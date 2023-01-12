#include<stdio.h>
int main()
{
    int n,k,temp;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;                                  
        }
    }
    printf("%d",arr[k-1]);
}