#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[n],count=0;
    int avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=floor(sum/n);
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        count++;
    }
    printf("%d",count);
}