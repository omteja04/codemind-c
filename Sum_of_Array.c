#include<stdio.h>
int main()
{
    int n,s=0,i,a[999];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    s+=a[i];
    printf("%d",s);
}