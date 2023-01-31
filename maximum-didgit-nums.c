#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    int a[n],i,b[n],max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            d=log10(a[i])+1;
            b[i]=d;
        }
        else if(a[i]<0)
        {
            d=log10(abs(a[i]))+1;
            b[i]=d;
        }
        else
        b[i]=1;
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==max)
        printf("%d ",a[i]);
    }
}