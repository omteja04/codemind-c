#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],i,d,c=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
         if(a[i]>0)
        {
            d=log10(a[i])+1;
            if(d==k)
            c++;
        }
        else if(a[i]<0)
        {
            a[i]=abs(a[i]);
            d=log10(a[i])+1;
            if(d==k)
            c++;
        }
            else if(k==1 && a[i]==0)
                c++;
    }
    printf("%d",c);
}