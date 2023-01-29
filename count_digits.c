#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    int a[n],i,b[n];
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
            a[i]=abs(a[i]);
            d=log10(a[i])+1;
            b[i]=d;
        }
        else
        b[i]=1;
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}