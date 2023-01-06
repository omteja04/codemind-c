#include<stdio.h>
#include<math.h>
int main()
{
    int n,tm=0,tc=0,bm;
    scanf("%d",&n);
    int a[n],b[n],i,j;
    for(i=0;i<n;i++) //i=svaed money
    {
        scanf("%d",&a[i]);
        tm+=a[i];
    }
    for(j=0;j<n;j++) //j=cost
    {
        scanf("%d",&a[j]);
        tc+=a[j];
    }
    if(tc>tm)
    {
    bm=abs(tc-tm);
    printf("%d",bm);
    }
    else
    {
        bm=0;
    printf("%d",bm);
    }
}