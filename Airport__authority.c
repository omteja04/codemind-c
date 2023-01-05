#include<stdio.h>
int main()
{
    int n,tw,c=0;
    scanf("%d",&n);
    int w[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&w[i]);
    scanf("%d",&tw);
    for(i=0;i<n;i++)
    {
        if(w[i]>tw)
        c++;
    }
    printf("%d",2*c+n-c);
}