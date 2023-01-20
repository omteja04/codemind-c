#include<stdio.h>
int main()
{
    int n,i,s=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)
    s+=i;
    if(s==n)
    printf("True");
    else
    printf("False");
}