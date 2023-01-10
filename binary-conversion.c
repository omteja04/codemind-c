#include<stdio.h>
int main()
{
    int n,i=0,arr[999];
    scanf("%d",&n);
    while(n!=0)
    {
        arr[i++]=n%2;
        n/=2;
    }

    for(i=i-1;i>=0;i--)
    printf("%d ",arr[i]);
}